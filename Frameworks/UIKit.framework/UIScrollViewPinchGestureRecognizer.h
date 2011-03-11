/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer  {
    UIScrollView *_scrollView;
    unsigned int _hasParentScrollView : 1;
}

@property UIScrollView * scrollView;


- (id)scrollView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setScrollView:(id)arg1;
- (float)_hysteresis;

@end
