/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell;

@interface EKEventStatusDetailItem : EKEventDetailItem  {
    UITableViewCell *_cell;
    BOOL _indent;
}


- (void)reset;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;

@end
