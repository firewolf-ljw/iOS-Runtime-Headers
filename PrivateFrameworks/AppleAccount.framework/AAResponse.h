/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSError, NSString, NSDictionary, NSHTTPURLResponse;

@interface AAResponse : NSObject  {
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
}

@property(readonly) NSString * protocolVersion;
@property(retain) NSError * error;
@property(readonly) NSDictionary * responseDictionary;


- (void)dealloc;
- (void)_parseResponse:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseDictionary;
- (id)error;
- (id)protocolVersion;
- (void)setError:(id)arg1;

@end
