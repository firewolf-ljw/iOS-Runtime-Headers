/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLConnectionDelegateProxy, NSURLAuthenticationChallenge;

@interface NSURLDownloadInternal : NSObject  {
    struct _CFURLDownload { } *cfDownload;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    NSURLConnectionDelegateProxy *proxy;
    id delegate;
    BOOL downloadActive;
}


- (void)dealloc;

@end
