/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSource, NSString, NSArray, NSSet, NSMutableArray;

@interface EKGroupInfo : NSObject  {
    EKSource *_source;
    NSMutableArray *_calendars;
    BOOL _selected;
}

@property(retain) EKSource * source;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * typeTitle;
@property(retain,readonly) NSArray * calendarInfos;
@property(copy,readonly) NSSet * calendarSet;
@property(copy,readonly) NSSet * selectedCalendarSet;
@property(readonly) int numCalendars;
@property(readonly) int numSelectedCalendars;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property(readonly) int sortOrder;
@property(readonly) BOOL isSubscribed;
@property BOOL selected;


- (BOOL)selected;
- (id)source;
- (void)setSource:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)selectAll;
- (id)title;
- (id)init;
- (void)dealloc;
- (void)removeCalendar:(id)arg1;
- (int)sortOrder;
- (BOOL)showCalendarNameIfSolitary;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;
- (id)calendarInfos;
- (int)numCalendars;
- (int)numSelectedCalendars;
- (id)calendarAtIndex:(int)arg1;
- (id)copyCalendars;
- (id)calendarSet;
- (id)selectedCalendarSet;
- (void)selectNone;
- (BOOL)isSubscribed;

@end
