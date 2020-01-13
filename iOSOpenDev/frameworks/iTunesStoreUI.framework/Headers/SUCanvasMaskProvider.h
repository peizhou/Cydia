/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {
	SUScriptCanvasFunction *_function;	// 4 = 0x4
}
- (CGPathRef)copyPathForMaskWithSize:(CGSize)size;	// 0x759ad
- (CGImageRef)copyMaskImageWithSize:(CGSize)size;	// 0x75955
- (void)dealloc;	// 0x75901
- (id)initWithFunction:(id)function;	// 0x758c1
@end