/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStoreMap;

@interface NSMappedObjectStore : NSPersistentStore  {
    NSPersistentStoreMap *_theMap;
}


- (id)identifier;
- (void)save;
- (id)init;
- (void)dealloc;
- (id)dataForKey:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)saveDocumentToPath:(id)arg1;
- (id)_pathFromURI:(id)arg1;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)getNewIDForObject:(id)arg1;
- (void)_addObject:(id)arg1 objectIDMap:(id)arg2;
- (void)_removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)_updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)_setMap:(id)arg1;
- (id)_theMap;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;

@end
