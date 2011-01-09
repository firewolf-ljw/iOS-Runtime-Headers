/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSEditingPane;



@interface PSDetailController : PSViewController 
{
    PSEditingPane *_pane;
}

@property PSEditingPane *pane;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paneFrame;
- (id)pane;
- (void)setPane:(id)arg1;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (void)suspend;
- (void)dealloc;
- (void)saveChanges;
- (void)statusBarWillAnimateByHeight:(float)arg1;

@end