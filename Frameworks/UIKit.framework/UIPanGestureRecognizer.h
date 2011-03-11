/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer  {
    struct CGPoint { 
        float x; 
        float y; 
    } _firstScreenLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastScreenLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    unsigned int _lastTouchCount;
    unsigned int _minTouchCount;
    unsigned int _maxTouchCount;
    float _hysteresis;
    unsigned int _failsPastMaxTouches : 1;
}

@property(getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;
@property(getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;
@property unsigned int maximumNumberOfTouches;
@property unsigned int minimumNumberOfTouches;


- (int)_lastTouchCount;
- (id)_velocitySample;
- (void)_resetVelocitySamples;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 toScreenCoordinatesFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromScreenCoordinatesToView:(id)arg2;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (BOOL)_willScrollX;
- (BOOL)_willScrollY;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (unsigned int)maximumNumberOfTouches;
- (void)setMaximumNumberOfTouches:(unsigned int)arg1;
- (unsigned int)minimumNumberOfTouches;
- (id)_previousVelocitySample;
- (void)_resetGestureRecognizer;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setMinimumNumberOfTouches:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (BOOL)failsPastMaxTouches;
- (void)_setHysteresis:(float)arg1;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (unsigned int)numberOfTouches;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;
- (void)setTranslation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (float)_hysteresis;
- (void)dealloc;

@end
