/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UISwitch : UIControl <NSCoding> {
    id _control;
}

@property(getter=_onTintColor,setter=_setOnTintColor:,retain) UIColor * onTintColor;
@property(getter=_onColor,setter=_setOnColor:,retain) UIColor * onColor;
@property(getter=isOn) BOOL on;

+ (void)_initializeSafeCategory;

- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setEnabled:(BOOL)arg1;
- (void)_setupMask;
- (id)_customColoredOnButtonImage;
- (id)_imageForState:(int)arg1;
- (void)_setThumbPosition:(float)arg1;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_setPressed:(BOOL)arg1;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setOnColor:(id)arg1;
- (id)_onColor;
- (void)_setOnTintColor:(id)arg1;
- (id)_onTintColor;
- (void)_resetImages;
- (void)setAlternateColors:(BOOL)arg1;
- (void)_updateImage;
- (id)_scriptingInfo;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)setAlpha:(float)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
