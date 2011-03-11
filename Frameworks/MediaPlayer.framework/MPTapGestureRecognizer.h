/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSTimer, UITouch;

@interface MPTapGestureRecognizer : UIGestureRecognizer  {
    unsigned int _lastTapCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property unsigned int tapCount;


- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned int)tapCount;
- (void)setTapCount:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)dealloc;
- (void)_setTapTimerWithDuration:(double)arg1;
- (void)_resetTapTimer;
- (void)_delayedHandleTaps:(id)arg1;

@end
