/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLPrintPageRenderer  {
    UIWebPaginationInfo *_paginationInfo;
}


- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)numberOfPages;
- (void)dealloc;
- (id)_paginationInfo;

@end
