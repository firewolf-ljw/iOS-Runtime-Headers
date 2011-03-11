/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, UIImageView, UILabel;

@interface GKGroupedSectionHeaderView : UIView  {
    UIImageView *_backgroundView;
    UILabel *_label;
    GKUITheme *_theme;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
}

@property struct UIEdgeInsets { float top; float left; float bottom; float right; } contentInsets;
@property(readonly) UILabel * label;
@property(retain) GKUITheme * theme;

+ (float)defaultHeight;

- (id)initWithTheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)label;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)theme;
- (void)setTheme:(id)arg1;

@end
