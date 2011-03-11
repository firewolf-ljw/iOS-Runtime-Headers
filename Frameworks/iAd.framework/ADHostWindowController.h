/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIWindow, UIViewController, UIView;

@interface ADHostWindowController : NSObject  {
    BOOL _supportsPortrait;
    BOOL _supportsPortraitUpsideDown;
    BOOL _supportsLandscapeLeft;
    BOOL _supportsLandscapeRight;
    UIView *_bannerView;
    UIViewController *_bannerViewController;
    BOOL _presented;
    BOOL _bannerViewControllerIsStandAlone;
    UIWindow *_bannerWindow;
    float _savedWindowLevel;
}

@property(getter=isStatusBarHidden) BOOL statusBarHidden;
@property float savedWindowLevel;
@property(retain) UIWindow * bannerWindow;
@property BOOL bannerViewControllerIsStandAlone;
@property BOOL presented;
@property(retain) UIViewController * bannerViewController;
@property UIView * bannerView;
@property BOOL supportsLandscapeRight;
@property BOOL supportsLandscapeLeft;
@property BOOL supportsPortraitUpsideDown;
@property BOOL supportsPortrait;


- (void)setBannerView:(id)arg1;
- (id)bannerView;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)isStatusBarHidden;
- (id)init;
- (void)dealloc;
- (void)endTransitionOut;
- (void)beginTransitionIn;
- (void)endTransitionIn;
- (void)setSupportsPortraitUpsideDown:(BOOL)arg1;
- (void)setSupportsLandscapeLeft:(BOOL)arg1;
- (void)clearBannerView;
- (void)beginTransitionOut;
- (void)_hideHostUI;
- (void)_showHostUI;
- (void)_preventInterstitialExceptionOnInsert;
- (float)savedWindowLevel;
- (void)setSavedWindowLevel:(float)arg1;
- (id)bannerWindow;
- (void)setBannerWindow:(id)arg1;
- (BOOL)bannerViewControllerIsStandAlone;
- (void)setBannerViewControllerIsStandAlone:(BOOL)arg1;
- (BOOL)presented;
- (void)setPresented:(BOOL)arg1;
- (id)bannerViewController;
- (void)setBannerViewController:(id)arg1;
- (BOOL)supportsLandscapeRight;
- (void)setSupportsLandscapeRight:(BOOL)arg1;
- (BOOL)supportsLandscapeLeft;
- (BOOL)supportsPortraitUpsideDown;
- (BOOL)supportsPortrait;
- (void)setSupportsPortrait:(BOOL)arg1;

@end
