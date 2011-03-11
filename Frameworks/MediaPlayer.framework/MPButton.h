/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPButton : UIButton  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
    double _holdDelayInterval;
    unsigned int _holding : 1;
}

@property double holdDelayInterval;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } hitRectInsets;

+ (void)_initializeSafeCategory;

- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_delayedTriggerHold;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)_handleTouchUp;
- (double)holdDelayInterval;
- (void)setHoldDelayInterval:(double)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;

@end
