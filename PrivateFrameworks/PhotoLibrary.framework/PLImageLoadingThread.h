/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableSet, NSConditionLock, PLImageCache, NSMutableArray, NSMutableDictionary;

@interface PLImageLoadingThread : NSObject  {
    BOOL _running;
    BOOL _paused;
    PLImageCache *_cache;
    NSMutableSet *_queues;
    NSMutableArray *_requests;
    NSMutableDictionary *_requestsByKey;
    int _requestInsertionPositionHigh;
    int _requestInsertionPositionNormal;
    NSConditionLock *_lock;
}


- (void)dealloc;
- (void)_run;
- (void)_start;
- (void)_enqueueRequest:(id)arg1 withPriority:(int)arg2;
- (id)_dequeueRequestAtIndex:(int)arg1;
- (id)_dequeueRequest:(id)arg1;
- (void)stop;
- (void)cacheWasDeallocated;
- (id)loadImageFromSource:(id)arg1 forObject:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(id)arg6;
- (void)addImageLoadingQueue:(id)arg1;
- (void)pause;
- (void)resume;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)cancelLoadFromSource:(id)arg1 forObject:(id)arg2 forImageLoadingQueue:(id)arg3;
- (id)initWithImageCache:(id)arg1;

@end
