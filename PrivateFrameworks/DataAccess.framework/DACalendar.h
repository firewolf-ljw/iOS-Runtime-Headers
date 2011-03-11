/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString, DACalendarStore;

@interface DACalendar : DACalendarObject  {
}

@property(readonly) int uid;
@property(readonly) NSString * externalID;
@property(readonly) DACalendarStore * store;
@property(retain) NSString * title;
@property(retain) NSString * color;
@property(readonly) NSArray * events;


- (void)addEvent:(id)arg1;
- (id)externalID;
- (void)removeAllEvents;
- (void)remove;
- (int)uid;
- (void)setColor:(id)arg1;
- (id)color;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)events;
- (id)store;

@end
