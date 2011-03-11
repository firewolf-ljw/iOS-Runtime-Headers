/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPopoverController, <UIPrintStatusDelegate>;

@interface UIPrintStatusViewController : UINavigationController  {
    UIPopoverController *_poverController;
    <UIPrintStatusDelegate> *_printStatusDelegate;
}

@property <UIPrintStatusDelegate> * printStatusDelegate;


- (void)dismissAnimated:(BOOL)arg1;
- (void)jobDidCancel;
- (id)printStatusView;
- (void)presentPrintStatusFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)printStatusDelegate;
- (void)setPrintStatusDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;

@end
