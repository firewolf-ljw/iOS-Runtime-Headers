/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset;

@interface AVTrackReaderInspector : AVAssetTrackInspector  {
    struct OpaqueFigTrackReader { } *_trackReader;
    int _trackID;
    unsigned int _mediaType;
    AVAsset *_asset;
}


- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)trackID;
- (id)languageCode;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)mediaType;
- (id)formatDescriptions;
- (struct OpaqueFigTrackReader { }*)_trackReader;
- (long long)_longLongForProperty:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (BOOL)isSelfContained;
- (id)extendedLanguageTag;
- (float)preferredVolume;
- (float)nominalFrameRate;
- (int)naturalTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_CMTimeForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (long)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)commonMetadata;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)asset;
- (long long)totalSampleDataLength;
- (float)estimatedDataRate;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)availableMetadataFormats;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)metadataForFormat:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (id)segments;

@end
