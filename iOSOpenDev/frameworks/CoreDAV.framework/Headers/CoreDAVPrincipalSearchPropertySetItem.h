/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet *_principalSearchProperties;	// 24 = 0x18
}
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x27d05; S=0x27d19; @synthesize=_principalSearchProperties
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x27d19
// declared property getter: - (id)principalSearchProperties;	// 0x27d05
- (void)addPrincipalSearchProperty:(id)property;	// 0x27c69
- (id)copyParseRules;	// 0x27b65
- (id)description;	// 0x27aa1
- (void)dealloc;	// 0x27a55
- (id)init;	// 0x27a29
@end