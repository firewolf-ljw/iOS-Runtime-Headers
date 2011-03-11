/* Generated by RuntimeBrowser.
   Image: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
 */

@interface PLCameraViewAccessibility_super : UIAccessibilitySafeCategory  {
}

+ (void)_initializeSafeCategory;

- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)openIrisWithDidFinishSelector:(SEL)arg1 withDuration:(float)arg2;
- (void)hideStaticClosedIris;
- (void)showStaticClosedIris;
- (void)showZoomSlider;
- (BOOL)zoomSliderShouldBeVisible;
- (BOOL)_zoomSliderIsAllowedVisible;
- (void)_updateOverlayControls;
- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;

@end
