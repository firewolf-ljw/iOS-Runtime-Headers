/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPImageModifier : NSObject  {
}

@property(readonly) NSString * imageCacheUniqueKey;
@property(readonly) BOOL fastEnoughToApplySynchronously;


- (id)imageCacheUniqueKey;
- (struct CGSize { float x1; float x2; })contentSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForContentSize:(struct CGSize { float x1; float x2; })arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)drawImageBackgroundWithContext:(struct CGContext { }*)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 contentSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)drawImageForegroundWithContext:(struct CGContext { }*)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 contentSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)shouldModifyImageWithContentSize:(struct CGSize { float x1; float x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)fastEnoughToApplySynchronously;

@end
