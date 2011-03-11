/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UISwappableImageViewAnimationProxy, UIToolbar;

@interface UISwappableImageView : UIView  {
    id _value;
    id _alternate;
    float _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    BOOL _updateImage;
    BOOL _bezel;
    int _bezelStyle;
    int _currentAnimation;
    UIToolbar *_buttonBar;
    int _buttonTag;
    _UISwappableImageViewAnimationProxy *_proxy;
    int _barButtonItemStyle;
    BOOL _didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}


- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(int)arg3 barButtonItemStyle:(int)arg4 tintColor:(id)arg5 bezel:(BOOL)arg6;
- (void)setBezelStyleForBarStyle:(int)arg1 tintColor:(id)arg2;
- (void)updateImageIfNeeded;
- (void)showAlternateImage:(BOOL)arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)animateImage:(float)arg1 withButtonBar:(id)arg2 withTag:(int)arg3 target:(id)arg4 didFinishSelector:(SEL)arg5;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)setImage:(id)arg1;

@end
