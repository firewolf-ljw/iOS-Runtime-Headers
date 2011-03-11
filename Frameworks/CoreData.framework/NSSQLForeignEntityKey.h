/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn  {
    NSSQLForeignKey *_foreignKey;
}


- (void)dealloc;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (void)setFKForReadOnlyFetch:(id)arg1;
- (id)toOneRelationship;
- (id)foreignKey;

@end
