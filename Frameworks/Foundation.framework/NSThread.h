/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject  {
    id _private;
    unsigned char _bytes[44];
}

+ (void)sleepUntilDate:(id)arg1;
+ (id)currentThread;
+ (id)callStackSymbols;
+ (BOOL)isMainThread;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (BOOL)isMultiThreaded;
+ (void)sleepForTimeInterval:(double)arg1;
+ (id)callStackReturnAddresses;
+ (id)mainThread;
+ (void)exit;
+ (BOOL)isDying;
+ (double)threadPriority;
+ (BOOL)setThreadPriority:(double)arg1;
+ (id)_mapkit_networkIOThread;
+ (id)_mapkit_backgroundDrawingThread;
+ (void)_mapkit_runThread:(id)arg1;
+ (void)_ay_prepareForInterThreadMessages;
+ (id)stackBacktrace;

- (void)main;
- (void)start;
- (void)cancel;
- (void)setName:(id)arg1;
- (id)threadDictionary;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isMainThread;
- (BOOL)isCancelled;
- (id)runLoop;
- (void)setStackSize:(unsigned int)arg1;
- (unsigned int)stackSize;
- (void)_nq:(id)arg1;
- (BOOL)isDying;
- (double)threadPriority;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setThreadPriority:(double)arg1;
- (void)mf_performOneway:(BOOL)arg1 result:(void*)arg2 withTarget:(id)arg3 selector:(SEL)arg4;
- (void)registerForStopNotification;
- (void)unregisterForStopNotification;
- (BOOL)shouldStop;

@end
