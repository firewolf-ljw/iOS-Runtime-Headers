/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPixelBufferAdaptorInternal, AVAssetWriterInput, NSDictionary;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject  {
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput * assetWriterInput;
@property(readonly) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
+ (id)keyPathsForValuesAffectingPixelBufferPool;

- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)sourcePixelBufferAttributes;
- (id)assetWriterInput;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;

@end
