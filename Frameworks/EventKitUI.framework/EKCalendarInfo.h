/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIColor, EKCalendar, EKGroupInfo, NSString;

@interface EKCalendarInfo : NSObject  {
    EKCalendar *_calendar;
    UIColor *_color;
    BOOL _selected;
    EKGroupInfo *_group;
}

@property(retain) EKCalendar * calendar;
@property(copy,readonly) NSString * title;
@property(readonly) int displayOrder;
@property(readonly) BOOL isSubscribed;
@property EKGroupInfo * group;
@property BOOL selected;
@property(retain) UIColor * color;


- (BOOL)selected;
- (void)setCalendar:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)calendar;
- (void)setColor:(id)arg1;
- (id)color;
- (id)group;
- (id)title;
- (void)dealloc;
- (void)setGroup:(id)arg1;
- (id)initWithCalendar:(id)arg1;
- (int)displayOrder;
- (BOOL)isSubscribed;

@end
