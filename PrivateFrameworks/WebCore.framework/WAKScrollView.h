/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class WAKView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKView *_documentView;
    id _delegate;
}

+ (void)_initializeSafeCategory;

- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)setDocumentView:(id)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)scrollWheel:(id)arg1;
- (id)documentView;
- (void)dealloc;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasHorizontalScroller;
- (void)setLineScroll:(float)arg1;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(id)arg1;
- (void)setHorizontalScrollingMode:(int)arg1;
- (void)setVerticalScrollingMode:(int)arg1;
- (void)setScrollingMode:(int)arg1;
- (int)horizontalScrollingMode;
- (int)verticalScrollingMode;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
- (void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualDocumentVisibleRect;
- (void)setActualScrollPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityObject;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityContainer;
- (BOOL)isAccessibilityElement;

@end
