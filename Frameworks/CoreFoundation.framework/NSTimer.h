/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSTimer : NSObject  {
}

+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;

- (id)fireDate;
- (BOOL)isValid;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (double)interval;
- (double)timeInterval;
- (struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })context;
- (void)invalidate;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (long)order;
- (struct __CFString { }*)copyDebugDescription;
- (double)fireTime;
- (void)setFireTime:(double)arg1;
- (double)_cffireTime;
- (void)fire;

@end
