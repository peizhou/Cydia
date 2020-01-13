/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMUserNotificationListener.h>
#import <IMDaemonCore/IMConnectionMonitorDelegate.h>
#import <IMDaemonCore/IMServiceSessionProtocol.h>
#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/XXUnknownSuperclass.h>

@class NSMutableSet, IMConnectionMonitor, IMKeychainPasswordFetcher, IMSystemProxySettingsFetcher, NSMutableDictionary, NSString, IMDAccount, NSDictionary, IMDService, NSArray;

@interface IMDServiceSession : XXUnknownSuperclass <IMSystemMonitorListener, IMUserNotificationListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {
	IMDAccount *_account;	// 4 = 0x4
	int _buddyChangeLevel;	// 8 = 0x8
	BOOL _awaitingDataContext;	// 12 = 0xc
	BOOL _shouldReconnect;	// 13 = 0xd
	BOOL _badPass;	// 14 = 0xe
	unsigned _loginStatus;	// 16 = 0x10
	unsigned _disconnectReason;	// 20 = 0x14
	NSString *_loginStatusMessage;	// 24 = 0x18
	NSMutableDictionary *_buddies;	// 28 = 0x1c
	NSMutableDictionary *_localProperties;	// 32 = 0x20
	NSMutableSet *_changedBuddies;	// 36 = 0x24
	NSMutableSet *_registeredChats;	// 40 = 0x28
	NSMutableDictionary *_groupChatIdentifierToChatRoomMap;	// 44 = 0x2c
	NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;	// 48 = 0x30
	IMConnectionMonitor *_connectionMonitor;	// 52 = 0x34
	IMDService *_service;	// 56 = 0x38
	NSString *_loginID;	// 60 = 0x3c
	NSString *_password;	// 64 = 0x40
	NSString *_serverHost;	// 68 = 0x44
	unsigned short _serverPort;	// 72 = 0x48
	int _proxyType;	// 76 = 0x4c
	NSString *_proxyHost;	// 80 = 0x50
	unsigned short _proxyPort;	// 84 = 0x54
	NSString *_proxyAccount;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	IMKeychainPasswordFetcher *_pwFetcher;	// 96 = 0x60
	IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;	// 100 = 0x64
	BOOL _activated;	// 104 = 0x68
	BOOL _useSSL;	// 105 = 0x69
	BOOL _saveKeychainPassword;	// 106 = 0x6a
}
@property(readonly, assign, nonatomic) NSDictionary *buddyPictures;	// G=0x62a9; 
@property(readonly, assign, nonatomic) NSDictionary *buddyProperties;	// G=0x63f9; @synthesize=_buddies
@property(readonly, assign, nonatomic) NSDictionary *registrationAlertInfo;	// G=0xb7cd; 
@property(readonly, assign, nonatomic) int registrationError;	// G=0xb7a5; 
@property(readonly, assign, nonatomic) int registrationStatus;	// G=0xb77d; 
@property(readonly, assign, nonatomic) NSString *serviceLoginStatusMessage;	// G=0x6049; @synthesize=_loginStatusMessage
@property(readonly, assign, nonatomic) unsigned serviceDisconnectReason;	// G=0x12829; @synthesize=_disconnectReason
@property(readonly, assign, nonatomic) unsigned serviceLoginStatus;	// G=0x5789; @synthesize=_loginStatus
@property(readonly, assign, nonatomic) BOOL networkConditionsAllowLogin;	// G=0xddfd; 
@property(readonly, assign, nonatomic) NSArray *allBuddies;	// G=0x75f1; 
@property(readonly, assign, nonatomic) BOOL allowedAsChild;	// G=0x7611; 
@property(readonly, assign, nonatomic) BOOL accountShouldBeAlwaysLoggedIn;	// G=0xb895; 
@property(readonly, assign, nonatomic) BOOL accountNeedsPassword;	// G=0xb86d; 
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0xb5a9; 
@property(readonly, assign, nonatomic) BOOL isActive;	// G=0xb5f1; 
@property(readonly, assign, nonatomic) IMDService *service;	// G=0x5c39; @synthesize=_service
@property(readonly, assign, nonatomic) NSDictionary *accountDefaults;	// G=0x54d5; 
@property(readonly, assign, nonatomic) NSString *accountID;	// G=0x56a5; 
@property(readonly, assign, nonatomic) IMDAccount *account;	// G=0x5175; @synthesize=_account
@property(assign) BOOL blockIdleStatus;	// G=0x83f9; S=0x122cd; converted property
@property(retain) id blockList;	// G=0x83f1; S=0x122c9; converted property
@property(retain) id allowList;	// G=0x83f5; S=0x122c5; converted property
@property(assign) unsigned blockingMode;	// G=0x122c1; S=0x122bd; converted property
@property(readonly, retain) NSString *loginID;	// G=0x54f5; converted property
+ (id)_firewallUserNotificationForService:(id)service;	// 0xd67d
+ (id)_networkDiagnositicsUserNotificationWithMessage:(id)message;	// 0xd671
+ (void)initialize;	// 0x4ae5
+ (id)_loginUserNotificationForService:(id)service user:(id)user isForBadPassword:(BOOL)badPassword showForgetPassword:(BOOL)password;	// 0xad35
// declared property getter: - (id)buddyProperties;	// 0x63f9
// declared property getter: - (unsigned)serviceDisconnectReason;	// 0x12829
// declared property getter: - (unsigned)serviceLoginStatus;	// 0x5789
// declared property getter: - (id)serviceLoginStatusMessage;	// 0x6049
// declared property getter: - (id)service;	// 0x5c39
// declared property getter: - (id)account;	// 0x5175
- (id)broadcasterForListenersWithCapabilities:(unsigned)capabilities;	// 0x127d5
- (id)broadcasterForVCConferenceListeners;	// 0x127b5
- (id)broadcasterForAVConferenceListeners;	// 0x12795
- (id)broadcasterForChatListeners;	// 0x12775
- (id)broadcaster;	// 0x12725
- (void)updateAuthorizationCredentials:(id)credentials token:(id)token;	// 0x12721
- (void)validateProfile;	// 0x1271d
- (void)validateAlias:(id)alias;	// 0x12719
- (void)removeAlias:(id)alias;	// 0x12715
- (void)addAlias:(id)alias;	// 0x12711
- (void)sendCommand:(id)command withProperties:(id)properties toPerson:(id)person;	// 0x1270d
- (void)sendData:(id)data toPerson:(id)person;	// 0x12709
- (void)relay:(id)relay sendCancel:(id)cancel toPerson:(id)person;	// 0x12705
- (void)relay:(id)relay sendUpdate:(id)update toPerson:(id)person;	// 0x12701
- (void)relay:(id)relay sendInitateRequest:(id)request toPerson:(id)person;	// 0x126fd
- (void)sendAVMessageToPerson:(id)person sessionID:(unsigned)anId type:(unsigned)type userInfo:(id)info conference:(id)conference;	// 0x126f9
- (void)sendVCUpdate:(id)update toPerson:(id)person conference:(id)conference;	// 0x126f5
- (void)sendCounterProposalToPerson:(id)person properties:(id)properties conference:(id)conference;	// 0x126f1
- (void)cancelVCRequestWithPerson:(id)person properties:(id)properties conference:(id)conference;	// 0x126ed
- (void)respondToVCInvitationWithPerson:(id)person properties:(id)properties conference:(id)conference;	// 0x126e9
- (void)requestVCWithPerson:(id)person properties:(id)properties conference:(id)conference;	// 0x126e5
- (FZChatRoomValidity)validityOfChatRoomName:(id)chatRoomName;	// 0x126d9
- (void)sendFileTransfer:(id)transfer toPerson:(id)person;	// 0x126d5
- (void)setProperties:(id)properties ofParticipant:(id)participant inChat:(id)chat style:(unsigned char)style;	// 0x126d1
- (void)sendReadReceiptForMessage:(id)message toChat:(id)chat style:(unsigned char)style;	// 0x126cd
- (void)sendMessage:(id)message toChat:(id)chat style:(unsigned char)style;	// 0x12325
- (void)cancelMessage:(id)message toChat:(id)chat style:(unsigned char)style;	// 0x12321
- (void)declineInvitationToChat:(id)chat style:(unsigned char)style;	// 0x1231d
- (void)invitePerson:(id)person withMessage:(id)message toChat:(id)chat style:(unsigned char)style;	// 0x12319
- (void)leaveChat:(id)chat style:(unsigned char)style;	// 0x12315
- (void)joinChat:(id)chat style:(unsigned char)style joinProperties:(id)properties;	// 0x12311
- (BOOL)shouldImitateGroupChatUsingChatRooms;	// 0x1230d
- (id)defaultChatSuffix;	// 0x12309
- (void)setValue:(id)value ofProperty:(id)property ofPerson:(id)person;	// 0x12305
- (void)requestProperty:(id)property ofPerson:(id)person;	// 0x12301
- (id)pictureKeyForBuddy:(id)buddy;	// 0x122fd
- (id)pictureOfBuddy:(id)buddy;	// 0x122f9
- (void)stopWatchingBuddy:(id)buddy;	// 0x122f5
- (void)startWatchingBuddy:(id)buddy;	// 0x122f1
- (void)requestSubscriptionTo:(id)to;	// 0x122ed
- (void)acceptSubscriptionRequest:(BOOL)request from:(id)from;	// 0x122e9
- (void)renameGroup:(id)group to:(id)to;	// 0x122e5
- (void)changeGroup:(id)group changes:(id)changes;	// 0x122e1
- (void)changeGroups:(id)groups;	// 0x122dd
- (void)requestGroups;	// 0x122d9
- (void)setIdleTime:(unsigned long)time;	// 0x122d5
- (void)changeMyStatus:(id)status changedKeys:(id)keys;	// 0x122d1
// converted property getter: - (BOOL)blockIdleStatus;	// 0x83f9
// converted property setter: - (void)setBlockIdleStatus:(BOOL)status;	// 0x122cd
// converted property getter: - (id)blockList;	// 0x83f1
// converted property setter: - (void)setBlockList:(id)list;	// 0x122c9
// converted property getter: - (id)allowList;	// 0x83f5
// converted property setter: - (void)setAllowList:(id)list;	// 0x122c5
// converted property getter: - (unsigned)blockingMode;	// 0x122c1
// converted property setter: - (void)setBlockingMode:(unsigned)mode;	// 0x122bd
- (unsigned long long)capabilities;	// 0x122b5
- (void)leaveAllChats;	// 0x12189
- (void)didChangeMemberStatus:(int)status forHandle:(id)handle forChat:(id)chat style:(unsigned char)style;	// 0x11f7d
- (void)didUpdateChatStatus:(int)status chat:(id)chat style:(unsigned char)style;	// 0x11d95
- (void)didReceiveInvitation:(id)invitation forChat:(id)chat style:(unsigned char)style;	// 0x11905
- (void)didReceiveMessage:(id)message forChat:(id)chat style:(unsigned char)style;	// 0x113cd
- (void)notifyDidSendMessageID:(id)notify;	// 0x110f9
- (void)didSendMessage:(id)message forChat:(id)chat style:(unsigned char)style;	// 0x10839
- (void)didCancelMessage:(id)message forChat:(id)chat style:(unsigned char)style;	// 0x10605
- (void)didReceiveMessageReadReceiptForMessageID:(id)messageID;	// 0x10449
- (void)didReceiveMessageReadForMessageID:(id)messageID;	// 0x10205
- (void)didReceiveMessageDeliveryReceiptForMessageID:(id)messageID;	// 0xfd25
- (void)didSendMessageReadReceiptForMessageID:(id)messageID;	// 0xf949
- (void)didReceiveError:(unsigned)error forMessageID:(id)messageID;	// 0xf441
- (void)didReceiveErrorMessage:(id)message forChat:(id)chat style:(unsigned char)style;	// 0xf32d
- (void)didJoinChat:(id)chat style:(unsigned char)style;	// 0xf2a1
- (void)didLeaveChat:(id)chat style:(unsigned char)style;	// 0xf215
- (id)chatForChatIdentifier:(id)chatIdentifier style:(unsigned char)style;	// 0xf041
- (void)_mapRoomChatToGroupChat:(id *)groupChat style:(char *)style;	// 0xeff5
- (void)canonicalizeChatIdentifier:(id *)identifier style:(char *)style;	// 0xef61
- (void)unregisterChat:(id)chat style:(unsigned char)style;	// 0xed19
- (BOOL)isChatRegistered:(id)registered style:(unsigned char)style;	// 0xec29
- (void)registerChat:(id)chat style:(unsigned char)style;	// 0xe9e1
- (id)_newHashForChat:(id)chat style:(unsigned char)style;	// 0xe999
- (id)chatRoomForGroupChatIdentifier:(id)groupChatIdentifier;	// 0xe979
- (id)groupChatIdentifierForChatRoom:(id)chatRoom;	// 0xe959
- (void)useChatRoom:(id)room forGroupChatIdentifier:(id)groupChatIdentifier;	// 0xe885
- (BOOL)equalID:(id)anId andID:(id)anId2;	// 0x6935
- (id)canonicalFormOfChatRoom:(id)chatRoom;	// 0xe871
- (id)canonicalFormOfID:(id)anId;	// 0x75dd
- (void)changeLocalProperty:(id)property ofBuddy:(id)buddy to:(id)to;	// 0x76ad
- (id)localPropertiesOfBuddy:(id)buddy;	// 0x76f1
- (void)clearLocalProperties;	// 0x83c5
- (id)localProperty:(id)property ofBuddy:(id)buddy;	// 0x7665
- (id)property:(id)property ofBuddy:(id)buddy;	// 0x68ed
- (void)endBuddyChanges;	// 0x6681
- (void)clearPropertiesOfBuddy:(id)buddy;	// 0xe72d
- (void)changeProperty:(id)property ofBuddy:(id)buddy to:(id)to;	// 0x6409
- (void)beginBuddyChanges;	// 0x6625
- (void)markBuddiesAsChanged:(id)changed;	// 0xe6dd
- (void)resumeBuddyUpdates;	// 0xe6cd
- (void)holdBuddyUpdates;	// 0xe6bd
- (id)groups;	// 0xe6b9
// declared property getter: - (id)allBuddies;	// 0x75f1
// declared property getter: - (id)buddyPictures;	// 0x62a9
- (void)_managedPrefsNotification:(id)notification;	// 0xe641
// declared property getter: - (BOOL)allowedAsChild;	// 0x7611
- (void)_networkChanged:(id)changed;	// 0xe5e1
- (void)connectionMonitorDidUpdate:(id)connectionMonitor;	// 0xe201
- (void)_setPendingConnectionMonitorUpdate;	// 0xe1a5
- (void)_processConnectionMonitorUpdate;	// 0xdf3d
// declared property getter: - (BOOL)networkConditionsAllowLogin;	// 0xddfd
- (void)_reconnectIfNecessary;	// 0xdc89
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)accountDefaultsIgnoringProxy;	// 0xda61
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0xd9a9
- (void)_updateConnectionMonitorWithRemoteHost:(id)remoteHost;	// 0xd7cd
- (void)_clearConnectionMonitor;	// 0xd735
- (void)setLoginStatus:(unsigned)status message:(id)message reason:(unsigned)reason properties:(id)properties;	// 0x57bd
- (void)_forceSetLoginStatus:(unsigned)status message:(id)message reason:(unsigned)reason properties:(id)properties;	// 0x5845
- (void)setLoginStatus:(unsigned)status message:(id)message;	// 0x5799
- (void)_wentOffline;	// 0x74c1
- (void)userNotificationDidFinish:(id)userNotification;	// 0xd689
- (void)_handleFirewallUserNotificationDidFinish:(id)_handleFirewallUserNotification;	// 0xd685
- (BOOL)warnIfPortBlocked:(int)blocked forAction:(id)action;	// 0xd681
- (void)_handleNetworkDiagnosticsUserNotificationDidFinish:(id)_handleNetworkDiagnosticsUserNotification;	// 0xd679
- (void)_delayedOpenNetDiagnosticsPanel;	// 0xd675
- (void)openNetDiagnosticsPanel;	// 0xd66d
- (void)sessionWillBecomeInactive;	// 0xd5cd
- (void)sessionDidBecomeActivate;	// 0xd5bd
- (void)sessionDidBecomeActive;	// 0xd5a9
- (void)serviceSessionDidLogoutWithMessage:(id)serviceSession reason:(unsigned)reason properties:(id)properties;	// 0xd581
- (void)serviceSessionDidLogout;	// 0xd559
- (void)serviceSessionDidLogin;	// 0xd531
- (void)logout;	// 0x7395
- (void)logoutServiceSession;	// 0xd2a1
- (void)loginServiceSession;	// 0xd29d
- (void)_handleLoginUserNotificationDidFinish:(id)_handleLoginUserNotification;	// 0xcf0d
- (void)_login_checkUsernameAndPassword;	// 0xcb8d
- (void)systemProxySettingsFetcher:(id)fetcher retrievedAccount:(id)account password:(id)password;	// 0xcb15
- (void)_login_usernameAndPasswordReady;	// 0xc9f9
- (void)keychainPasswordFetcher:(id)fetcher retreivedPassword:(id)password forUsername:(id)username onService:(id)service;	// 0x61d1
- (void)_data_connection_ready;	// 0xc841
- (void)_login_serverSettingsReady;	// 0xc52d
- (void)systemProxySettingsFetcher:(id)fetcher retrievedHost:(id)host port:(unsigned short)port protocol:(int)protocol;	// 0xc46d
- (void)login;	// 0x56c5
- (void)_doLogin;	// 0xbba9
- (void)autoLogin;	// 0x55a1
- (void)autoReconnect;	// 0xb9c5
- (void)disallowReconnection;	// 0xb95d
- (void)passwordUpdated;	// 0xb959
- (void)accountDefaultsChanged:(id)changed;	// 0x77d5
- (void)_abandonSystemProxySettingsFetcher;	// 0xb915
- (void)_abandonPWFetcher;	// 0xb8bd
- (void)refreshServiceCapabilities;	// 0x5bd9
// declared property getter: - (BOOL)accountShouldBeAlwaysLoggedIn;	// 0xb895
// declared property getter: - (BOOL)accountNeedsPassword;	// 0xb86d
- (BOOL)accountNeedsLogin;	// 0xb845
- (void)noteBadPassword;	// 0xb7f5
// converted property getter: - (id)loginID;	// 0x54f5
// declared property getter: - (id)registrationAlertInfo;	// 0xb7cd
// declared property getter: - (int)registrationError;	// 0xb7a5
// declared property getter: - (int)registrationStatus;	// 0xb77d
- (void)setRegistrationStatus:(int)status error:(int)error alertInfo:(id)info;	// 0xb621
- (void)unregisterAccount;	// 0xb61d
- (void)registerAccount;	// 0xb619
- (void)authenticateAccount;	// 0xb615
// declared property getter: - (BOOL)isActive;	// 0xb5f1
// declared property getter: - (id)displayName;	// 0xb5a9
- (id)server;	// 0x5c4d
- (BOOL)hasCapability:(unsigned long long)capability;	// 0xb57d
// declared property getter: - (id)accountID;	// 0x56a5
// declared property getter: - (id)accountDefaults;	// 0x54d5
- (void)dealloc;	// 0xb2b1
- (id)initWithAccount:(id)account service:(id)service;	// 0x4bf1
@end