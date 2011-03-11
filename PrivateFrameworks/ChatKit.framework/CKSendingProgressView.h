/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKProgressBar, UILabel;

@interface CKSendingProgressView : UIView  {
    CKProgressBar *_sendingProgress;
    UILabel *_statusLabel;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (void)_initializeSafeCategory;

- (void)setStatus:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProgressValue:(float)arg1;
- (float)progressValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
