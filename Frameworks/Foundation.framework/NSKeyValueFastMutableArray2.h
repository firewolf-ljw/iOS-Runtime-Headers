/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray  {
    NSKeyValueGetter *_valueGetter;
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (id)objectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)count;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)objectsAtIndexes:(id)arg1;

@end
