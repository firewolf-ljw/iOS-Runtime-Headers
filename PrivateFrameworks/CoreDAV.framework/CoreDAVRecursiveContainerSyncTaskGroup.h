/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, <CoreDAVLocalDBTreeInfoProvider>, NSDictionary, NSMutableArray, CoreDAVRecursiveContainerSyncTaskGroup, NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetTaskDelegate, CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    BOOL _useSyncCollection;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSString *_previousPTag;
    NSString *_nextPTag;
    NSArray *_actions;
    void *_context;
    unsigned int _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    unsigned int _maxIndependentTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_outstandingTaskGroups;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_leafURLToETag;
    NSMutableArray *_childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    CoreDAVRecursiveContainerSyncTaskGroup *_parentFolderTaskGroup;
    BOOL _syncItemOrder;
    NSMutableDictionary *_folderURLToChildrenURLOrder;
}

@property <CoreDAVLocalDBTreeInfoProvider> * delegate;
@property(readonly) NSDictionary * folderURLToChildrenURLOrder;
@property CoreDAVRecursiveContainerSyncTaskGroup * parentTaskGroup;
@property(readonly) void* context;
@property(retain) NSString * previousSyncToken;
@property BOOL useSyncCollection;
@property(readonly) NSString * previousCTag;
@property(readonly) NSURL * folderURL;
@property unsigned int maxIndependentTasks;
@property unsigned int multiGetBatchSize;


- (void*)context;
- (void)dealloc;
- (id)description;
- (void)syncAway;
- (void)startTaskGroup;
- (unsigned int)multiGetBatchSize;
- (id)previousSyncToken;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 parentTaskGroup:(id)arg10;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (void)_tearDownAllUnsubmittedTasks;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (void)_childTaskGroup:(id)arg1 finishedWithError:(id)arg2;
- (unsigned int)_submitTasks;
- (void)_getFolderTags;
- (void)_getFolderInfo;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (id)_copyContainerParserMappings;
- (id)folderURLToChildrenURLOrder;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (BOOL)shouldSyncChildWithResourceType:(id)arg1;
- (id)parentTaskGroup;
- (void)setParentTaskGroup:(id)arg1;
- (void)setUseSyncCollection:(BOOL)arg1;
- (id)folderURL;
- (void)setMaxIndependentTasks:(unsigned int)arg1;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (unsigned int)maxIndependentTasks;
- (BOOL)useSyncCollection;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)cancelTasks;
- (void)_pushActions;
- (void)_getETags;
- (void)_getOrder;
- (void)_getDataPayloads;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)containerMultiGetTask:(id)arg1 parsedContents:(id)arg2 error:(id)arg3;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 error:(id)arg3;
- (void)setPreviousSyncToken:(id)arg1;
- (id)previousCTag;
- (void)setMultiGetBatchSize:(unsigned int)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;

@end
