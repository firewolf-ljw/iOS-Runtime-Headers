/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIPrintFormatter, PKPrinter, <UIPrintInteractionControllerDelegate>, UIPrintPageRenderer, UIPrintInfo, UIPrintPaper, NSArray;

@interface UIPrintInteractionController : NSObject  {
    UIPrintInfo *_printInfo;
    <UIPrintInteractionControllerDelegate> *_delegate;
    BOOL _showsPageRange;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintFormatter *_printFormatter;
    id _printingItem;
    NSArray *_printingItems;
    UIPrintPaper *_printPaper;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    unsigned int _backgroundTaskIdentifier;
    id _printState;
}

@property(readonly) int pageCount;
@property struct _NSRange { unsigned int location; unsigned int length; } pageRange;
@property(retain) PKPrinter * printer;
@property(copy) NSArray * printingItems;
@property(copy) id printingItem;
@property(retain) UIPrintFormatter * printFormatter;
@property(retain) UIPrintPageRenderer * printPageRenderer;
@property(readonly) UIPrintPaper * printPaper;
@property BOOL showsPageRange;
@property <UIPrintInteractionControllerDelegate> * delegate;
@property(retain) UIPrintInfo * printInfo;

+ (BOOL)isPrintingAvailable;
+ (id)printableUTIs;
+ (BOOL)canPrintURL:(id)arg1;
+ (BOOL)canPrintData:(id)arg1;
+ (id)sharedPrintController;

- (void)setPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)printInfo;
- (BOOL)showsPageRange;
- (id)printFormatter;
- (void)setPrintingItem:(id)arg1;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_cleanPrintState;
- (void)_updatePageCount;
- (BOOL)_setupPrintPanel:(id)arg1;
- (void)_setPrintInfoState:(int)arg1;
- (void)_preparePrintInfo;
- (void)_updatePrintPaper;
- (void)_startPrinting;
- (void)_printPage;
- (id)_printItem:(id)arg1;
- (id)_printPageRenderer:(id)arg1;
- (void)_endPrintJob:(BOOL)arg1 error:(id)arg2;
- (id)printingItems;
- (void)setPrintingItems:(id)arg1;
- (id)printingItem;
- (void)setPrintFormatter:(id)arg1;
- (id)printPageRenderer;
- (void)setPrintPageRenderer:(id)arg1;
- (id)printPaper;
- (void)setShowsPageRange:(BOOL)arg1;
- (void)setPrintInfo:(id)arg1;
- (id)printer;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRange;
- (void)setPrinter:(id)arg1;
- (id)_currentPrintInfo;
- (void)_printPanelDidPresent;
- (void)_printPanelWillDismiss:(BOOL)arg1;
- (void)_printPanelDidDismiss;
- (BOOL)_canShowDuplex;
- (BOOL)_canShowPageRange;
- (int)pageCount;
- (void)release;
- (id)init;
- (void)dealloc;
- (id)_init;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
