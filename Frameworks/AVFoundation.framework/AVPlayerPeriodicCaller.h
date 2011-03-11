/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _interval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    struct OpaqueFigPlaybackItem { } *_figPlaybackItem;
}


- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)finalize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 interval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 queue:(struct dispatch_queue_s { }*)arg3 block:(id)arg4;
- (void)_resetTimerForPlayerNewRate:(float)arg1;
- (void)_stopRespondingToPlayerStateChanges;
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;
- (void)itemTimeJumped;
- (void)_stopObservingPlaybackItemNotifications;

@end
