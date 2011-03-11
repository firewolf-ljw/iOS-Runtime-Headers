/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSMutableArray, NSDictionary;

@interface UIWebFormPasswordsEditor : NSObject  {
    NSDictionary *_credentialsByProtectionSpace;
    NSMutableArray *_flattenedCredentials;
    NSMutableDictionary *_credentialToProtectionSpaceMap;
    BOOL _ignoreNotifications;
}

+ (id)sharedPasswordsEditor;

- (id)protectionSpaceForCredential:(id)arg1;
- (id)addressStringForCredential:(id)arg1;
- (void)resetCredentials;
- (void)credentialsChanged:(id)arg1;
- (void)startMonitoringCredentials;
- (void)stopMonitoringCredentials;
- (void)removeSelectedItems:(id)arg1;
- (void)removeAll;
- (void)dealloc;

@end
