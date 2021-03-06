/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/XXUnknownSuperclass.h>
#import <DAEAS/ASAccountActorMessages.h>


@interface ASAccountActorZombie : XXUnknownSuperclass <ASAccountActorMessages> {
}
+ (id)sharedZombie;	// 0x1aa5
- (BOOL)isHotmailAccount;	// 0x1e5d
- (id)deletedItemsFolder;	// 0x1e59
- (id)sentItemsFolder;	// 0x1e55
- (id)inboxFolder;	// 0x1e51
- (oneway void)_accountPasswordChanged;	// 0x1e4d
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x1e49
- (oneway void)_folderHierarchyChanged;	// 0x1e45
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x1e41
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x1e3d
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x1e39
- (oneway void)shutdown;	// 0x1df9
- (oneway void)setAccount:(id)account;	// 0x1df5
- (oneway void)startup;	// 0x1df1
- (BOOL)searchQueriesRunning;	// 0x1ded
- (oneway void)cancelAllSearchQueries;	// 0x1de9
- (oneway void)cancelSearchQuery:(id)query;	// 0x1de5
- (oneway void)performSearchQuery:(id)query;	// 0x1d81
- (oneway void)cancelTaskWithID:(int)anId;	// 0x1d7d
- (void)performFolderChange:(id)change;	// 0x1d19
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x1cfd
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x1ce1
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x1c8d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x1c71
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x1c55
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x1c39
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x1c1d
- (void)_sendFailureToConsumer:(id)consumer;	// 0x1bcd
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x1bc9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x1bc5
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x1bc1
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x1bbd
- (oneway void)stopMonitoringAllFolders;	// 0x1bb9
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x1bb5
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x1bb1
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x1bad
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x1ba9
- (id)encryptionIdentityPersistentReference;	// 0x1ba5
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x1ba1
- (id)signingIdentityPersistentReference;	// 0x1b9d
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x1b99
- (BOOL)generatesBulletins;	// 0x1b95
- (int)supportsEmailFlagging;	// 0x1b91
- (int)supportsMailboxSearch;	// 0x1b8d
- (int)mailNumberOfPastDaysToSync;	// 0x1b89
- (id)mailboxes;	// 0x1b85
@end
