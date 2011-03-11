/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView<UITextSelectingContainer>, NSMutableArray, UIWebDragDotView;

@interface UIWebTextRangeView : UIView  {
    UIView<UITextSelectingContainer> *m_container;
    NSArray *_rects;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_topDot;
    UIWebDragDotView *_bottomDot;
    BOOL _magnifying;
}

@property(readonly) UIView<UITextSelectingContainer> * container;
@property(copy) NSArray * rects;


- (id)rectViewAtIndex:(int)arg1;
- (void)updateDragDots;
- (void)updateRectViews;
- (void)setRects:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (struct CGPoint { float x1; float x2; })startCorner;
- (struct CGPoint { float x1; float x2; })endCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (void)geometryChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(int)arg1;
- (id)container;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)rects;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)dealloc;

@end
