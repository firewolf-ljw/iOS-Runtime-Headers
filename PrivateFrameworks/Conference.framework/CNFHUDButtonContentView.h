/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UIImageView, UILabel;

@interface CNFHUDButtonContentView : UIView  {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    int _orientation;
}

@property int orientation;
@property(retain) UILabel * titleLabel;
@property(retain) UIImageView * imageView;


- (void)setTitleLabel:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)titleLabel;
- (void)setImageView:(id)arg1;
- (void)setOrientation:(int)arg1;
- (id)imageView;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)orientation;
- (void)dealloc;

@end
