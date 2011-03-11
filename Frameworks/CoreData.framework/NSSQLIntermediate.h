/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLIntermediate;

@interface NSSQLIntermediate : NSObject  {
    NSSQLIntermediate *_scope;
}

+ (BOOL)expressionIsBasicKeypath:(id)arg1;
+ (BOOL)isSimpleKeypath:(id)arg1;

- (id)scope;
- (id)fetchIntermediate;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_lastScopedItem;
- (BOOL)isSelectTargetScoped;
- (BOOL)isOrScoped;
- (id)initWithScope:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (void)_promoteJoinsForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForFunctionExpression:(id)arg1;
- (void)_promoteJoinsForAggregateExpression:(id)arg1;
- (void)_promoteJoinsForTernaryExpression:(id)arg1;
- (void)promoteJoinsInKeypathsForExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (BOOL)expressionIsBasicKeypath:(id)arg1;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (BOOL)isHavingScoped;
- (BOOL)isFunctionScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingAlias;
- (BOOL)isSimpleKeypath:(id)arg1;
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1;

@end
