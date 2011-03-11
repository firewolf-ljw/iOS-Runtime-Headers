/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, GMMKmlInfo, GMMStructuredAddress, GMMAdInfo, NSMutableArray, NSString, GMMRating;

@interface GMMSearchResult : PBCodable  {
    int _type;
    NSString *_name;
    GMMGeometry *_geometry;
    NSMutableArray *_addressLines;
    NSString *_phone;
    NSMutableArray *_enhancedContents;
    NSMutableArray *_references;
    BOOL _showIcon;
    BOOL _hasShowIcon;
    NSString *_attributionText;
    NSString *_attributionUrl;
    GMMKmlInfo *_kmlInfo;
    NSMutableArray *_images;
    GMMStructuredAddress *_structuredAddress;
    NSString *_mapsUrl;
    GMMAdInfo *_adInfo;
    NSString *_queryRefinementString;
    GMMRating *_rating;
    unsigned long long _cid;
    BOOL _hasCid;
    int _locationSource;
    BOOL _hasLocationSource;
    BOOL _inexactPosition;
    BOOL _hasInexactPosition;
    NSString *_streetViewPanoId;
    BOOL _unverifiedListing;
    BOOL _hasUnverifiedListing;
    BOOL _sesameEditable;
    BOOL _hasSesameEditable;
    BOOL _sesameDetailsEditable;
    BOOL _hasSesameDetailsEditable;
    NSString *_sesameFeatureId;
    NSString *_directionsPlacemarkToken;
    BOOL _closedListing;
    BOOL _hasClosedListing;
}

@property(readonly) BOOL hasName;
@property(readonly) BOOL hasGeometry;
@property(readonly) int addressLinesCount;
@property(readonly) BOOL hasPhone;
@property(readonly) int enhancedContentsCount;
@property(readonly) int referencesCount;
@property(readonly) BOOL hasAttributionText;
@property(readonly) BOOL hasAttributionUrl;
@property(readonly) BOOL hasKmlInfo;
@property(readonly) int imagesCount;
@property(readonly) BOOL hasStructuredAddress;
@property(readonly) BOOL hasMapsUrl;
@property(readonly) BOOL hasAdInfo;
@property(readonly) BOOL hasQueryRefinementString;
@property(readonly) BOOL hasRating;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) BOOL hasSesameFeatureId;
@property(readonly) BOOL hasDirectionsPlacemarkToken;
@property(readonly) BOOL hasClosedListing;
@property BOOL closedListing;
@property(retain) NSString * directionsPlacemarkToken;
@property(retain) NSString * sesameFeatureId;
@property(readonly) BOOL hasSesameDetailsEditable;
@property BOOL sesameDetailsEditable;
@property(readonly) BOOL hasSesameEditable;
@property BOOL sesameEditable;
@property(readonly) BOOL hasUnverifiedListing;
@property BOOL unverifiedListing;
@property(retain) NSString * streetViewPanoId;
@property(readonly) BOOL hasInexactPosition;
@property BOOL inexactPosition;
@property(readonly) BOOL hasLocationSource;
@property int locationSource;
@property(readonly) BOOL hasCid;
@property unsigned long long cid;
@property(retain) GMMRating * rating;
@property(retain) NSString * queryRefinementString;
@property(retain) GMMAdInfo * adInfo;
@property(retain) NSString * mapsUrl;
@property(retain) GMMStructuredAddress * structuredAddress;
@property(retain) NSMutableArray * images;
@property(retain) GMMKmlInfo * kmlInfo;
@property(retain) NSString * attributionUrl;
@property(retain) NSString * attributionText;
@property(readonly) BOOL hasShowIcon;
@property BOOL showIcon;
@property(retain) NSMutableArray * references;
@property(retain) NSMutableArray * enhancedContents;
@property(retain) NSString * phone;
@property(retain) NSMutableArray * addressLines;
@property(retain) GMMGeometry * geometry;
@property(retain) NSString * name;
@property int type;


- (id)references;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (void)setImages:(id)arg1;
- (id)dictionaryRepresentation;
- (id)images;
- (int)type;
- (void)setType:(int)arg1;
- (void)addImage:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasSesameDetailsEditable;
- (BOOL)hasQueryRefinementString;
- (int)imagesCount;
- (int)enhancedContentsCount;
- (void)setEnhancedContent:(id)arg1 atIndex:(unsigned int)arg2;
- (id)enhancedContentAtIndex:(unsigned int)arg1;
- (void)addEnhancedContent:(id)arg1;
- (void)setReference:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setShowIcon:(BOOL)arg1;
- (BOOL)hasKmlInfo;
- (BOOL)hasMapsUrl;
- (BOOL)hasRating;
- (BOOL)hasStreetViewPanoId;
- (void)setSesameEditable:(BOOL)arg1;
- (void)setSesameDetailsEditable:(BOOL)arg1;
- (BOOL)hasSesameFeatureId;
- (void)setSesameFeatureId:(id)arg1;
- (BOOL)sesameDetailsEditable;
- (BOOL)hasSesameEditable;
- (void)setStreetViewPanoId:(id)arg1;
- (BOOL)hasLocationSource;
- (id)queryRefinementString;
- (void)setQueryRefinementString:(id)arg1;
- (void)setMapsUrl:(id)arg1;
- (void)setStructuredAddress:(id)arg1;
- (void)setKmlInfo:(id)arg1;
- (void)setAttributionUrl:(id)arg1;
- (BOOL)hasShowIcon;
- (BOOL)showIcon;
- (id)enhancedContents;
- (void)setEnhancedContents:(id)arg1;
- (id)sesameFeatureId;
- (BOOL)sesameEditable;
- (BOOL)hasAttributionUrl;
- (BOOL)readFrom:(id)arg1;
- (id)referenceAtIndex:(unsigned int)arg1;
- (void)setReferences:(id)arg1;
- (int)referencesCount;
- (void)addReference:(id)arg1;
- (id)structuredAddress;
- (BOOL)hasPhone;
- (BOOL)hasName;
- (BOOL)hasAttributionText;
- (void)setInexactPosition:(BOOL)arg1;
- (int)addressLinesCount;
- (void)setAddressLine:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addressLineAtIndex:(unsigned int)arg1;
- (void)addAddressLine:(id)arg1;
- (BOOL)hasDirectionsPlacemarkToken;
- (BOOL)hasAdInfo;
- (void)writeTo:(id)arg1;
- (BOOL)hasClosedListing;
- (BOOL)hasUnverifiedListing;
- (BOOL)hasCid;
- (BOOL)hasInexactPosition;
- (id)adInfo;
- (BOOL)closedListing;
- (BOOL)inexactPosition;
- (id)attributionText;
- (id)phone;
- (id)directionsPlacemarkToken;
- (BOOL)hasGeometry;
- (void)setLocationSource:(int)arg1;
- (int)locationSource;
- (void)setPhone:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setCid:(unsigned long long)arg1;
- (void)setDirectionsPlacemarkToken:(id)arg1;
- (void)setAdInfo:(id)arg1;
- (unsigned long long)cid;
- (void)setAddressLines:(id)arg1;
- (void)setUnverifiedListing:(BOOL)arg1;
- (void)setClosedListing:(BOOL)arg1;
- (id)imageAtIndex:(unsigned int)arg1;
- (id)streetViewPanoId;
- (id)attributionUrl;
- (id)mapsUrl;
- (BOOL)unverifiedListing;
- (id)kmlInfo;
- (BOOL)hasStructuredAddress;
- (id)addressLines;
- (void)setRating:(id)arg1;
- (id)rating;

@end
