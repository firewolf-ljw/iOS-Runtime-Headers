/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject  {
    NSURLProtocolInternal *_internal;
}

+ (BOOL)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(BOOL)arg3;
+ (void)unregisterClass:(Class)arg1;
+ (id)_protocolWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 allowCF:(BOOL)arg4;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (Class)_protocolClassForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)_registeredClasses;
+ (id)_canonicalRequestForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (BOOL)registerClass:(Class)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (id)request;
- (void)stopLoading;
- (void)dealloc;
- (id)client;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)cachedResponse;
- (void)_releaseProtocolClientReference;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)startLoading;

@end
