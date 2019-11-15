import 'package:flutter/material.dart';

import 'package:im_flutter_sdk/im_flutter_sdk.dart';

import 'package:im_flutter_sdk_example/utils/style.dart';
import 'package:im_flutter_sdk_example/utils/time_util.dart';

class EMConversationListItem extends StatefulWidget{

  final EMConversation con;
  final EMConversationListItemDelegate delegate;
  const EMConversationListItem(this.con, this.delegate);
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return _EMConversationListItemState(this.con, this.delegate);
  }
}

class _EMConversationListItemState extends State<EMConversationListItem>{
  EMConversationListItemDelegate delegate;
  EMConversation con;
  EMMessage message;
  int underCount;
  String titleName;
  String content;
  Offset tapPos;

  _EMConversationListItemState(EMConversation con, EMConversationListItemDelegate delegate){
    this.con = con;
    this.delegate = delegate;
  }

  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    getData();
  }

  void getData() async{
    message = await con.getLastMessage();
    switch(message.type){
      case EMMessageType.TXT:
        var body = message.body as EMTextMessageBody;
        content = body.message;
        break;
      case EMMessageType.IMAGE:
        content = '[图片]';
        break;
      case EMMessageType.VIDEO:
        content = '[视频]';
        break;
      case EMMessageType.FILE:
        content = '[文件]';
        break;
      case EMMessageType.VOICE:
        content = '[语音]';
        break;
      default:
        content = '';
    }
    underCount = await con.getUnreadMsgCount();
    titleName = con.conversationId;
    if(con.isGroup()){
      EMGroup group = await EMClient.getInstance().groupManager().getGroup(con.conversationId);
      if(group != null){
        titleName = group.getGroupName();
      }
    }
    _refresh();
  }

  void _refresh(){
    setState(() {

    });
  }

  void _onTaped() {
    if(this.delegate != null) {
      this.delegate.onTapConversation(this.con);
    }else {
      print("没有实现 EMConversationListItemDelegate");
    }
  }

  void _onLongPressed() {
    if(this.delegate != null) {
      this.delegate.onLongPressConversation(this.con,this.tapPos);
    }else {
      print("没有实现 EMConversationListItemDelegate");
    }
  }

  Widget _buildUserPortrait(){
    Widget protraitWidget = Image.asset('images/ease_default_avatar.png');
    if(con.isGroup()){
      protraitWidget = Image.asset('images/ease_group_icon.png');
    }
    return ClipOval(
      child: Container(
        height: EMLayout.EMConListPortraitSize,
        width: EMLayout.EMConListPortraitSize,
        child: protraitWidget,
      ),
    );
  }

  Widget _buildUnreadMark(){
    if(underCount > 0){
      return Positioned(
        right: 0.0,
        top: 0.0,
        child: Container(
          width: EMLayout.EMConListUnreadSize,
          height: EMLayout.EMConListUnreadSize,
          alignment: Alignment.center,
          decoration: BoxDecoration(
              shape: BoxShape.circle,
              color: Color(EMColor.EMConListUnreadColor)
          ),
        ),
      );
    }
    return Container(
      height: 1,
      width: 1,
    );

  }

  Widget _buildPortrait(){
    return Stack(
      overflow: Overflow.visible,
      children: <Widget>[
        Row(
          children: <Widget>[
            SizedBox(
              width: 8,
            ),
            _buildUserPortrait(),
          ],
        ),
        _buildUnreadMark(),
      ],
    );
  }

  Widget _buildContent(){
    return Expanded(
      child: Container(
        height: EMLayout.EMConListItemHeight,
        margin: EdgeInsets.only(left:10, right: 10),
        decoration:  BoxDecoration(
            border: Border(
                bottom: BorderSide(width: 0.5,color: Color(EMColor.EMConListBorderColor),)
            )
        ),
        child: Row(
          children: <Widget>[
            _buildTitle(),
            _buildTime(),
          ],
        ),
      ),
    );
  }

  Widget _buildTitle(){
    return Expanded(
      child : Column(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.start,
        children: <Widget>[
          Text(
            titleName,
            style: TextStyle(fontSize: EMFont.EMConListNameFont,color: Color(EMColor.EMConListTitleColor),fontWeight:FontWeight.w400),
            maxLines: 1,
            overflow: TextOverflow.ellipsis,
          ),
          SizedBox(height: 6,),
          Text(
            content,
            style: TextStyle(fontSize: EMFont.EMConListContentFont,color: Color(EMColor.EMConListContentColor)),
            maxLines: 1,
            overflow: TextOverflow.ellipsis,
          )
        ],
      ),
    );
  }

  Widget _buildTime(){
    var time = TimeUtil.convertTime(int.parse(message.msgTime));
    return Container(
      width: EMLayout.EMConListItemHeight,
      margin: EdgeInsets.only(right:10),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: <Widget>[
          Text(time,style:TextStyle(fontSize: EMFont.EMConListTimeFont,color: Color(EMColor.EMConListTimeColor))),
          SizedBox(height: 20,)
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    if(!(message == null)) {
      return Material(
        color: Color(EMColor.EMConListItemBgColor),
        child: InkWell(
          onTapDown: (TapDownDetails details) {
            tapPos = details.globalPosition;
          },
          onTap: () {
            _onTaped();
          },
          onLongPress: () {
            _onLongPressed();
          },
          child: Container(
            height: EMLayout.EMConListItemHeight,
            color: Color(EMColor.EMConListItemBgColor),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                _buildPortrait(),
                _buildContent(),
              ],
            ),
          ),
        ),
      );
    }
    return Container(
      height: 1,
      width: 1,
    );
  }
}

abstract class EMConversationListItemDelegate {
  ///点击了会话 item
  void onTapConversation(EMConversation conversation);
  ///长按了会话 item
  void onLongPressConversation(EMConversation conversation,Offset tapPos);
}