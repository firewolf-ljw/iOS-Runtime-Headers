/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject  {
    int _pageCount;
    float _headerHeight;
    float _footerHeight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _paperRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _printableRect;
    NSMutableArray *_printFormatters;
    struct CGContext { } *_printContext;
}

@property(copy) NSArray * printFormatters;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } printableRect;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } paperRect;
@property float footerHeight;
@property float headerHeight;


- (void)setPrintFormatters:(id)arg1;
- (id)printFormattersForPageAtIndex:(int)arg1;
- (int)_maxFormatterPage;
- (void)setHeaderHeight:(float)arg1;
- (void)setFooterHeight:(float)arg1;
- (void)drawPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(int)arg2;
- (void)drawHeaderForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawFooterForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)printFormatters;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paperRect;
- (void)setPaperRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPrintableRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(int)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2;
- (void)_drawPage:(int)arg1;
- (void)_endPrintContext:(id)arg1 success:(BOOL)arg2;
- (void)_removePrintFormatter:(id)arg1;
- (float)headerHeight;
- (float)footerHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printableRect;
- (int)numberOfPages;
- (void)dealloc;

@end
