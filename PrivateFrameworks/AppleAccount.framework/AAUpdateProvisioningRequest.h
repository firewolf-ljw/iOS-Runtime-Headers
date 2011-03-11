/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest  {
    AAAccount *_account;
}

@property(retain) AAAccount * account;

+ (Class)responseClass;

- (void)dealloc;
- (id)urlRequest;
- (id)urlCredential;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)account;

@end
