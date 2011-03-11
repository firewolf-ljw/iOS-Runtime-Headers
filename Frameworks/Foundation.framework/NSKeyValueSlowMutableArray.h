/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray  {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyArrays;
    BOOL _padding[3];
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)addObject:(id)arg1;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;

@end
