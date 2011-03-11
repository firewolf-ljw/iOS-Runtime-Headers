/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject  {
}

+ (id)getPendingNotificationUserInfo;
+ (int)enabledRemoteNotificationTypes;
+ (void)registerForRemoteNotificationTypes:(int)arg1;
+ (BOOL)isSystemwideEnabled;
+ (void)setSystemwideEnabled:(BOOL)arg1;
+ (BOOL)hasRegisteredBundleIdentifiers;
+ (void)getSupportedTypes:(id*)arg1 enabledTypes:(id*)arg2;
+ (void)setEnabledNotificationTypes:(int)arg1 forBundleIdentifier:(id)arg2;


@end
