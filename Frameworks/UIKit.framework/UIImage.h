/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImage : NSObject  {
    void *_imageRef;
    float _scale;
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int stretchable : 1; 
        unsigned int hasBeenCached : 1; 
        unsigned int hasPattern : 1; 
    } _imageFlags;
}

@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } mediaImageSubRect;
@property double mediaImageTime;
@property(readonly) struct CGSize { float width; float height; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) int imageOrientation;
@property(readonly) float scale;
@property(readonly) int leftCapWidth;
@property(readonly) int topCapHeight;

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(float*)arg2;
+ (id)kitImageNamed:(id)arg1;
+ (void)initialize;
+ (id)imageNamed:(id)arg1;
+ (id)_defaultBackgroundGradient;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)applicationImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(BOOL)arg5;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (void)setPreferredSharedImageScale:(float)arg1;
+ (id)imageAtPath:(id)arg1;
+ (void)removeImageNameFromCache:(id)arg1;
+ (void)_flushCacheOnMemoryWarning:(id)arg1;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 roleIdentifier:(id)arg2 format:(int)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 roleIdentifier:(id)arg2 format:(int)arg3 scale:(float)arg4;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(float)arg3;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (void)_flushSharedImageCache;
+ (void)_initializeSafeCategory;
+ (id)abImageNamed:(id)arg1;
+ (id)sharedImageNamed:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 drawUsingBlock:(id)arg3;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (struct CGImage { }*)missingMapTileImage;
+ (id)imageFromAlbumArtData:(id)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2 cache:(BOOL)arg3;
+ (void)_gkPurgeRemoteImageCache;
+ (void)_gkloadRemoteImageForURL:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)_balloonMask:(BOOL)arg1;
+ (id)_highlightImage;
+ (id)_imageWithColor:(BOOL)arg1;
+ (id)_balloonImage:(BOOL)arg1 color:(BOOL)arg2;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckImageNamed:(id)arg1;
+ (id)reversedNikeRunLandscapeBackgroundImage;
+ (id)nikeBackgroundImage;
+ (id)nikeRunLandscapeBackgroundImage;
+ (id)_adlib_imageNamed:(id)arg1;

- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2 fraction:(float)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)imageRef;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithImageRef:(struct CGImage { }*)arg1;
- (id)patternColor;
- (id)_flatImageWithWhite:(float)arg1 alpha:(float)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)_setNamed:(BOOL)arg1;
- (id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2;
- (BOOL)_isStretchable;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct __IOSurface { }*)ioSurface;
- (int)leftCapWidth;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretch;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)_automationID;
- (int)topCapHeight;
- (int)imageOrientation;
- (struct CGSize { float x1; float x2; })size;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGImage { }*)CGImage;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(int)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(int)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
- (BOOL)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2;
- (struct CGColor { }*)_patternColor;
- (void)_setCached:(BOOL)arg1;
- (BOOL)_isCached;
- (BOOL)_hasBeenCached;
- (BOOL)_isNamed;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2 scale:(float)arg3;
- (float)scale;
- (void)setCacheNameKey:(id)arg1;
- (id)cacheNameKey;
- (void)setCacheSizeKey:(id)arg1;
- (id)cacheSizeKey;
- (void)removeFromCache;
- (void)abpis_swizzleClass;
- (id)_mapkit_createImagesOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_createCGImagesFromHorizontalSequenceOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_createCGImagesFromVerticalSequenceOfSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectFromBitmapRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bitmapRectFromImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCoverflowPlaceholder;
- (void)setMediaImageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaImageSubRect;
- (double)mediaImageTime;
- (void)setMediaImageTime:(double)arg1;
- (id)newImageWithOrientation:(int)arg1;
- (id)newImageRotatedByDegrees:(float)arg1;
- (void*)PL_imageContents;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 usingSliceEdges:(int)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 operation:(int)arg4 fraction:(float)arg5;
- (id)GKScaleToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_gkDrawTiledInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newBalloonImageWithTail:(BOOL)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)newImageWithOrientation:(int)arg1;
- (id)newImageRotatedByDegrees:(float)arg1;
- (void*)PL_imageContents;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (id)newColoredImageWithColor:(id)arg1;

@end
