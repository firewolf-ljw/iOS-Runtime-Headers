/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface CPMessageContext : NSObject  {
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
}

+ (void)initialize;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg2 parameters:(void*)arg3;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObject:(id)arg1 withWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg2;
+ (void)reportError:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (id)getWarningArray;
+ (id)getErrorArray;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;
+ (BOOL)isFileStructuredStorage;
+ (void)popCurrentObject;
+ (id)pushCurrentPlaceholder;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (void)replacePlaceholdersWithObjects;
+ (unsigned int)saveObjectStack;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (id)errorsUsingName:(id)arg1;
+ (id)warningsUsingName:(id)arg1;
+ (void)pushCurrentObject:(id)arg1;
+ (void)reportWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportWarningException:(id)arg1;

- (id)init;
- (void)dealloc;

@end
