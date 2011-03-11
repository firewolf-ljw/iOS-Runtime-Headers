/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageTextAttachment, NSThread, MonitoredInvocation, NSURL;

@interface MessageURLProtocol : NSURLProtocol  {
    NSURL *_url;
    MessageTextAttachment *_attachment;
    MonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
}

+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)stopLoading;
- (void)dealloc;
- (void)startLoading;

@end
