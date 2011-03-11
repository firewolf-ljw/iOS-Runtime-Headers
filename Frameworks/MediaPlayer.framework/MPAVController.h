/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPQueueFeeder, AVController, MPAVItem, NSNotification, MPAudioDeviceController, MPAVDestinationBrowser, NSDate, MPAVErrorResolver, MPAVControllerToAggregateDCommunicator, <MPAVDestination>, NSString, NSMutableArray, CALayer;

@interface MPAVController : NSObject  {
    AVController *_avController;
    double _connectionFailTime;
    unsigned int _valid : 1;
    int _playbackMode;
    MPAudioDeviceController *_audioDeviceController;
    MPQueueFeeder *_feeder;
    MPAVErrorResolver *_itemErrorResolver;
    CALayer *_videoLayer;
    unsigned int _videoLayerUsageCount;
    unsigned int _tickTimerEnabled;
    struct __CFRunLoopTimer { } *_tickTimer;
    double _tickInterval;
    struct __CFRunLoopTimer { } *_currentItemBookkeepingTimer;
    int _indexChangeDirection;
    unsigned int _itemIndexAtDeath;
    int _lastDisconnectReason;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned int _hasDelayedCurrentTimeToSet : 1;
    unsigned int _forceDelayedCurrentTimeToSet : 1;
    double _delayedCurrentTimeToSet;
    int _delayedCurrentTimeOptions;
    unsigned int _lastSetTimeMarker;
    unsigned int _autoPlayWhenLikelyToKeepUp : 1;
    unsigned int _autoPlayWhenLikelyToKeepUpBeforeSeek : 1;
    unsigned int _closedCaptioningEnabled : 1;
    int _eqPreset;
    double _nextFadeOutDuration;
    double _repeatGap;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    unsigned int _scanLevel;
    int _scanDirection;
    int _resetRateAfterSeekingUpdateDisabled;
    unsigned int _seeklessState;
    unsigned int _isSeekingOrScrubbing : 1;
    unsigned int _resetRateAfterSeeking : 1;
    unsigned int _activeRewindHoldingAtStart : 1;
    double _lastSeekableEnd;
    double _whenSawSeekableEnd;
    double _maxSeekableFwd;
    double _seekFwdSlop;
    double _lastSeekableStart;
    double _whenSawSeekableStart;
    double _maxSeekableRev;
    double _seekRevSlop;
    unsigned int _canSeekRev : 1;
    unsigned int _canSeekFwd : 1;
    unsigned int _alwaysPlayWheneverPossible : 1;
    unsigned int _stopAtEnd : 1;
    unsigned int _didReachEnd : 1;
    unsigned int _pausedDuringInterruption : 1;
    unsigned int _useApplicationAudioSession : 1;
    unsigned int _subtitlesEnabled : 1;
    unsigned int _videoFrameDisplayOnResumeDisabled : 1;
    unsigned int _disconnectedVideoLayerOnSuspend : 1;
    id _subtitlesRecipient;
    unsigned int _state;
    unsigned int _displayOverridePlaybackState;
    unsigned int _bufferingState;
    NSNotification *_delayedPlaybackStateNotification;
    NSMutableArray *_queueFeederStateStack;
    int _feederMode;
    MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;
    MPAVDestinationBrowser *_destinationBrowser;
    <MPAVDestination> *_destination;
    double _currentTimeAtDestinationSwitch;
    NSDate *_dateAtDestinationSwitch;
    NSDate *_estimatedDateAtDestinationSwitch;
    unsigned int _destinationInterrupted : 1;
    unsigned int _ignoreNextDestinationInterruptionForItemReadyToPlay : 1;
    unsigned int _ignoreNextDestinationInterruptionForResume : 1;
}

@property BOOL autoPlayWhenLikelyToKeepUp;
@property BOOL closedCaptioningEnabled;
@property unsigned int repeatType;
@property(getter=isShuffled,readonly) BOOL shuffled;
@property unsigned int shuffleType;
@property(readonly) BOOL hasVolumeControl;
@property float volume;
@property(readonly) BOOL muted;
@property(readonly) NSString * routeNameForVolumeControl;
@property(readonly) unsigned int activeRepeatType;
@property(readonly) unsigned int activeShuffleType;
@property(retain,readonly) MPAVItem * currentItem;
@property double currentTime;
@property(readonly) double durationOfCurrentItemIfAvailable;
@property(readonly) double playableDurationOfCurrentItemIfAvailable;
@property(readonly) unsigned int numberOfItems;
@property(getter=isPlaying,readonly) BOOL playing;
@property(getter=isRewindHoldingAtStart,readonly) BOOL rewindHoldingAtStart;
@property BOOL subtitlesEnabled;
@property(getter=isValid,readonly) BOOL valid;
@property BOOL alwaysPlayWheneverPossible;
@property(getter=isFullScreenVideoMode,readonly) BOOL fullScreenVideoMode;
@property int playbackMode;
@property BOOL stopAtEnd;
@property BOOL useApplicationAudioSession;
@property(readonly) BOOL isCurrentItemReady;
@property(retain,readonly) AVController * avController;
@property(readonly) BOOL handlingRemoteEvent;
@property(getter=destinationIsTVOut,setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;
@property BOOL videoFrameDisplayOnResumeDisabled;
@property(readonly) BOOL currentItemIsRental;
@property(retain,readonly) CALayer * videoLayer;
@property(retain,readonly) id subtitlesRecipient;
@property unsigned int state;
@property double repeatGap;
@property double nextFadeOutDuration;
@property int feederMode;
@property(retain) MPQueueFeeder * feeder;
@property int EQPreset;
@property(readonly) MPAVDestinationBrowser * destinationBrowser;
@property(retain) <MPAVDestination> * destination;
@property(readonly) unsigned int bufferingState;
@property(retain,readonly) MPAudioDeviceController * audioDeviceController;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedIPCAppInstance;
+ (void)purgeSharedInstance;
+ (id)sharedIPCAppInstanceIfAvailable;
+ (BOOL)outputSupportsAC3;

- (BOOL)isValid;
- (id)destination;
- (void)setDestination:(id)arg1;
- (id)currentItem;
- (unsigned int)numberOfItems;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)init;
- (void)dealloc;
- (void)applicationWillTerminate;
- (unsigned int)activeShuffleType;
- (BOOL)hasVolumeControl;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2;
- (void)ensureFeederIsSubclass:(Class)arg1;
- (void)setRepeatType:(unsigned int)arg1;
- (void)endPlayback;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)playItemAtIndex:(unsigned int)arg1 forceRestart:(BOOL)arg2;
- (void)changePlaybackIndexBy:(int)arg1;
- (void)beginTickTimerWithInterval:(double)arg1;
- (BOOL)canSeekBackwards;
- (BOOL)canSeekForwards;
- (void)prepareVideoLayerForReuse;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (BOOL)forceRestartPlaybackIfNecessary;
- (id)audioDeviceController;
- (int)feederMode;
- (double)repeatGap;
- (id)subtitlesRecipient;
- (BOOL)currentItemIsRental;
- (BOOL)destinationIsTVOut;
- (BOOL)handlingRemoteEvent;
- (BOOL)stopAtEnd;
- (BOOL)closedCaptioningEnabled;
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(int)arg2;
- (void)_setAVControllerQueueFeeder:(id)arg1 startQueueIndex:(unsigned int)arg2;
- (BOOL)fadeOutForQuit;
- (BOOL)isSeekingOrScrubbing;
- (BOOL)isRewindHoldingAtStart;
- (void)pauseWithFadeout:(float)arg1;
- (void)playItemAtIndex:(unsigned int)arg1;
- (void)playChapterTimeMarkerAtIndex:(unsigned int)arg1;
- (void)endTickTimer;
- (BOOL)isTickTimerEnabled;
- (unsigned int)activeRepeatType;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (BOOL)_showsPlayingWhenInState:(unsigned int)arg1;
- (unsigned int)_seeklessStateForState:(unsigned int)arg1;
- (BOOL)shouldDisplayAsPlaying;
- (BOOL)isShuffled;
- (BOOL)alwaysPlayWheneverPossible;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (void)setEQPreset:(int)arg1;
- (void)setRepeatGap:(double)arg1;
- (id)routeNameForVolumeControl;
- (BOOL)isFullScreenVideoMode;
- (int)playbackMode;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)arg1;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (void)switchToAudioPlayback:(BOOL)arg1;
- (void)switchToVideoPlayback:(BOOL)arg1;
- (id)videoLayer;
- (void)saveCurrentFeederState;
- (void)restorePreviousFeederState;
- (void)updateBookkeepingNow;
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned int)arg1;
- (BOOL)shouldRouteAudioToDeviceForCurrentItem;
- (double)playableDurationOfCurrentItemIfAvailable;
- (double)timeOfPlayableStart;
- (double)timeOfPlayableEnd;
- (double)timeOfSeekableStart;
- (double)timeOfSeekableEnd;
- (BOOL)isLiveStreaming;
- (void)skipToSeekableStart;
- (void)skipToSeekableEnd;
- (void)_coalesceAndPostMPTimeMarkerCrossedNotification;
- (void)insertAndPostEmbeddedTimeMarkerWithNotification:(id)arg1;
- (void)_crossedEmbeddedChapterNameDidChangeNotification:(id)arg1;
- (void)_crossedEmbeddedChapterHREFDidChangeNotification:(id)arg1;
- (void)_crossedEmbeddedChapterImageDidChangeNotification:(id)arg1;
- (void)controller:(id)arg1 crossedTimeMarker:(int)arg2 forItem:(id)arg3 context:(id)arg4;
- (BOOL)controller:(id)arg1 shouldBeginPlayingItem:(id)arg2 error:(id*)arg3;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(int)arg3;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_destinationBufferingStateDidChangeNotification:(id)arg1;
- (void)_destinationPlaybackStateDidChangeNotification:(id)arg1;
- (void)_didFinishSuspensionSnapshotNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemCompletedDecodeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemFailedToPlayNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_playbackInterruptedNotification:(id)arg1;
- (void)_playbackInterruptionDidEndNotification:(id)arg1;
- (void)_updateCurrentItemBookkeeping;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_disconnectAVControllerWithReason:(int)arg1;
- (void)_serverConnectionDiedNotification:(id)arg1;
- (void)_sizeDidChangeNotification:(id)arg1;
- (void)_streamBufferFullNotification:(id)arg1;
- (void)_streamLikelyToKeepUpNotification:(id)arg1;
- (void)_streamRanDryNotification:(id)arg1;
- (void)_streamUnlikelyToKeepUpNotification:(id)arg1;
- (void)_systemVolumeDidChangeNotification:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_volumeMutedDidChangeNotification:(id)arg1;
- (void)_resumedEventsOnly:(BOOL)arg1;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)_resumedNotification:(id)arg1;
- (void)_suspendedEventsOnlyNotification:(id)arg1;
- (void)_suspendedNotification:(id)arg1;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (void)_updateDestinationForPickedRoute;
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)arg1;
- (void)_configureAVController:(id)arg1;
- (BOOL)_connectAVController;
- (void)_disconnectVideoLayerIfNecessary;
- (void)_endSeekAndChangeRate:(BOOL)arg1;
- (unsigned int)_playbackIndexForDelta:(int)arg1 fromIndex:(unsigned int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_registerForAVNotifications:(id)arg1;
- (void)_registerForAVSystemNotifications:(id)arg1;
- (void)_resetInternalState;
- (void)_resetQueue:(BOOL)arg1 videoLayer:(id)arg2;
- (void)_attemptAutoPlay;
- (void)_setBufferingState:(unsigned int)arg1;
- (void)_setActionAtEndAttributeForState:(unsigned int)arg1;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned int)arg1 newState:(unsigned int)arg2 delayable:(BOOL)arg3;
- (void)autoclearDisplayOverride;
- (void)setDisplayOverridePlaybackState:(unsigned int)arg1;
- (unsigned int)_displayPlaybackState;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_clearResetRateAfterSeeking;
- (void)_setItemErrorResolver:(id)arg1;
- (void)_setState:(unsigned int)arg1;
- (void)_setVideoLayerOnAVController:(id)arg1 force:(BOOL)arg2;
- (BOOL)_wantsVideoLayerWhenSuspended;
- (void)_setValid:(BOOL)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForAVNotifications:(id)arg1;
- (void)_unregisterForAVSystemNotifications:(id)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)_updateScanningRate;
- (void)_delayedSetCurrentTime;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_clearSeekingIntervalsForStreaming;
- (id)_metadataDictionariesFromMetadataPayload:(id)arg1;
- (id)_extractImageFromMetadataPayload:(id)arg1;
- (void)_pauseTickTimer;
- (void)_resumeTickTimer;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2;
- (void)_routeAudioToDeviceIfNecessary;
- (void)_beginDestinationInterruption;
- (void)_endDestinationInterruption;
- (BOOL)_canPlayItem:(id)arg1;
- (double)nextFadeOutDuration;
- (int)EQPreset;
- (id)destinationBrowser;
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned int)arg1;
- (void)feederChangedContents:(id)arg1;
- (void)reloadFeederWithStartQueueIndex:(unsigned int)arg1;
- (void)ensureFeederIsClass:(Class)arg1;
- (unsigned int)shuffleType;
- (void)setShuffleType:(unsigned int)arg1;
- (unsigned int)repeatType;
- (id)_avController;
- (void)_clearVideoLayer;
- (void)_itemAttributeAvailableNotification:(id)arg1;
- (void)setFeeder:(id)arg1;
- (BOOL)subtitlesEnabled;
- (void)setSubtitlesEnabled:(BOOL)arg1;
- (double)durationOfCurrentItemIfAvailable;
- (void)setNextFadeOutDuration:(double)arg1;
- (void)togglePlayback;
- (void)setDestinationIsTVOut:(BOOL)arg1;
- (BOOL)muted;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (BOOL)videoFrameDisplayOnResumeDisabled;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (unsigned int)bufferingState;
- (BOOL)isCurrentItemReady;
- (void)beginSeek:(int)arg1;
- (void)endSeek;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)setPlaybackMode:(int)arg1;
- (void)beginUsingVideoLayer;
- (void)endUsingVideoLayer;
- (id)feeder;
- (void)setPlaybackIndex:(int)arg1;
- (void)setFeederMode:(int)arg1;
- (void)ensureHasAVController;
- (BOOL)useApplicationAudioSession;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (float)volume;
- (void)setVolume:(float)arg1;
- (id)avController;
- (void)pause;
- (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)arg1;
- (float)rate;
- (BOOL)setRate:(float)arg1;
- (void)setAlwaysPlayWheneverPossible:(BOOL)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (double)currentTime;
- (void)play;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (BOOL)isPlaying;
- (void)setCurrentTime:(double)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer { }*)arg1;

@end
