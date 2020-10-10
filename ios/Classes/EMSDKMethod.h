//
//  EMSDKMethod.h
//  
//
//  Created by 杜洁鹏 on 2019/10/8.
//

#import <Foundation/Foundation.h>


static NSString * const EMMethodKeyDebugLog = @"debugLog";
static NSString * const EMMethodKeyErrorLog = @"errorLog";


#pragma mark - EMClientWrapper
static NSString * const EMMethodKeyInit = @"init";
static NSString * const EMMethodKeyCreateAccount = @"createAccount";
static NSString * const EMMethodKeyLogin = @"loginWithUsername";
static NSString * const EMMethodKeyLoginWithToken = @"loginWithToken";
static NSString * const EMMethodKeyLogout = @"logout";
static NSString * const EMMethodKeyChangeAppKey = @"changeAppKey";
static NSString * const EMMethodKeyIsLoggedInBefore = @"isLoggedInBefore";
static NSString * const EMMethodKeySetNickname = @"setNickname";
static NSString * const EMMethodKeyUploadLog = @"uploadLog";
static NSString * const EMMethodKeyCompressLogs = @"compressLogs";
static NSString * const EMMethodKeyKickDevice = @"kickDevice";
static NSString * const EMMethodKeyKickAllDevices = @"kickAllDevices";
static NSString * const EMMethodKeyCurrentUser = @"currentUser";
static NSString * const EMMethodKeyGetLoggedInDevicesFromServer = @"getLoggedInDevicesFromServer";

#pragma mark - EMClientDelegate
static NSString * const EMMethodKeyOnConnected = @"onConnected";
static NSString * const EMMethodKeyOnDisconnected = @"onDisconnected";
static NSString * const EMMethodKeyOnMultiDeviceEvent = @"onMultiDeviceEvent";

#pragma mark - EMContactManagerWrapper
static NSString * const EMMethodKeyAddContact = @"addContact";
static NSString * const EMMethodKeyDeleteContact = @"deleteContact";
static NSString * const EMMethodKeyGetAllContactsFromServer = @"getAllContactsFromServer";
static NSString * const EMMethodKeyAddUserToBlackList = @"addUserToBlackList";
static NSString * const EMMethodKeyRemoveUserFromBlackList = @"removeUserFromBlackList";
static NSString * const EMMethodKeyGetBlackListFromServer = @"getBlackListFromServer";
static NSString * const EMMethodKeyAcceptInvitation = @"acceptInvitation";
static NSString * const EMMethodKeyDeclineInvitation = @"declineInvitation";
static NSString * const EMMethodKeyGetSelfIdsOnOtherPlatform = @"getSelfIdsOnOtherPlatform";

#pragma mark - EMContactDelegate
static NSString * const EMMethodKeyOnContactChanged = @"onContactChanged";

#pragma mark - EMChatManagerWrapper
static NSString * const EMMethodKeySendMessage = @"sendMessage";
static NSString * const EMMethodKeyAckMessageRead = @"ackMessageRead";
static NSString * const EMMethodKeyRecallMessage = @"recallMessage";
static NSString * const EMMethodKeyGetMessage = @"getMessage";
static NSString * const EMMethodKeyGetConversation = @"getConversation";
static NSString * const EMMethodKeyMarkAllChatMsgAsRead = @"markAllChatMsgAsRead";
static NSString * const EMMethodKeyGetUnreadMessageCount = @"getUnreadMessageCount";
static NSString * const EMMethodKeySaveMessage = @"saveMessage";
static NSString * const EMMethodKeyUpdateChatMessage = @"updateChatMessage";
static NSString * const EMMethodKeyDownloadAttachment = @"downloadAttachment";
static NSString * const EMMethodKeyDownloadThumbnail = @"downloadThumbnail";
static NSString * const EMMethodKeyImportMessages = @"importMessages";
static NSString * const EMMethodKeyGetConversationsByType = @"getConversationsByType";
static NSString * const EMMethodKeyDownloadFile = @"downloadFile";
static NSString * const EMMethodKeyGetAllConversations = @"getAllConversations";
static NSString * const EMMethodKeyLoadAllConversations = @"loadAllConversations";
static NSString * const EMMethodKeyDeleteConversation = @"deleteConversation";
static NSString * const EMMethodKeySetVoiceMessageListened = @"setVoiceMessageListened";
static NSString * const EMMethodKeyUpdateParticipant = @"updateParticipant";
static NSString * const EMMethodKeyFetchHistoryMessages = @"fetchHistoryMessages";
static NSString * const EMMethodKeySearchChatMsgFromDB = @"searchChatMsgFromDB";
static NSString * const EMMethodKeyGetCursor = @"getCursor";

#pragma mark - EMChatManagerDelegate
static NSString * const EMMethodKeyOnMessagesReceived = @"onMessagesReceived";
static NSString * const EMMethodKeyOnCmdMessagesReceived = @"onCmdMessagesReceived";
static NSString * const EMMethodKeyOnMessageRead = @"onMessageRead";
static NSString * const EMMethodKeyOnMessageDelivered = @"onMessageDelivered";
static NSString * const EMMethodKeyOnMessageRecalled = @"onMessageRecalled";
static NSString * const EMMethodKeyOnMessageChanged = @"onMessageChanged";
static NSString * const EMMethodKeyOnConversationUpdate = @"onConversationUpdate";
static NSString * const EMMethodKeyAddMessageListener = @"addMessageListener";

#pragma mark - EMMessageListener
static NSString * const EMMethodKeyOnMessageProgressUpdate = @"onMessageProgressUpdate";
static NSString * const EMMethodKeyOnMessageSuccess = @"onMessageSuccess";
static NSString * const EMMethodKeyOnMessageError = @"onMessageError";

#pragma mark - EMConversationWrapper

static NSString * const EMMethodKeyGetUnreadMsgCount = @"getUnreadMsgCount";
static NSString * const EMMethodKeyMarkAllMsgsAsRead = @"markAllMessagesAsRead";

static NSString * const EMMethodKeyMarkMsgAsRead = @"markMessageAsRead";
static NSString * const EMMethodKeyRemoveMsg = @"removeMessage";
static NSString * const EMMethodKeyGetLatestMsg = @"getLatestMessage";
static NSString * const EMMethodKeyGetLatestMsgFromOthers = @"getLatestMessageFromOthers";
static NSString * const EMMethodKeyClear = @"clear";
static NSString * const EMMethodKeyClearAllMsg = @"clearAllMessages";
static NSString * const EMMethodKeyInsertMsg = @"insertMessage";
static NSString * const EMMethodKeyAppendMsg = @"appendMessage";
static NSString * const EMMethodKeyUpdateConversationMsg = @"updateConversationMessage";
static NSString * const EMMethodKeyGetMsgAttachmentPath = @"getMessageAttachmentPath";

static NSString * const EMMethodKeyLoadMsgWithId = @"loadMsgWithId";
static NSString * const EMMethodKeyLoadMsgWithStartId = @"loadMsgWithStartId";
static NSString * const EMMethodKeyLoadMsgWithKeywords = @"loadMsgWithKeywords";
static NSString * const EMMethodKeyLoadMsgWithMsgType = @"loadMsgWithMsgType";
static NSString * const EMMethodKeyLoadMsgWithTime = @"loadMsgWithTime";



#pragma mark - EMChatroomManagerWrapper

static NSString * const EMMethodKeyJoinChatRoom = @"joinChatRoom";
static NSString * const EMMethodKeyLeaveChatRoom = @"leaveChatRoom";
static NSString * const EMMethodKeyGetChatroomsFromServer = @"fetchPublicChatRoomsFromServer";
static NSString * const EMMethodKeyFetchChatRoomFromServer = @"fetchChatRoomInfoFromServer";
static NSString * const EMMethodKeyGetChatRoom = @"getChatRoom";
static NSString * const EMMethodKeyGetAllChatRooms = @"getAllChatRooms";
static NSString * const EMMethodKeyCreateChatRoom = @"createChatRoom";
static NSString * const EMMethodKeyDestroyChatRoom = @"destroyChatRoom";
static NSString * const EMMethodKeyChatRoomUpdateSubject = @"changeChatRoomSubject";
static NSString * const EMMethodKeyChatRoomUpdateDescription = @"changeChatRoomDescription";
static NSString * const EMMethodKeyGetChatroomMemberListFromServer = @"fetchChatRoomMembers";
static NSString * const EMMethodKeyChatRoomMuteMembers = @"muteChatRoomMembers";
static NSString * const EMMethodKeyChatRoomUnmuteMembers = @"unMuteChatRoomMembers";
static NSString * const EMMethodKeyChangeChatRoomOwner = @"changeChatRoomOwner";
static NSString * const EMMethodKeyChatRoomAddAdmin = @"addChatRoomAdmin";
static NSString * const EMMethodKeyChatRoomRemoveAdmin = @"removeChatRoomAdmin";
static NSString * const EMMethodKeyGetChatroomMuteListFromServer = @"fetchChatRoomMuteList";
static NSString * const EMMethodKeyChatRoomRemoveMembers = @"removeChatRoomMembers";
static NSString * const EMMethodKeyChatRoomBlockMembers = @"blockChatRoomMembers";
static NSString * const EMMethodKeyChatRoomUnblockMembers = @"unBlockChatRoomMembers";
static NSString * const EMMethodKeyFetchChatroomBlacklistFromServer = @"fetchChatRoomBlackList";
static NSString * const EMMethodKeyUpdateChatRoomAnnouncement = @"updateChatRoomAnnouncement";
static NSString * const EMMethodKeyFetchChatroomAnnouncement = @"fetchChatRoomAnnouncement";

static NSString * const EMMethodKeyChatroomChanged = @"onChatroomChanged";

#pragma mark - EMGroupManagerWrapper

static NSString * const EMMethodKeyGetGroupWithId = @"getGroupWithId";
static NSString * const EMMethodKeyGetJoinedGroups = @"getJoinedGroups";
static NSString * const EMMethodKeyGetGroupsWithoutPushNotification = @"getGroupsWithoutPushNotification";
static NSString * const EMMethodKeyGetJoinedGroupsFromServer = @"getJoinedGroupsFromServer";
static NSString * const EMMethodKeyGetPublicGroupsFromServer = @"getPublicGroupsFromServer";
static NSString * const EMMethodKeyCreateGroup = @"createGroup";
static NSString * const EMMethodKeyGetGroupSpecificationFromServer = @"getGroupSpecificationFromServer";
static NSString * const EMMethodKeyGetGroupMemberListFromServer = @"getGroupMemberListFromServer";
static NSString * const EMMethodKeyGetGroupBlacklistFromServer = @"getGroupBlacklistFromServer";
static NSString * const EMMethodKeyGetGroupMuteListFromServer = @"getGroupMuteListFromServer";
static NSString * const EMMethodKeyGetGroupWhiteListFromServer = @"getGroupWhiteListFromServer";
static NSString * const EMMethodKeyIsMemberInWhiteListFromServer = @"isMemberInWhiteListFromServer";
static NSString * const EMMethodKeyGetGroupFileListFromServer = @"getGroupFileListFromServer";
static NSString * const EMMethodKeyGetGroupAnnouncementFromServer = @"getGroupAnnouncementFromServer";
static NSString * const EMMethodKeyAddMembers = @"addMembers";
static NSString * const EMMethodKeyRemoveMembers = @"removeMembers";
static NSString * const EMMethodKeyBlockMembers = @"blockMembers";
static NSString * const EMMethodKeyUnblockMembers = @"unblockMembers";
static NSString * const EMMethodKeyUpdateGroupSubject = @"updateGroupSubject";
static NSString * const EMMethodKeyUpdateDescription = @"updateDescription";
static NSString * const EMMethodKeyLeaveGroup = @"leaveGroup";
static NSString * const EMMethodKeyDestroyGroup = @"destroyGroup";
static NSString * const EMMethodKeyBlockGroup = @"blockGroup";
static NSString * const EMMethodKeyUnblockGroup = @"unblockGroup";
static NSString * const EMMethodKeyUpdateGroupOwner = @"updateGroupOwner";
static NSString * const EMMethodKeyAddAdmin = @"addAdmin";
static NSString * const EMMethodKeyRemoveAdmin = @"removeAdmin";
static NSString * const EMMethodKeyMuteMembers = @"muteMembers";
static NSString * const EMMethodKeyUnMuteMembers = @"unMuteMembers";
static NSString * const EMMethodKeyMuteAllMembers = @"muteAllMembers";
static NSString * const EMMethodKeyUnMuteAllMembers = @"unMuteAllMembers";
static NSString * const EMMethodKeyAddWhiteList = @"addWhiteList";
static NSString * const EMMethodKeyRemoveWhiteList = @"removeWhiteList";
static NSString * const EMMethodKeyUploadGroupSharedFile = @"uploadGroupSharedFile";
static NSString * const EMMethodKeyDownloadGroupSharedFile = @"downloadGroupSharedFile";
static NSString * const EMMethodKeyRemoveGroupSharedFile = @"removeGroupSharedFile";
static NSString * const EMMethodKeyUpdateGroupAnnouncement = @"updateGroupAnnouncement";
static NSString * const EMMethodKeyUpdateGroupExt = @"updateGroupExt";
static NSString * const EMMethodKeyJoinPublicGroup = @"joinPublicGroup";
static NSString * const EMMethodKeyRequestToJoinPublicGroup = @"requestToJoinPublicGroup";
static NSString * const EMMethodKeyAcceptJoinApplication = @"acceptJoinApplication";
static NSString * const EMMethodKeyDeclineJoinApplication = @"declineJoinApplication";
static NSString * const EMMethodKeyAcceptInvitationFromGroup = @"acceptInvitationFromGroup";
static NSString * const EMMethodKeyDeclineInvitationFromGroup = @"declineInvitationFromGroup";
static NSString * const EMMethodKeyIgnoreGroupPush = @"ignoreGroupPush";

static NSString * const EMMethodKeyOnGroupChanged = @"onGroupChanged";

#pragma mark - EMCallManagerWrapper
static NSString * const EMMethodKeyStartCall = @"startCall";
static NSString * const EMMethodKeySetCallOptions = @"setCallOptions";
//static NSString * const EMMethodKeyGetCallOptions = @"getCallOptions";
// 兼容安卓
static NSString * const EMMethodKeyRegisterCallReceiver = @"registerCallReceiver";

static NSString * const EMMethodKeyGetCallId = @"getCallId";
static NSString * const EMMethodKeyGetConnectType = @"getConnectType";
static NSString * const EMMethodKeyGetExt = @"getExt";
static NSString * const EMMethodKeyGetLocalName = @"getLocalName";
static NSString * const EMMethodKeyGetRemoteName = @"getRemoteName";
static NSString * const EMMethodKeyGetServerRecordId = @"getServerRecordId";
static NSString * const EMMethodKeyGetCallType = @"getCallType";
static NSString * const EMMethodKeyIsRecordOnServer = @"isRecordOnServer";
static NSString * const EMMethodKeyRegisterCallSharedManager = @"registerCallSharedManager";

static NSString * const EMMethodKeyOnCallChanged = @"onCallChanged";

#pragma mark - EMConferenceManagerWrapper
static NSString * const EMMethodKeyCreateAndJoinConference = @"createAndJoinConference";
static NSString * const EMMethodKeyJoinConference = @"joinConference";
static NSString * const EMMethodKeyRegisterConferenceSharedManager = @"registerConferenceSharedManager";

#pragma mark - EMPushManagerWrapper
static NSString * const EMMethodKeyEnableOfflinePush = @"enableOfflinePush";
static NSString * const EMMethodKeyDisableOfflinePush = @"disableOfflinePush";
static NSString * const EMMethodKeyGetPushConfigs = @"getPushConfigs";
static NSString * const EMMethodKeyGetPushConfigsFromServer = @"getPushConfigsFromServer";
static NSString * const EMMethodKeyUpdatePushOptionServiceForGroup = @"updatePushServiceForGroup";
static NSString * const EMMethodKeyGetNoPushGroups = @"getNoPushGroups";
static NSString * const EMMethodKeyUpdatePushNickname = @"updatePushNickname";
static NSString * const EMMethodKeyUpdatePushDisplayStyle = @"updatePushDisplayStyle";


