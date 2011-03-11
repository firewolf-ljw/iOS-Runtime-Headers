/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject  {
    MPMusicPlayerControllerInternal *_internal;
}

@property BOOL allowsRemoteUIAccess;
@property int playbackSpeed;
@property(readonly) unsigned int indexOfNowPlayingItem;
@property(readonly) unsigned int unshuffledIndexOfNowPlayingItem;
@property(readonly) BOOL isNowPlayingItemFromGeniusMix;
@property unsigned int currentChapterIndex;
@property(readonly) NSDictionary * springboardNowPlayingInfo;

+ (void)initialize;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)runLoopForNotifications;
+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;

- (unsigned int)numberOfItems;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (id)nowPlayingItemAtIndex:(unsigned int)arg1;
- (id)springboardNowPlayingInfo;
- (void)setPlaybackSpeed:(int)arg1;
- (int)playbackSpeed;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (BOOL)allowsRemoteUIAccess;
- (unsigned int)indexOfNowPlayingItem;
- (void)_systemVolumeDidChange:(id)arg1;
- (BOOL)isGeniusAvailable;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (unsigned int)currentChapterIndex;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (BOOL)serverIsAlive;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)_musicPlayerDidLaunch;
- (void)_registerForLaunchNotifications;
- (void)_unregisterForLaunchNotifications;
- (void)_clientCheckIn;
- (void)_playbackStateDidChange:(int)arg1;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_shuffleModeDidChange:(int)arg1;
- (void)_repeatModeDidChange:(int)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_stopMigServer;
- (void)setCurrentPlaybackTime:(double)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_serverDied:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (int)playbackState;
- (void)setRepeatMode:(int)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (int)shuffleMode;
- (int)repeatMode;
- (double)currentPlaybackTime;
- (void)endGeneratingPlaybackNotifications;
- (void)beginGeneratingPlaybackNotifications;
- (id)nowPlayingItem;
- (void)setShuffleMode:(int)arg1;

@end
