/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>
#import <AppStoreUI/ISStoreURLOperationDelegate.h>

@class NSString, ASConcernItem;

@interface ASPostConcernOperation : XXUnknownSuperclass <ISStoreURLOperationDelegate> {
	NSString *_commentText;	// 60 = 0x3c
	ASConcernItem *_concern;	// 64 = 0x40
	unsigned long long _itemIdentifier;	// 68 = 0x44
}
@property(assign) unsigned long long itemIdentifier;	// G=0xc535; S=0xc569; @synthesize=_itemIdentifier
@property(retain) ASConcernItem *concern;	// G=0xc4fd; S=0xc511; @synthesize=_concern
@property(retain) NSString *commentText;	// G=0xc4c5; S=0xc4d9; @synthesize=_commentText
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0xc569
// declared property getter: - (unsigned long long)itemIdentifier;	// 0xc535
// declared property setter: - (void)setConcern:(id)concern;	// 0xc511
// declared property getter: - (id)concern;	// 0xc4fd
// declared property setter: - (void)setCommentText:(id)text;	// 0xc4d9
// declared property getter: - (id)commentText;	// 0xc4c5
- (id)_httpBody;	// 0xc36d
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0xc26d
- (void)run;	// 0xc0cd
- (void)dealloc;	// 0xc075
- (id)initWithConcern:(id)concern;	// 0xc041
@end