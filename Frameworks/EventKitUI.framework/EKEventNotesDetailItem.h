/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITextView, UITableViewCell;

@interface EKEventNotesDetailItem : EKEventDetailItem  {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
}


- (void)reset;
- (id)_notesViewForWidth:(float)arg1;
- (int)numberOfSubitems;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;

@end
