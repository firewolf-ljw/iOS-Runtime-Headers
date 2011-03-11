/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextMagnifierTimeWeightedPoint, UIResponder<UITextInput>;

@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
    UIResponder<UITextInput> *_text;
    UIView *_target;
    struct CGPoint { 
        float x; 
        float y; 
    } _magnificationPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _offset;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    float _yOffset;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
}

@property struct CGPoint { float x; float y; } magnificationPoint;
@property(readonly) BOOL terminalPointPlacedCarefully;
@property(readonly) struct CGPoint { float x; float y; } terminalPoint;
@property struct CGPoint { float x; float y; } animationPoint;
@property float yOffset;
@property struct CGPoint { float x; float y; } offset;
@property(retain) UIView * target;
@property(retain) UIResponder<UITextInput> * text;

+ (id)sharedCaretMagnifier;

- (void)setAnimationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMagnificationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setToMagnifierRenderer;
- (void)remove;
- (float)yOffset;
- (struct CGPoint { float x1; float x2; })animationPoint;
- (id)initWithDefaultFrame;
- (struct CGPoint { float x1; float x2; })magnificationPoint;
- (struct CGPoint { float x1; float x2; })terminalPoint;
- (BOOL)terminalPointPlacedCarefully;
- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (void)autoscrollWillNotStart;
- (void)zoomUpAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimation;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateFrameAndOffset;
- (void)detectLostTouches:(id)arg1;
- (void)windowWillRotate:(id)arg1;
- (void)setYOffset:(float)arg1;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { float x1; float x2; })arg3 offset:(struct CGPoint { float x1; float x2; })arg4 animated:(BOOL)arg5;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (id)target;
- (void)postAutoscrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setTarget:(id)arg1;

@end
