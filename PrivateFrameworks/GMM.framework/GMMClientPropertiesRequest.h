/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSMutableArray;

@interface GMMClientPropertiesRequest : PBRequest  {
    NSString *_cohort;
    BOOL _has_location_fix;
    BOOL _hasHas_location_fix;
    int _mobile_country_code;
    BOOL _hasMobile_country_code;
    BOOL _gzip_enabled;
    BOOL _hasGzip_enabled;
    NSString *_application_name;
    NSString *_gaia_auth_token;
    BOOL _voice_search_enabled;
    BOOL _hasVoice_search_enabled;
    int _screen_pixel_density;
    BOOL _hasScreen_pixel_density;
    NSMutableArray *_experiment_ids;
    int _map_tile_cache_type;
    BOOL _hasMap_tile_cache_type;
}

@property(readonly) BOOL hasCohort;
@property(readonly) BOOL hasApplication_name;
@property(readonly) BOOL hasGaia_auth_token;
@property(readonly) int experiment_idsCount;
@property(readonly) BOOL hasMap_tile_cache_type;
@property int map_tile_cache_type;
@property(retain) NSMutableArray * experiment_ids;
@property(readonly) BOOL hasScreen_pixel_density;
@property int screen_pixel_density;
@property(readonly) BOOL hasVoice_search_enabled;
@property BOOL voice_search_enabled;
@property(retain) NSString * gaia_auth_token;
@property(retain) NSString * application_name;
@property(readonly) BOOL hasGzip_enabled;
@property BOOL gzip_enabled;
@property(readonly) BOOL hasMobile_country_code;
@property int mobile_country_code;
@property(readonly) BOOL hasHas_location_fix;
@property BOOL has_location_fix;
@property(retain) NSString * cohort;


- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)application_name;
- (BOOL)voice_search_enabled;
- (BOOL)hasMap_tile_cache_type;
- (BOOL)hasApplication_name;
- (BOOL)hasCohort;
- (void)setHas_location_fix:(BOOL)arg1;
- (void)setMobile_country_code:(int)arg1;
- (void)setGzip_enabled:(BOOL)arg1;
- (BOOL)hasGaia_auth_token;
- (void)setVoice_search_enabled:(BOOL)arg1;
- (int)experiment_idsCount;
- (void)setExperiment_id:(int)arg1 atIndex:(unsigned int)arg2;
- (int)experiment_idAtIndex:(unsigned int)arg1;
- (void)addExperiment_id:(int)arg1;
- (int)map_tile_cache_type;
- (id)experiment_ids;
- (void)setExperiment_ids:(id)arg1;
- (BOOL)hasScreen_pixel_density;
- (int)screen_pixel_density;
- (BOOL)hasVoice_search_enabled;
- (id)gaia_auth_token;
- (void)setGaia_auth_token:(id)arg1;
- (void)setApplication_name:(id)arg1;
- (BOOL)hasGzip_enabled;
- (BOOL)gzip_enabled;
- (BOOL)hasMobile_country_code;
- (int)mobile_country_code;
- (BOOL)hasHas_location_fix;
- (BOOL)has_location_fix;
- (id)cohort;
- (void)setCohort:(id)arg1;
- (void)setScreen_pixel_density:(int)arg1;
- (void)setMap_tile_cache_type:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
