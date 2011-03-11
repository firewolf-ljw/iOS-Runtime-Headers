/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSURL, NSString, NSMutableData;

@interface AYFTPPut : AYOperation  {
    NSString *_username;
    NSString *_password;
    NSURL *_url;
    struct __CFWriteStream { } *_writeStream;
    NSMutableData *_writeData;
    long long _writeSize;
}

+ (id)putRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3 data:(id)arg4;

- (id)initPutRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3 data:(id)arg4;
- (void)setStreamProperties:(struct __CFWriteStream { }*)arg1;
- (void)_writeStreamEvent:(unsigned long)arg1;
- (BOOL)isRunLoopBased;
- (void)resetOperation;
- (void)endOperationWithError:(id)arg1;
- (long long)operationTotal;
- (void)finalize;
- (void)dealloc;
- (void)dispatch;
- (long long)operationProgress;

@end
