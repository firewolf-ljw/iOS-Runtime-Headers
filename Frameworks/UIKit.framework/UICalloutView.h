/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView, UILabel, NSTimer, NSMutableArray;

@interface UICalloutView : UIControl  {
    UIImageView *_leftCap;
    UIImageView *_rightCap;
    UIImageView *_topAnchor;
    UIImageView *_bottomAnchor;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UILabel *_title;
    UILabel *_subtitle;
    UILabel *_temporary;
    UIView *_leftView;
    UIView *_rightView;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGPoint { 
            float x; 
            float y; 
        } offset; 
        int position; 
        struct CGPoint { 
            float x; 
            float y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } desiredBounds; 
    } _anchor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    id _delegate;
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int canAnchorFromBottom : 1; 
        unsigned int reserved : 28; 
    } _flags;
    NSMutableArray *_fadeInViews;
    NSMutableArray *_fadeOutViews;
    NSTimer *_layoutAnimationTimer;
    float _maximumWidth;
}

@property(readonly) float UICalloutViewCapHeight;
@property(readonly) float UICalloutViewCapPaddingTop;
@property(readonly) float UICalloutViewLayoutDuration;
@property(readonly) float UICalloutViewButtonPadding;
@property(readonly) float UICalloutViewHorizontalMargin;
@property(readonly) float UICalloutViewHorizontalPadding;
@property(readonly) float UICalloutViewVerticalMargin;
@property(readonly) float UICalloutViewMinimumWidth;
@property int titleLineBreakMode;
@property int subtitleLineBreakMode;
@property int titleTextAlignment;
@property int subtitleTextAlignment;
@property BOOL canAnchorFromBottom;
@property float maximumWidth;
@property(retain) UIView * rightView;
@property(retain) UIView * leftView;

+ (id)_backgroundImage;
+ (id)_leftCapImage;
+ (id)_rightCapImage;
+ (id)_topAnchorImage;
+ (id)_bottomAnchorImage;
+ (id)sharedCalloutView;
+ (float)defaultHeight;
+ (void)_initializeSafeCategory;

- (void)setSubtitle:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (float)maximumWidth;
- (int)titleTextAlignment;
- (int)titleLineBreakMode;
- (float)UICalloutViewMinimumWidth;
- (float)UICalloutViewVerticalMargin;
- (float)UICalloutViewLayoutDuration;
- (float)UICalloutViewCapHeight;
- (float)UICalloutViewCapPaddingTop;
- (float)UICalloutViewButtonPadding;
- (float)UICalloutViewHorizontalMargin;
- (float)UICalloutViewHorizontalPadding;
- (void)_setLeftView:(id)arg1;
- (void)_setRightView:(id)arg1;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)_layoutAnimation;
- (void)_scheduleLayoutAnimation;
- (void)setLeftView:(id)arg1;
- (id)subtitle;
- (void)setTemporaryTitle:(id)arg1;
- (id)temporaryTitle;
- (void)setTitleLineBreakMode:(int)arg1;
- (int)subtitleLineBreakMode;
- (void)setSubtitleLineBreakMode:(int)arg1;
- (void)setTitleTextAlignment:(int)arg1;
- (int)subtitleTextAlignment;
- (void)setSubtitleTextAlignment:(int)arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)setCanAnchorFromBottom:(BOOL)arg1;
- (BOOL)canAnchorFromBottom;
- (void)getActualAnchorPoint:(struct CGPoint { float x1; float x2; }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(struct CGPoint { float x1; float x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_setOriginForScale:(float)arg1;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animate:(BOOL)arg3;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)fadeOutWithDuration:(float)arg1;
- (void)_markDidMoveCalled;
- (void)completeBounceAnimation;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1;
- (void)setMaximumWidth:(float)arg1;
- (id)leftView;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)rightView;
- (void)_fadeViewsIn:(BOOL)arg1;
- (id)title;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;

@end
