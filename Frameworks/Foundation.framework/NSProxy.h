/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProxy <NSObject> {
    Class isa;
}

+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (BOOL)isProxy;
+ (Class)superclass;
+ (id)self;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (oneway void)release;
+ (id)retain;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (unsigned int)retainCount;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (id)autorelease;
+ (Class)class;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (id)_copyDescription;
+ (BOOL)isFault;
+ (id)debugDescription;

- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (BOOL)isProxy;
- (unsigned int)hash;
- (BOOL)isMemberOfClass:(Class)arg1;
- (Class)superclass;
- (id)self;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct _NSZone { }*)zone;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)performSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)description;
- (id)autorelease;
- (Class)class;
- (BOOL)respondsToSelector:(SEL)arg1;
- (long long)forward:(SEL)arg1 :(void*)arg2;
- (id)_copyDescription;
- (BOOL)isFault;
- (id)debugDescription;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
