/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController  {
    SUButtonAccessoryView *_accessoryView;
}


- (void)loadView;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)_writeAReview:(id)arg1;
- (BOOL)_canWriteReview;
- (id)_headerItem;
- (void)_reloadHeaderView;
- (id)_accessoryView;
- (void)reloadForChangedRowCount:(int)arg1;

@end
