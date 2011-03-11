/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView;

@interface UIGradientBar : UIView  {
    UIImageView *_topShineView;
    UIImageView *_gradientFillView;
    UIView *_bottomLineView;
    float _gradientHeight;
}

+ (id)gradientFillImage;
+ (id)bottomLineColor;

- (void)_tile;
- (void)setBottomLineAlpha:(float)arg1;
- (void)setGradientHeight:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
