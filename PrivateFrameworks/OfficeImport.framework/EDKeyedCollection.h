/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection  {
    TSUPointerKeyDictionary *mMap;
}


- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)addObject:(id)arg1;
- (id)objectWithKey:(int)arg1;
- (bool)isObjectInMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (bool)isOverwritingKeyOK;

@end
