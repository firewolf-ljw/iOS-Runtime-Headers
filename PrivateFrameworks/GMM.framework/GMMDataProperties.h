/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;

@interface GMMDataProperties : PBCodable  {
    NSString *_copyright;
    int _numZoomLevels;
    BOOL _hasNumZoomLevels;
    GMMMapPoint *_latLon;
    int _imageHeight;
    int _infoLevel;
    BOOL _hasInfoLevel;
    int _infoValue;
    BOOL _hasInfoValue;
    int _tileWidth;
    BOOL _hasTileWidth;
    int _imageWidth;
    BOOL _disabled;
    BOOL _hasDisabled;
    int _tileHeight;
    BOOL _hasTileHeight;
    NSString *_panoId;
    NSString *_text;
    NSString *_streetRange;
    int _maxZoomLevel;
    int _radius;
    int _imageSource;
    BOOL _hasImageSource;
    int _scene;
    BOOL _hasScene;
}

@property(readonly) BOOL hasCopyright;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasStreetRange;
@property(readonly) BOOL hasScene;
@property int scene;
@property(readonly) BOOL hasImageSource;
@property int imageSource;
@property int radius;
@property int maxZoomLevel;
@property(retain) NSString * streetRange;
@property(retain) NSString * text;
@property(retain) NSString * panoId;
@property(readonly) BOOL hasTileHeight;
@property int tileHeight;
@property(readonly) BOOL hasDisabled;
@property BOOL disabled;
@property int imageWidth;
@property(readonly) BOOL hasTileWidth;
@property int tileWidth;
@property(readonly) BOOL hasInfoValue;
@property int infoValue;
@property(readonly) BOOL hasInfoLevel;
@property int infoLevel;
@property int imageHeight;
@property(retain) GMMMapPoint * latLon;
@property(readonly) BOOL hasNumZoomLevels;
@property int numZoomLevels;
@property(retain) NSString * copyright;


- (void)setDisabled:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (BOOL)disabled;
- (BOOL)hasText;
- (void)setText:(id)arg1;
- (id)text;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasInfoLevel;
- (BOOL)hasImageSource;
- (BOOL)hasScene;
- (BOOL)hasCopyright;
- (void)setNumZoomLevels:(int)arg1;
- (void)setInfoLevel:(int)arg1;
- (void)setInfoValue:(int)arg1;
- (void)setTileWidth:(int)arg1;
- (void)setTileHeight:(int)arg1;
- (void)setImageSource:(int)arg1;
- (void)setScene:(int)arg1;
- (int)scene;
- (void)setStreetRange:(id)arg1;
- (BOOL)hasTileHeight;
- (BOOL)hasTileWidth;
- (BOOL)hasNumZoomLevels;
- (int)imageSource;
- (BOOL)readFrom:(id)arg1;
- (int)radius;
- (void)setRadius:(int)arg1;
- (void)writeTo:(id)arg1;
- (int)numZoomLevels;
- (id)latLon;
- (id)panoId;
- (id)streetRange;
- (int)tileWidth;
- (int)tileHeight;
- (int)infoLevel;
- (BOOL)hasDisabled;
- (BOOL)hasInfoValue;
- (int)infoValue;
- (BOOL)hasStreetRange;
- (void)setPanoId:(id)arg1;
- (void)setLatLon:(id)arg1;
- (void)setMaxZoomLevel:(int)arg1;
- (int)maxZoomLevel;
- (int)imageWidth;
- (void)setImageWidth:(int)arg1;
- (int)imageHeight;
- (void)setImageHeight:(int)arg1;
- (void)setCopyright:(id)arg1;
- (id)copyright;

@end
