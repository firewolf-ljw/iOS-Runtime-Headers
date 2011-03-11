/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class CPDistributedMessageCenter, NSMapTable, NSString;

@interface ADDaemonClient : NSObject  {
    struct __CFMessagePort { } *_replyPort;
    CPDistributedMessageCenter *_sendCenter;
    NSMapTable *_tokenToObserver;
    NSString *_randomPortName;
}

@property(retain) NSString * randomPortName;

+ (id)sharedClient;

- (void)_daemonDied:(id)arg1;
- (void)_receivedReply:(long)arg1 withData:(struct __CFData { }*)arg2;
- (void)_tokenReceivedFromCenter:(id)arg1 reply:(id)arg2 error:(id)arg3 observer:(id)arg4;
- (void)requestAdsForSpecification:(id)arg1 subscribers:(id)arg2 withProperties:(id)arg3 serverURL:(id)arg4 notifyObserver:(id)arg5;
- (id)randomPortName;
- (void)setRandomPortName:(id)arg1;
- (id)init;

@end
