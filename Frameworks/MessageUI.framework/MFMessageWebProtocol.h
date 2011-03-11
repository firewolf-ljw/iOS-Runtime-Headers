/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageWebProtocol : NSURLProtocol  {
}

+ (void)initialize;
+ (void)registerFragments:(id)arg1 forUUID:(id)arg2;
+ (void)unregisterFragmentsForUUID:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)stopLoading;
- (void)dealloc;
- (void)startLoading;

@end
