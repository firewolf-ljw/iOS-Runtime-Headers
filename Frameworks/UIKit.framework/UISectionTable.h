/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISectionList, NSMutableArray;

@interface UISectionTable : UITable  {
    UISectionList *_sectionList;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _visibleHeaders;
    NSMutableArray *_visibleHeaderViews;
    float _rightMargin;
    NSMutableArray *_reusableHeaderCells;
    NSMutableArray *_reusableTransparentHeaderCells;
    int _reusableHeaderCapacity;
    struct { 
        unsigned int style : 1; 
        unsigned int delegateHeaderForSection : 1; 
        unsigned int disableHideHeadersInShortLists : 1; 
        unsigned int disallowsScrollIndicators : 1; 
        unsigned int reserved : 28; 
    } _sectionTableFlags;
}


- (void)reloadData;
- (id)createPreparedCellForRow:(int)arg1 column:(int)arg2;
- (void)_updateVisibleCellsNow;
- (void)_reloadRowHeights;
- (void)scrollRowToVisible:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 sectionList:(id)arg2;
- (void)setRightMargin:(float)arg1;
- (void)setAllowsScrollIndicators:(BOOL)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 sectionList:(id)arg2;
- (id)_createHeaderCellForHeaderAtIndex:(int)arg1 width:(float)arg2 opaque:(BOOL)arg3 adjustOrigin:(BOOL)arg4;
- (void)_removeHeaderCellsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_replaceCellWithTransparentOneGapIndex:(int)arg1 viewIndex:(int)arg2 width:(float)arg3;
- (void)_replaceCellWithOpaqueOneGapIndex:(int)arg1 viewIndex:(int)arg2 width:(float)arg3;
- (BOOL)_shouldHideHeaders;
- (BOOL)showsSectionHeaders;
- (void)scrollToSection:(int)arg1;
- (void)scrollToSectionWithTitle:(id)arg1;
- (BOOL)sectionHeaderCellWasClicked:(id)arg1;
- (void)setShouldHideHeaderInShortLists:(BOOL)arg1;
- (void)setSectionListStyle:(int)arg1;
- (id)indexTitles;
- (BOOL)floatArray:(id)arg1 loadGapIndexes:(int*)arg2 gapHeight:(float*)arg3 count:(int)arg4;
- (void)floatArray:(id)arg1 getValueCount:(int*)arg2 gapIndexCount:(int*)arg3;
- (void)_updateShowScrollIndicatorsFlag;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
