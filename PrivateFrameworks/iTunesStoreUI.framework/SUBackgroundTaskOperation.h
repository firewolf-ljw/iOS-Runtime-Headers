/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISOperation, NSString;



@interface SUBackgroundTaskOperation : ISOperation 
{
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    NSUInteger _taskIdentifier;
}

@property(readonly) ISOperation *operation;
@property(readonly) NSString *permissionIdentifier;


- (void)run;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 identifier:(id)arg2;
- (id)permissionIdentifier;
- (void)_cancelBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_takeBackgroundAssertion;
- (id)operation;

@end