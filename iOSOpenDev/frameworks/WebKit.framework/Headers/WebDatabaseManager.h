/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebDatabaseManager.h>
#import <WebKit/XXUnknownSuperclass.h>


@interface WebDatabaseManager : XXUnknownSuperclass {
}
+ (id)sharedWebDatabaseManager;	// 0x3c9ed
+ (void)removeEmptyDatabaseFiles;	// 0x653d
+ (void)scheduleEmptyDatabaseRemoval;	// 0x6349
- (id)init;	// 0x3d131
- (id)origins;	// 0x3cfad
- (id)databasesWithOrigin:(id)origin;	// 0x3ce35
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x3cbb9
- (void)deleteAllDatabases;	// 0x3cb6d
- (BOOL)deleteOrigin:(id)origin;	// 0x3cb41
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x3ca39
@end

@interface WebDatabaseManager (WebDatabaseManagerInternal)
+ (void)willBeginFirstTransaction;	// 0x16de9
+ (void)didFinishLastTransaction;	// 0x17051
+ (void)startBackgroundTask;	// 0x16df9
+ (void)endBackgroundTask;	// 0x17061
@end