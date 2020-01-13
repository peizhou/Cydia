/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class SUStorePageProtocol, SUGridView;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (SUTabBarControllerAdditions)
- (void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;	// 0x64e5
@end

@interface XXUnknownSuperclass (SUTabBarControllerAdditions)
- (void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;	// 0x64e9
@end

@interface XXUnknownSuperclass (SUAdditions)
- (id)selectedNavigationController;	// 0x6541
@end

@interface XXUnknownSuperclass (SUAdditions)
@property(readonly, assign, nonatomic) BOOL shouldInvalidateForMemoryPurge;	// G=0xffd5; 
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0xf989; 
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0xf985; 
// declared property getter: - (BOOL)shouldInvalidateForMemoryPurge;	// 0xffd5
- (void)setBadgeValue:(id)value animated:(BOOL)animated blink:(BOOL)blink;	// 0xff05
- (id)section;	// 0xfef1
- (id)_sectionForViewController:(id)viewController;	// 0xfec1
- (void)restoreArchivableContext:(id)context;	// 0xfebd
- (void)resetRestoredContext;	// 0xfe95
- (void)parentViewControllerHierarchyDidChange;	// 0xfdb1
- (void)keyboardWillShowWithInfo:(id)keyboard;	// 0xfce5
- (void)keyboardWillHideWithInfo:(id)keyboard;	// 0xfc19
- (void)keyboardDidShowWithInfo:(id)keyboard;	// 0xfb4d
- (void)keyboardDidHideWithInfo:(id)keyboard;	// 0xfa81
- (BOOL)isRootViewController;	// 0xf98d
// declared property getter: - (BOOL)isLoading;	// 0xf989
// declared property getter: - (BOOL)isLoaded;	// 0xf985
- (BOOL)isInMoreList;	// 0xf8d9
- (BOOL)isDescendantOfViewController:(id)viewController;	// 0xf8b1
- (void)iTunesStoreUI_dismissAction:(id)action;	// 0xf89d
- (void)dismissAnimated:(BOOL)animated;	// 0xf719
- (id)copyArchivableJetsamContext;	// 0xf709
- (id)copyArchivableContext;	// 0xf699
@end

@interface XXUnknownSuperclass (SUAdditions)
- (void)populateNavigationHistoryWithItems:(id)items;	// 0x10e35
- (void)invalidate;	// 0x10d71
- (unsigned)indexOfViewController:(id)viewController;	// 0x10d0d
- (id)firstViewController;	// 0x10cc5
@end

@interface XXUnknownSuperclass (SUStorePageAdditions)
- (BOOL)reloadWithURLRequestProperties:(id)urlrequestProperties;	// 0x1790d
- (BOOL)pushStorePage:(id)page withTarget:(int)target animated:(BOOL)animated;	// 0x178d5
- (BOOL)loadMoreWithURL:(id)url;	// 0x178a9
- (BOOL)hasDisplayableContent;	// 0x178a5
- (void)handleStoreFailureWithError:(id)error;	// 0x17879
@end

@interface XXUnknownSuperclass (SUStorePageChildViewController)
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x1793d; 
@property(retain, nonatomic) SUStorePageProtocol *storePageProtocol;	// G=0x179bd; S=0x179b5; 
- (BOOL)viewIsReady;	// 0x179e9
- (void)storePageProtocolDidChange;	// 0x179c1
// declared property getter: - (id)storePageProtocol;	// 0x179bd
- (void)storePageCleanupBeforeTearDown;	// 0x179b9
// declared property setter: - (void)setStorePageProtocol:(id)protocol;	// 0x179b5
- (void)reloadWithStorePage:(id)storePage forURL:(id)url;	// 0x179b1
// declared property getter: - (CGRect)documentBounds;	// 0x1793d
- (id)displayedURL;	// 0x17939
@end

@interface XXUnknownSuperclass (SUSectionedViewControllerAdditions)
- (id)setDisplayedSectionGroup:(id)group;	// 0x17a1d
- (BOOL)reloadForSectionsWithGroup:(id)group;	// 0x179f1
- (BOOL)canDisplaySectionGroup:(id)group;	// 0x179ed
@end

@interface XXUnknownSuperclass (SUTouchCapture)
- (id)removeTouchCaptureViewWithTag:(int)tag;	// 0x21ce5
- (id)addTouchCaptureViewWithTag:(int)tag;	// 0x21bb5
@end

@interface XXUnknownSuperclass (SUAdditions)
- (void)safeEncodeUIColor:(id)color forKey:(id)key;	// 0x26899
@end

@interface XXUnknownSuperclass (SUAdditions)
+ (id)colorWithStyleString:(id)styleString;	// 0x268d9
- (id)initWithStyleString:(id)styleString;	// 0x26925
@end

@interface XXUnknownSuperclass (SUAdditions)
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth rightCapWidth:(int)width;	// 0x2696d
@end

@interface XXUnknownSuperclass (SUAdditions)
- (void)resetAllValues;	// 0x26e01
- (void)mergeValuesFromItem:(id)item;	// 0x26c9d
@end

@interface XXUnknownSuperclass (SUAdditions)
@property(retain) id topExtensionViewColor;	// G=0x26fe1; S=0x26e99; converted property
// converted property getter: - (id)topExtensionViewColor;	// 0x26fe1
// converted property setter: - (void)setTopExtensionViewColor:(id)color;	// 0x26e99
@end

@interface XXUnknownSuperclass (SUAdditions)
- (void)sizeToFitWithMinimumSegmentWidth:(float)minimumSegmentWidth maximumTotalWidth:(float)width;	// 0x2700d
@end

@interface XXUnknownSuperclass (SUAdditions)
- (void)setBadgeValue:(id)value animated:(BOOL)animated blink:(BOOL)blink;	// 0x270e5
@end

@interface XXUnknownSuperclass (SUAdditions)
- (id)superviewOfClass:(Class)aClass;	// 0x27231
- (void)centerSubviewInBounds:(id)bounds;	// 0x27159
@end

@interface XXUnknownSuperclass (SUDialogAdditions)
+ (id)ITunesStoreNotAvailableDialog;	// 0x2bd59
@end

@interface XXUnknownSuperclass (SUAdditions)
+ (id)termsAndConditionsURL;	// 0x3319d
- (int)storeURLType;	// 0x33279
@end

@interface XXUnknownSuperclass (SUAdditions)
+ (id)pathForITunesResource:(id)itunesResource ofType:(id)type;	// 0x334d1
- (id)newDataURLForResource:(id)resource ofType:(id)type withMIMEType:(id)mimetype;	// 0x33345
@end

@interface XXUnknownSuperclass (SUTransitionSafety)
+ (id)transitionSafetyDelegate;	// 0x349c9
+ (id)transitionSafePerformer:(id)performer;	// 0x34979
+ (void)endTransitionSafety;	// 0x34905
+ (void)beginTransitionSafety;	// 0x348f1
+ (void)_enqueueTransitionSafeInvocation:(id)invocation;	// 0x34881
+ (void)_dequeueTransitionSafeInvocations;	// 0x347d5
- (void)transitionSafePresentModalViewController:(id)controller animated:(BOOL)animated;	// 0x34a11
@end

@interface XXUnknownSuperclass (SUAggregatedDataSourceAdditions)
- (id)indexPathBySettingSection:(unsigned)section;	// 0x367dd
@end

@interface XXUnknownSuperclass (SUPPT)
- (void)endCurrentPPT;	// 0x41b35
- (void)beginPPTWithName:(id)name;	// 0x41af5
@end

@interface XXUnknownSuperclass (SUPPT)
- (void)runScrollTest:(id)test withDelta:(float)delta forIterations:(int)iterations;	// 0x421e9
- (void)scrollBy:(float)by forIterations:(int)iterations;	// 0x421c5
- (void)_testingScrollStep;	// 0x42049
@end

@interface XXUnknownSuperclass (SUPPT)
- (id)scriptEntry;	// 0x42349
- (id)scriptPath;	// 0x4232d
- (SEL)testSelector;	// 0x422fd
- (SEL)setupSelector;	// 0x422cd
- (float)offset;	// 0x42299
- (int)iterations;	// 0x42265
@end

@interface XXUnknownSuperclass (SUPPT)
- (id)firstScrollViewDescendant;	// 0x42435
- (id)_firstDescendantOfKind:(Class)kind;	// 0x42365
@end

@interface XXUnknownSuperclass (SUScriptAdditions)
- (id)safeValueForKey:(id)key;	// 0x46781
- (id)safeCallWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x46771
- (id)copyValuesForKeys:(id)keys;	// 0x466d9
- (id)copyJSONDataWithContext:(OpaqueJSContext *)context;	// 0x4661d
- (id)copyArrayOrDictionaryWithContext:(OpaqueJSContext *)context;	// 0x46581
- (BOOL)copyArrayValue:(id *)value withValidator:(/*function-pointer*/ void *)validator context:(void *)context;	// 0x4648d
@end

@interface XXUnknownSuperclass (SUScriptAdditions)
- (id)copyObjectForScriptFromPoolWithClass:(Class)aClass;	// 0x46881
@end

@interface XXUnknownSuperclass (SUInvocationAdditions)
- (id)webThreadMainThreadProxy;	// 0x472ed
- (id)responderChainProxy:(id)proxy;	// 0x472a1
@end

@interface XXUnknownSuperclass (SUPopOverController)
- (id)copyScriptPopOver;	// 0x493f1
@end

@interface XXUnknownSuperclass (SUScriptTextFieldAdditions)
- (void)configureFromScriptTextField:(id)scriptTextField;	// 0x4cfe5
@end

@interface XXUnknownSuperclass (SUScriptButtonAdditions)
- (void)configureFromScriptButton:(id)scriptButton;	// 0x4f8e5
@end

@interface XXUnknownSuperclass (SUScriptButtonAdditions)
- (void)configureFromScriptButton:(id)scriptButton;	// 0x4fa15
@end

@interface XXUnknownSuperclass (SUScriptPost)
- (void)setScriptOptions:(id)options;	// 0x5389d
- (void)sendCompletionCallback:(id)callback;	// 0x5375d
@end

@interface XXUnknownSuperclass (SUAdditions)
- (CGRect)frame;	// 0x5b0bd
@end

@interface XXUnknownSuperclass (SUScriptViewControllerAdditions)
- (id)copyScriptViewController;	// 0x5e1c1
@end

@interface XXUnknownSuperclass (SUScriptStorePageViewControllerAdditions)
@property(assign) BOOL showsBackgroundShadow;	// G=0x60bd5; S=0x60bd1; converted property
// converted property getter: - (BOOL)showsBackgroundShadow;	// 0x60bd5
// converted property setter: - (void)setShowsBackgroundShadow:(BOOL)shadow;	// 0x60bd1
@end

@interface XXUnknownSuperclass (SUOverlayBackgroundAdditions)
- (BOOL)presentViewController:(id)controller inOverlayWithConfiguration:(id)configuration;	// 0x681a9
- (BOOL)presentOverlayViewController:(id)controller withTransition:(id)transition;	// 0x68101
- (BOOL)presentOverlayBackgroundViewController:(id)controller;	// 0x680b9
- (id)overlayBackgroundViewController;	// 0x68075
- (void)dismissOverlayBackgroundViewController;	// 0x68031
@end

@interface XXUnknownSuperclass (SUOverlayViewControllerAdditions)
- (id)scriptWindowContext;	// 0x6a5f1
- (id)overlayViewController;	// 0x6a58d
@end

@interface XXUnknownSuperclass (SUSplitViewAdditions)
- (id)storeSplitViewController;	// 0x6dee1
- (CGSize)minimumViewSize;	// 0x6de65
- (CGSize)maximumViewSize;	// 0x6dde9
@end

@interface XXUnknownSuperclass (SUScriptNavigationItemAdditions)
- (id)navigationItemForScriptInterface;	// 0x77589
@end

@interface XXUnknownSuperclass (SUGridViewAdditions)
@property(readonly, assign, nonatomic) unsigned gridSection;	// G=0x86ff1; 
@property(readonly, assign, nonatomic) unsigned gridRow;	// G=0x86fdd; 
@property(readonly, assign, nonatomic) unsigned gridColumn;	// G=0x86fa5; 
+ (id)indexPathForRow:(unsigned)row column:(unsigned)column inSection:(unsigned)section;	// 0x86f71
// declared property getter: - (unsigned)gridSection;	// 0x86ff1
// declared property getter: - (unsigned)gridRow;	// 0x86fdd
// declared property getter: - (unsigned)gridColumn;	// 0x86fa5
@end

@interface XXUnknownSuperclass (SUGridTableAdditions)
@property(readonly, assign, nonatomic) SUGridView *gridView;	// G=0x87ff1; 
- (void)setEditingBySwiping:(BOOL)swiping animated:(BOOL)animated;	// 0x8805d
// declared property getter: - (id)gridView;	// 0x87ff1
@end

@interface XXUnknownSuperclass (SUSearchFieldController)
- (id)iTunesStoreUI_searchFieldController;	// 0x9be51
@end

@interface XXUnknownSuperclass (SUInternal)
- (CGRect)_iTunesStoreUI_internalTitleViewFrameForNavigationItemIndex:(int)navigationItemIndex;	// 0x9caed
@end