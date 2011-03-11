/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityMigrationPolicy : NSObject  {
}


- (BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end
