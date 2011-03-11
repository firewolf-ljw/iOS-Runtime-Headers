/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSData, NSDictionary, NSURL;

@interface SSURLConnectionResponse : NSObject  {
    NSDictionary *_allHeaderFields;
    NSData *_body;
    long long _expectedContentLength;
    NSString *_mimeType;
    int _statusCode;
    NSString *_suggestedFilename;
    NSString *_textEncodingName;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * textEncodingName;
@property(readonly) NSString * suggestedFilename;
@property(readonly) NSString * MIMEType;
@property(readonly) long long expectedContentLength;
@property(readonly) NSData * bodyData;


- (id)bodyData;
- (int)statusCode;
- (id)MIMEType;
- (id)URL;
- (void)dealloc;
- (long long)expectedContentLength;
- (id)suggestedFilename;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)textEncodingName;
- (id)allHeaderFields;

@end
