/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    void *_internal;
}

@property(copy) NSURL * contentURL;
@property(readonly) UIView * view;
@property(readonly) UIView * backgroundView;
@property(readonly) int playbackState;
@property(readonly) int loadState;
@property int controlStyle;
@property int repeatMode;
@property BOOL shouldAutoplay;
@property BOOL useApplicationAudioSession;
@property(getter=isFullscreen) BOOL fullscreen;
@property int scalingMode;
@property float currentPlaybackRate;
@property double currentPlaybackTime;
@property(readonly) BOOL isPreparedToPlay;

+ (void)allInstancesResignActive;

- (double)duration;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)view;
- (id)backgroundView;
- (id)init;
- (void)dealloc;
- (double)endPlaybackTime;
- (int)movieMediaTypes;
- (void)setMovieSourceType:(int)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (BOOL)isFullscreen;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (double)playableDuration;
- (void)_resignActive;
- (BOOL)useApplicationAudioSession;
- (BOOL)shouldAutoplay;
- (float)currentPlaybackRate;
- (void)setContentURL:(id)arg1;
- (int)loadState;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (void)setShouldAutoplay:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (BOOL)allowsAirPlay;
- (BOOL)isPreparedToPlay;
- (void)prepareToPlay;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (int)movieSourceType;
- (id)initWithContentURL:(id)arg1;
- (id)contentURL;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)stop;
- (void)pause;
- (void)setFullscreen:(BOOL)arg1;
- (void)play;
- (int)playbackState;
- (void)setRepeatMode:(int)arg1;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)endSeeking;
- (int)repeatMode;
- (double)currentPlaybackTime;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)skipToNextItem;

@end
