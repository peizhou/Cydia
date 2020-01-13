/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/NSCopying.h>
#import <SpringBoardUI/XXUnknownSuperclass.h>

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : XXUnknownSuperclass <NSCopying> {
	BOOL _shouldAnimateIn;	// 149 = 0x95
	NSNumber *_animationStartTime;	// 152 = 0x98
	NSString *_activationContext;	// 156 = 0x9c
	NSInvocation *_pendingDeactivationInvocation;	// 160 = 0xa0
}
@property(assign, nonatomic) BOOL shouldAnimateIn;	// G=0x37a5; S=0x37b5; @synthesize=_shouldAnimateIn
@property(retain, nonatomic) NSNumber *animationStartTime;	// G=0x3795; S=0x37f1; @synthesize=_animationStartTime
@property(retain, nonatomic) NSString *activationContext;	// G=0x3785; S=0x3819; @synthesize=_activationContext
@property(retain) NSInvocation *pendingDeactivationInvocation;	// G=0x3775; S=0x3841; converted property
- (id)init;	// 0x3c31
- (void)requestActivationAnimated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay;	// 0x3bd5
- (void)requestDeactivationAnimated:(BOOL)animated animateOldDisplayInWithStyle:(int)style;	// 0x3b7d
- (BOOL)isSlidingViewController;	// 0x3741
- (BOOL)allowSuspension;	// 0x3745
- (BOOL)displaysAboveStatusBar;	// 0x3749
- (void)viewWillAnimateOut;	// 0x374d
- (void)viewDidLoad;	// 0x3a59
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x39bd
- (void)animateViewOut;	// 0x3979
- (void)finishedAnimatingIn;	// 0x3751
- (void)finishedAnimatingOut;	// 0x3755
- (void)didReceiveMemoryWarning;	// 0x37c5
- (void)viewDidUnload;	// 0x394d
- (void)dealloc;	// 0x38d9
- (id)copyWithZone:(NSZone *)zone;	// 0x38c9
- (BOOL)viewIsReadyToBeRemoved;	// 0x3759
- (BOOL)hasTranslucentBackground;	// 0x375d
- (BOOL)handleLockButtonPressed;	// 0x3761
- (BOOL)handleVolumeUpButtonPressed;	// 0x3765
- (BOOL)handleVolumeDownButtonPressed;	// 0x3769
- (BOOL)handleMenuButtonTap;	// 0x376d
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x3771
- (void)didFinishLaunchingFrontmost;	// 0x3881
// converted property setter: - (void)setPendingDeactivationInvocation:(id)invocation;	// 0x3841
// converted property getter: - (id)pendingDeactivationInvocation;	// 0x3775
// declared property getter: - (id)activationContext;	// 0x3785
// declared property setter: - (void)setActivationContext:(id)context;	// 0x3819
// declared property getter: - (id)animationStartTime;	// 0x3795
// declared property setter: - (void)setAnimationStartTime:(id)time;	// 0x37f1
// declared property getter: - (BOOL)shouldAnimateIn;	// 0x37a5
// declared property setter: - (void)setShouldAnimateIn:(BOOL)animateIn;	// 0x37b5
@end