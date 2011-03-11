/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIAnimator : NSObject  {
    NSMutableArray *_animations;
    double _lastUpdateTime;
    struct __GSHeartbeat { } *_lcdHeartbeat;
    struct __GSHeartbeat { } *_tvHeartbeat;
    int _lcdCount;
    int _tvCount;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (float)fractionForAnimation:(id)arg1;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)_advance:(BOOL)arg1;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)dealloc;

@end
