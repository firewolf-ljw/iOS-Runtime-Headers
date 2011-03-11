/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    int refCount;
    id realObject;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)forwardInvocation:(id)arg1;
- (BOOL)isProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)release;
- (id)copy;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (void)reallyDealloc;

@end
