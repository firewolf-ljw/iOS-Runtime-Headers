/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate  {
    ML3Predicate *_predicate;
}

@property(retain) ML3Predicate * predicate;

+ (id)predicateWithPredicate:(id)arg1;

- (void)setPredicate:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)predicate;

@end
