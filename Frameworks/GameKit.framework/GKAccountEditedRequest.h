/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKAccountEditedRequest : GKDataRequest  {
    NSString *_alias;
    NSString *_accountName;
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain) NSString * lastName;
@property(retain) NSString * firstName;
@property(retain) NSString * accountName;
@property(retain) NSString * alias;


- (id)firstName;
- (void)setAlias:(id)arg1;
- (id)lastName;
- (id)alias;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)key;
- (id)request;
- (void)dealloc;
- (void)setAccountName:(id)arg1;
- (id)accountName;

@end
