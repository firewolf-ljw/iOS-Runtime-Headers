/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreManagedObjectID : NSManagedObjectID  {
}

+ (int)version;
+ (void)initialize;
+ (void)release;
+ (id)retain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_release_1;
+ (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)_storeInfo1;
+ (char *)generatedNameSuffix;

- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)_storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (id)URIRepresentation;
- (id)_storeInfo1;
- (id)entity;
- (BOOL)isTemporaryID;
- (id)persistentStore;

@end
