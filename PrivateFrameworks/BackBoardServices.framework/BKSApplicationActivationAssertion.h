/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject {
    NSString *_name;
    BOOL _released;
    NSString *_uniqueID;
    BKSWorkspace *_workspace;
}

@property(readonly) NSString * name;

- (id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)releaseAssertion;

@end