/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUHeader.h>

@class NSArray, NSDate, NSString;

@interface VMUFatHeader : VMUHeader {
	NSDate *_timestamp;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSArray *_fatArchs;	// 12 = 0xc
}
@property(readonly, retain) NSDate *timestamp;	// G=0x7030; converted property
@property(readonly, retain) NSString *path;	// G=0x701c; converted property
@property(readonly, retain) NSArray *fatArchs;	// G=0x7044; converted property
+ (id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x7280
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x7058
- (BOOL)isFat;	// 0x7014
// converted property getter: - (id)path;	// 0x701c
// converted property getter: - (id)timestamp;	// 0x7030
// converted property getter: - (id)fatArchs;	// 0x7044
- (id)fatArchMatchingArchitecture:(id)architecture;	// 0x73b0
- (void)dealloc;	// 0x72e8
@end