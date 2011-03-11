/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintingMessageView, NSArray;

@interface UIPrintStatusJobsViewController : UITableViewController  {
    NSArray *_jobs;
    BOOL _autoPush;
    UIPrintingMessageView *_noJobsView;
}


- (void)pushJob:(id)arg1 animated:(BOOL)arg2;
- (void)pushSingleJobAnimated:(BOOL)arg1;
- (void)updateForJobCountChange;
- (id)visibleJobs;
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;
- (void)updateJobInfoAnimated:(BOOL)arg1;
- (void)loadView;
- (void)updateJobInfo;
- (void)willReappear;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
