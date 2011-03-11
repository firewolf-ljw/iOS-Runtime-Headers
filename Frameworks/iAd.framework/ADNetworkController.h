/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSTimer;

@interface ADNetworkController : NSObject  {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
    int _networkType;
}

+ (id)sharedNetworkController;

- (void)start;
- (void)_scheduleCheckForNetwork;
- (void)_checkForNetwork;
- (void)_checkForNetworkAndNotify;
- (int)networkType;

@end
