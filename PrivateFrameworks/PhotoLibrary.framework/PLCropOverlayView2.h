/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayView2 : UIView  {
    float _aspectRatio;
    float _topInset;
    unsigned int _landscapeMode : 1;
}

@property float cropAspectRatio;
@property float topInset;
@property(getter=isLandscapeMode) BOOL landscapeMode;


- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTopInset:(float)arg1;
- (float)topInset;
- (void)setLandscapeMode:(BOOL)arg1;
- (void)setCropAspectRatio:(float)arg1;
- (float)cropAspectRatio;
- (BOOL)isLandscapeMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;

@end
