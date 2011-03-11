/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoView, NSMutableArray, CALayer;

@interface MPMovieSnapshotController : NSObject  {
    MPVideoView *_videoView;
    CALayer *_layer;
    NSMutableArray *_pendingSnapshots;
    unsigned int _expectingTimeJump : 1;
    unsigned int _pendingRestore : 1;
    float _originalTime;
}


- (void)cancel;
- (void)setLayer:(id)arg1;
- (void)dealloc;
- (void)scheduleSnapshotWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 time:(float)arg3 delegate:(id)arg4;
- (void)_timeDidJump:(id)arg1;
- (id)_currentSnapshot;
- (void)_finishSnapshot:(id)arg1;
- (void)_restoreOriginalTime;
- (void)_startNextSnapshot;
- (void)_takeSnapshot:(id)arg1;
- (void)setVideoView:(id)arg1;

@end
