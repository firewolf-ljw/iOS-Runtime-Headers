/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableAttributedString, NSData, NSLock, SCROConnection, NSAttributedString;

@interface SCROBrailleClient : NSObject  {
    SCROConnection *_connection;
    NSLock *_lock;
    id _delegate;
    NSMutableAttributedString *_mainStringPending;
    NSAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    BOOL _isReady;
    BOOL _needsDisplay;
    BOOL _keepConnectionAlive;
    BOOL _delegateWantsKeypresses;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsReconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _displayDescriptorCallbackEnabled;
    int _statusSize;
}


- (BOOL)needsDisplay;
- (void)displayIfNeeded;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)display;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)simulateKeypress:(id)arg1;
- (void)panDisplayRight:(long)arg1;
- (void)setPrimaryBrailleDisplay:(long)arg1;
- (id)aggregatedStatus;
- (id)tableIdentifier;
- (int)virtualStatusAlignment;
- (int)displayMode;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4;
- (void)setAnnouncementsDisplayMode;
- (void)handleCallback:(id)arg1;
- (id)driverConfiguration;
- (BOOL)isConfigured;
- (id)mainAttributedString;
- (void)setMainAttributedString:(id)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (long)masterStatusCellIndex;
- (void)panDisplayLeft:(long)arg1;
- (void)exitCurrentDisplayMode;
- (void)setContractionMode:(int)arg1;
- (BOOL)showEightDotBraille;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(long)arg3;
- (int)contractionMode;
- (void)setMasterStatusCellIndex:(long)arg1;
- (BOOL)_isReady;
- (void)_setupDeviceDetection;
- (void)_deviceConnected:(id)arg1;
- (void)setKeepConnectionAlive:(BOOL)arg1;
- (BOOL)keepConnectionAlive;
- (void)_tryToKillConnection;
- (id)_lazyConnection;
- (void)_registerDelegate;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)setTableIdentifier:(id)arg1;
- (id)pendingMainAttributedString;
- (void)setAnnouncementString:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (id)pendingAggregatedStatus;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1;
- (BOOL)displayDescriptorCallbackEnabled;
- (id)_getWorkingString;
- (id)tokenArray;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forToken:(int)arg2;
- (void)selectAllForToken:(int)arg1;
- (void)unselectAllForToken:(int)arg1;
- (void)setFocused:(BOOL)arg1 forToken:(int)arg2;
- (void)_refreshAfterReconnect;

@end
