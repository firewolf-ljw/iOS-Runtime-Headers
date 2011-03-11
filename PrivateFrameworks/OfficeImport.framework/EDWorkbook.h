/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECMappingContext, OADDrawingGroup, OADTheme, EDResources, NSMutableArray, EDProcessors, ESDContainer, EDReference, NSString, EDWarnings, NSDate;

@interface EDWorkbook : OCDDocument  {
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned int mActiveSheetIndex;
    NSDate *mDateBaseDate;
    unsigned int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    OADDrawingGroup *mDrawingGroup;
    OADTheme *mTheme;
    ESDContainer *mEscherDrawingGroup;
    unsigned int mRealSheetCount;
}


- (id)init;
- (void)dealloc;
- (id)fileName;
- (id)drawingGroup;
- (unsigned int)indexOfSheet:(id)arg1;
- (unsigned int)dateBase;
- (id)processors;
- (void)setResources:(id)arg1;
- (void)setVisibleRange:(id)arg1;
- (id)dateBaseDate;
- (id)initWithFileName:(id)arg1;
- (void)setDateBase:(unsigned int)arg1;
- (id)resources;
- (id)theme;
- (void)addOtherResources:(id)arg1;
- (id)temporaryDirectory;
- (void)setTemporaryDirectory:(id)arg1;
- (id)visibleRange;
- (id)sheetAtIndex:(unsigned int)arg1;
- (id)sheetAtIndex:(unsigned int)arg1 loadIfNeeded:(bool)arg2;
- (unsigned int)indexOfSheetWithName:(id)arg1;
- (void)addSheet:(id)arg1;
- (id)activeSheet;
- (void)setActiveSheet:(id)arg1;
- (void)setMappingContext:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)trashSheetAtIndex:(unsigned int)arg1;
- (id)escherDrawingGroup;
- (void)setEscherDrawingGroup:(id)arg1;
- (unsigned int)activeSheetIndex;
- (void)setActiveSheetIndex:(unsigned int)arg1;
- (void)applyProcessors;
- (id)warnings;
- (void)reduceMemoryIfPossible;
- (id)initWithStringOptimization:(bool)arg1;
- (id)mappingContext;
- (id)workbookName;
- (unsigned int)sheetCount;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;

@end
