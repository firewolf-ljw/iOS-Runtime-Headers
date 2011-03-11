/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableSet, NSString, NSThread;

@interface IMExtendedOperation : NSOperation  {
    NSThread *_operationThread;
    NSString *_operationName;
    unsigned int _operationState;
    double _operationTimeout;
    NSMutableSet *_childOperations;
}

@property(retain) NSString * name;
@property double timeout;
@property(readonly) unsigned int state;

+ (id)runLoopModes;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)start;
- (void)cancel;
- (void)setName:(id)arg1;
- (unsigned int)state;
- (id)name;
- (void)dealloc;
- (void)_setState:(unsigned int)arg1;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (unsigned int)_maxChildOperationState;
- (unsigned int)_minChildOperationState;
- (void)_startThread;
- (void)_threadedMain;
- (void)createChildOperations;
- (void)didFinish;
- (void)_stopWithState:(unsigned int)arg1;
- (void)_timeout;
- (void)addChildOperation:(id)arg1;
- (void)fail;
- (double)timeout;
- (void)setTimeout:(double)arg1;

@end
