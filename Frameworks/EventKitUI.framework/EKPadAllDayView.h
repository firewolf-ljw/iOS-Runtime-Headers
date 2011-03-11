/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarModel, <EKPadAllDayViewDelegate>, <EKPadAllDayViewDataSource>, NSArray, NSMutableArray, EKPadAllDayViewContents, UIScrollView, EKDayOccurrenceView;

@interface EKPadAllDayView : UIView <EKPadAllDayViewContentsDelegate, UIScrollViewDelegate> {
    CalendarModel *_model;
    unsigned int _selectedEventIndex;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _displayedDate;
    unsigned int _daysToDisplay;
    double _startDate;
    double _endDate;
    float _verticalTopMargin;
    float _minimumHeight;
    float _occurrenceHRightInset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentFrame;
    EKPadAllDayViewContents *_contentView;
    UIScrollView *_scroller;
    int _outlineStyle;
    EKDayOccurrenceView *_selectedOccurrenceView;
    NSMutableArray *_layedOutRows;
    NSMutableArray *_dayNames;
    NSMutableArray *_dayDates;
    unsigned int _drawsLeftBorder : 1;
    unsigned int _drawsAllBorders : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _scrollbarShowsInside : 1;
    unsigned int _scrollingToOccurrence : 1;
    unsigned int _dimsNonSelectedItems : 1;
    <EKPadAllDayViewDelegate> *_delegate;
    <EKPadAllDayViewDataSource> *_dataSource;
    int _shouldAbbriviateDayNames;
}

@property(readonly) NSArray * occurrenceViews;
@property BOOL dimsNonSelectedItems;
@property <EKPadAllDayViewDelegate> * delegate;
@property <EKPadAllDayViewDataSource> * dataSource;

+ (void)_initializeSafeCategory;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (float)bottomInset;
- (id)makeAllDayLabel;
- (void)buildDayLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 numberOfDaysToDisplay:(unsigned int)arg2 opaque:(BOOL)arg3 backgroundColor:(id)arg4 scrollbarShowsInside:(BOOL)arg5;
- (void)setOccurrenceHRightInset:(float)arg1;
- (void)scrollToEventIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)scrollToOccurrence:(id)arg1 animating:(BOOL)arg2;
- (void)selectItemWithEventIndex:(unsigned int)arg1;
- (id)occurrenceViews;
- (void)_significantTimeChanged;
- (void)updateDayLabels;
- (void)setDisplayedDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })displayDate;
- (void)setDrawsLeftBorder:(BOOL)arg1;
- (id)selectedOccurrenceView;
- (id)occurrenceViewForOccurrence:(id)arg1;
- (id)getSortedBlocksFromOccurrenceBlocks:(id)arg1;
- (unsigned int)selectedEventIndex;
- (BOOL)dimsNonSelectedItems;
- (unsigned int)_calendarOrderForCalendar:(id)arg1;
- (float)_scrollbarOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOccurrenceBlock:(id)arg1 index:(unsigned int)arg2;
- (BOOL)_shouldAbbreviateDateTextLabels;
- (void)_updateDayLabels;
- (id)_calendarOrderSortDescriptor;
- (id)_numberOfDaysSortDescriptor;
- (void)dayOccurrenceViewStartTouch:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)emptySpaceClickForCalendarWeekDayEventContent:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)occurrenceVisibleRect:(id)arg1;
- (id)viewForEventIndex:(unsigned int)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (unsigned int)eventIndexForView:(id)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEventIndex:(unsigned int)arg2;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dayOccurrenceViewDragExited:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_localeChanged;
- (void)setOutlineStyle:(int)arg1;
- (void)setMinimumHeight:(float)arg1;

@end
