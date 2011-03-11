/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSTimer, NSString, NSDate, NSMutableArray;

@interface IMSystemMonitor : NSObject  {
    NSMutableArray *_listeners;
    NSDate *_idleStart;
    NSTimer *_timer;
    NSString *_userID;
    BOOL _switchedOut;
    BOOL _screensaverActive;
    BOOL _screenLocked;
    BOOL _active;
    BOOL _backingUp;
    BOOL _willSleep;
    double _delayTime;
}

@property(readonly) BOOL systemIsShuttingDown;
@property(readonly) BOOL isSystemIdle;
@property(readonly) double systemIdleTime;
@property BOOL isFastUserSwitched;
@property(readonly) BOOL isBackingUp;
@property(setter=setActive:) BOOL isActive;
@property(readonly) BOOL isScreenSaverActive;
@property(readonly) BOOL isScreenLocked;
@property(readonly) BOOL systemIsSleeping;

+ (id)sharedMonitor;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (BOOL)isScreenSaverActive;
- (BOOL)isBackingUp;
- (double)systemIdleTime;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (void)_systemDidWake;
- (void)_systemWillSleep;
- (void)_postScreenLocked;
- (void)_suspend:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_postScreenSaverStarted;
- (void)_screenSaverStopped:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_setIdleState:(BOOL)arg1;
- (BOOL)isSystemIdle;
- (void)_systemWillShutdown;
- (void)_restoreDidStart;
- (void)_restoreDidStop;
- (void)_registerForRestoreNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_handleLoginWindowNotification:(id)arg1;
- (void)_registerForLoginWindowNotifications;
- (void)_unregisterForLoginWindowNotifications;
- (void)setIsFastUserSwitched:(BOOL)arg1;
- (BOOL)isScreenLocked;
- (BOOL)systemIsSleeping;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (BOOL)isFastUserSwitched;
- (BOOL)systemIsShuttingDown;

@end
