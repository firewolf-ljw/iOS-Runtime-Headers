/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class UIImageView, UIView, ADBannerData, <ADStoryboardTransitionWindowDelegate>, UIWebView, ADStoryboardController;

@interface ADStoryboardTransitionWindow : UIWindow  {
    ADStoryboardController *_storyboard;
    <ADStoryboardTransitionWindowDelegate> *_adDelegate;
    UIView *_containerView;
    UIImageView *_adImageView;
    ADBannerData *_bannerData;
    BOOL _adReady;
    BOOL _revealTransitionStillRunning;
    UIWebView *_bannerWebView;
    struct CGImage { } *_screenBeforeTransitionIn;
    int _authoredTransitionState;
}

@property int authoredTransitionState;
@property struct CGImage { }* screenBeforeTransitionIn;
@property(retain) UIWebView * bannerWebView;
@property BOOL revealTransitionStillRunning;
@property BOOL adReady;
@property(retain) ADBannerData * bannerData;
@property(retain) UIImageView * adImageView;
@property(retain) UIView * containerView;
@property <ADStoryboardTransitionWindowDelegate> * adDelegate;
@property(retain) ADStoryboardController * storyboard;

+ (void)hideAppSwitcher;
+ (void)_calculateOffsetForTaskSwitcherInOrientation:(int)arg1;
+ (void)_setOwnerWindow:(id)arg1;
+ (void)showAppSwitcher;

- (void)prepareRemoteSheet;
- (void)dismissRemoteSheet;
- (void)dismissAd;
- (void)authoredTransitionInComplete;
- (id)storyboard;
- (id)containerView;
- (id)adImageView;
- (BOOL)adReady;
- (struct CGImage { }*)screenBeforeTransitionIn;
- (id)initWithBannerData:(id)arg1 delegate:(id)arg2;
- (void)setStoryboard:(id)arg1;
- (int)_adOrientation;
- (int)_hostOrientation;
- (int)_slideTransitionOrientation;
- (void)_doTransitionBegin;
- (void)_doTransitionCompleted;
- (void)_undoTransitionBegin;
- (void)_undoTransitionCompleted;
- (struct CGSize { float x1; float x2; })_sizeForAdOrientation;
- (id)_transitionAdImage;
- (id)_transitionImage;
- (struct CGPoint { float x1; float x2; })_transitionOffset;
- (int)_transitionType;
- (void)_slideLayout;
- (void)_doSlide;
- (void)_undoSlide;
- (void)_revealLayoutWithOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_doCompleteReveal;
- (void)_doBeginReveal;
- (void)_undoReveal;
- (void)_helper:(id)arg1;
- (void)_dispatchDOMEventToBannerView:(id)arg1;
- (void)_doBeginAuthored;
- (void)readyForAuthoredTransitionIn;
- (void)mainContentSignalsReady;
- (void)presentAd;
- (void)adIsReady;
- (int)authoredTransitionState;
- (void)setAuthoredTransitionState:(int)arg1;
- (void)setScreenBeforeTransitionIn:(struct CGImage { }*)arg1;
- (id)bannerWebView;
- (void)setBannerWebView:(id)arg1;
- (BOOL)revealTransitionStillRunning;
- (void)setRevealTransitionStillRunning:(BOOL)arg1;
- (void)setAdReady:(BOOL)arg1;
- (void)setAdImageView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)adDelegate;
- (void)setAdDelegate:(id)arg1;
- (id)bannerData;
- (void)setBannerData:(id)arg1;
- (void)dealloc;

@end
