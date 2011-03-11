/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADAdDefaultsOverrides : PBCodable  {
    BOOL _downloadWebArchivesBeforeShowingBanner;
    BOOL _hasDownloadWebArchivesBeforeShowingBanner;
    float _bannerVisibilityTestInterval;
    BOOL _hasBannerVisibilityTestInterval;
    float _bannerImpressionThreshold;
    BOOL _hasBannerImpressionThreshold;
    float _bannerNewContentCandidacyThreshold;
    BOOL _hasBannerNewContentCandidacyThreshold;
    float _locationGridSpacing;
    BOOL _hasLocationGridSpacing;
    float _adSheetDisassociationTimeout;
    BOOL _hasAdSheetDisassociationTimeout;
    float _serverRetryMaximumBackoff;
    BOOL _hasServerRetryMaximumBackoff;
    float _serverRetryBackoffIntervalBase;
    BOOL _hasServerRetryBackoffIntervalBase;
    float _serverRetryBackoffIntervalGain;
    BOOL _hasServerRetryBackoffIntervalGain;
    unsigned int _primaryResourceCacheMemorySize;
    BOOL _hasPrimaryResourceCacheMemorySize;
    unsigned int _primaryResourceCacheDiskSize;
    BOOL _hasPrimaryResourceCacheDiskSize;
    unsigned int _primaryResourceCacheNodeMaxSize;
    BOOL _hasPrimaryResourceCacheNodeMaxSize;
}

@property(readonly) BOOL hasPrimaryResourceCacheNodeMaxSize;
@property unsigned int primaryResourceCacheNodeMaxSize;
@property(readonly) BOOL hasPrimaryResourceCacheDiskSize;
@property unsigned int primaryResourceCacheDiskSize;
@property(readonly) BOOL hasPrimaryResourceCacheMemorySize;
@property unsigned int primaryResourceCacheMemorySize;
@property(readonly) BOOL hasServerRetryBackoffIntervalGain;
@property float serverRetryBackoffIntervalGain;
@property(readonly) BOOL hasServerRetryBackoffIntervalBase;
@property float serverRetryBackoffIntervalBase;
@property(readonly) BOOL hasServerRetryMaximumBackoff;
@property float serverRetryMaximumBackoff;
@property(readonly) BOOL hasAdSheetDisassociationTimeout;
@property float adSheetDisassociationTimeout;
@property(readonly) BOOL hasLocationGridSpacing;
@property float locationGridSpacing;
@property(readonly) BOOL hasBannerNewContentCandidacyThreshold;
@property float bannerNewContentCandidacyThreshold;
@property(readonly) BOOL hasBannerImpressionThreshold;
@property float bannerImpressionThreshold;
@property(readonly) BOOL hasBannerVisibilityTestInterval;
@property float bannerVisibilityTestInterval;
@property(readonly) BOOL hasDownloadWebArchivesBeforeShowingBanner;
@property BOOL downloadWebArchivesBeforeShowingBanner;


- (BOOL)hasLocationGridSpacing;
- (BOOL)hasServerRetryBackoffIntervalGain;
- (BOOL)hasPrimaryResourceCacheMemorySize;
- (void)setDownloadWebArchivesBeforeShowingBanner:(BOOL)arg1;
- (void)setBannerVisibilityTestInterval:(float)arg1;
- (void)setBannerImpressionThreshold:(float)arg1;
- (void)setBannerNewContentCandidacyThreshold:(float)arg1;
- (void)setLocationGridSpacing:(float)arg1;
- (void)setAdSheetDisassociationTimeout:(float)arg1;
- (void)setServerRetryMaximumBackoff:(float)arg1;
- (void)setServerRetryBackoffIntervalBase:(float)arg1;
- (void)setServerRetryBackoffIntervalGain:(float)arg1;
- (void)setPrimaryResourceCacheMemorySize:(unsigned int)arg1;
- (void)setPrimaryResourceCacheDiskSize:(unsigned int)arg1;
- (void)setPrimaryResourceCacheNodeMaxSize:(unsigned int)arg1;
- (BOOL)hasPrimaryResourceCacheNodeMaxSize;
- (unsigned int)primaryResourceCacheNodeMaxSize;
- (BOOL)hasPrimaryResourceCacheDiskSize;
- (BOOL)hasServerRetryBackoffIntervalBase;
- (BOOL)hasServerRetryMaximumBackoff;
- (BOOL)hasAdSheetDisassociationTimeout;
- (BOOL)hasBannerNewContentCandidacyThreshold;
- (BOOL)hasBannerImpressionThreshold;
- (BOOL)hasBannerVisibilityTestInterval;
- (BOOL)hasDownloadWebArchivesBeforeShowingBanner;
- (unsigned int)primaryResourceCacheDiskSize;
- (unsigned int)primaryResourceCacheMemorySize;
- (float)serverRetryBackoffIntervalGain;
- (float)serverRetryBackoffIntervalBase;
- (float)serverRetryMaximumBackoff;
- (float)adSheetDisassociationTimeout;
- (float)locationGridSpacing;
- (float)bannerNewContentCandidacyThreshold;
- (float)bannerImpressionThreshold;
- (float)bannerVisibilityTestInterval;
- (BOOL)downloadWebArchivesBeforeShowingBanner;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
