/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCachedImage, PLImageLoadingQueue, PLCroppedImageView, PLImageCache, PLImageSource, MLPhoto;

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate> {
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_imageSource;
    struct __CFArray { } *_imageIndexes;
    unsigned int _currentIndex;
    MLPhoto *_requestedImage;
    PLCachedImage *_nextImage;
    PLCroppedImageView *_currentImageView;
    PLCroppedImageView *_nextImageView;
    unsigned int _didLoadFirstImage : 1;
    unsigned int _slideshowTimerDidFire : 1;
    unsigned int _slideshowTimerIsScheduled : 1;
    unsigned int _paused : 1;
}


- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentBounds;
- (id)newSlideshowView;
- (void)slideshowViewWillAppear;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (void)_scheduleSlideshowTimer;
- (int)_albumImageIndexForSlideIndex:(int)arg1;
- (void)_requestNextImageSynchronously:(BOOL)arg1;
- (void)_displayFirstImage;
- (void)_didLoadImage:(id)arg1;
- (void)_transitionToNextImage;
- (void)_crossFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_slideshowTimerFired;
- (id)_nextImage;
- (void)setAlbum:(id)arg1;
- (void)slideshowViewDidDisappear;
- (void)stopSlideshow;
- (void)slideshowViewDidAppear;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forObject:(id)arg3 fromSource:(id)arg4;

@end
