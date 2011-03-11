/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSData, GMMAdInfo, NSMutableArray, GMMKmlInfo;

@interface MKSearchResultRepr : PBCodable  {
    unsigned int _mapType;
    int _type;
    int _originalType;
    int _resultIndex;
    BOOL _hasResultIndex;
    NSString *_name;
    unsigned int _flags;
    BOOL _hasFlags;
    NSString *_locality;
    NSString *_region;
    NSString *_postalCode;
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_phone;
    NSString *_referenceURL;
    NSString *_attributionText;
    NSString *_attributionURL;
    NSString *_mapsURL;
    NSString *_dependentLocality;
    NSString *_thoroughfare;
    NSString *_panoramaID;
    int _latitudeE6Value;
    BOOL _hasLatitudeE6Value;
    int _longitudeE6Value;
    BOOL _hasLongitudeE6Value;
    unsigned int _zoomLevel;
    BOOL _hasZoomLevel;
    BOOL _inexactPosition;
    BOOL _hasInexactPosition;
    long long _cid;
    BOOL _hasCid;
    NSString *_formattedAddress;
    NSMutableArray *_addressLines;
    NSString *_directionsPlacemarkToken;
    BOOL _unverifiedListing;
    BOOL _hasUnverifiedListing;
    BOOL _closedListing;
    BOOL _hasClosedListing;
    int _addressRecordID;
    BOOL _hasAddressRecordID;
    int _addressID;
    BOOL _hasAddressID;
    GMMAdInfo *_adInfo;
    NSData *_adIconData;
    unsigned int _adActionsSent;
    BOOL _hasAdActionsSent;
    NSString *_query;
    int _gmmContentType;
    BOOL _hasGmmContentType;
    GMMKmlInfo *_gmmKmlInfo;
}

@property(readonly) BOOL hasName;
@property(readonly) BOOL hasLocality;
@property(readonly) BOOL hasRegion;
@property(readonly) BOOL hasPostalCode;
@property(readonly) BOOL hasCountryCode;
@property(readonly) BOOL hasCountryName;
@property(readonly) BOOL hasPhone;
@property(readonly) BOOL hasReferenceURL;
@property(readonly) BOOL hasAttributionText;
@property(readonly) BOOL hasAttributionURL;
@property(readonly) BOOL hasMapsURL;
@property(readonly) BOOL hasDependentLocality;
@property(readonly) BOOL hasThoroughfare;
@property(readonly) BOOL hasPanoramaID;
@property(readonly) BOOL hasFormattedAddress;
@property(readonly) int addressLinesCount;
@property(readonly) BOOL hasDirectionsPlacemarkToken;
@property(readonly) BOOL hasAdInfo;
@property(readonly) BOOL hasAdIconData;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasGmmKmlInfo;
@property(retain) GMMKmlInfo * gmmKmlInfo;
@property(readonly) BOOL hasGmmContentType;
@property int gmmContentType;
@property(retain) NSString * query;
@property(readonly) BOOL hasAdActionsSent;
@property unsigned int adActionsSent;
@property(retain) NSData * adIconData;
@property(retain) GMMAdInfo * adInfo;
@property(readonly) BOOL hasAddressID;
@property int addressID;
@property(readonly) BOOL hasAddressRecordID;
@property int addressRecordID;
@property(readonly) BOOL hasClosedListing;
@property BOOL closedListing;
@property(readonly) BOOL hasUnverifiedListing;
@property BOOL unverifiedListing;
@property(retain) NSString * directionsPlacemarkToken;
@property(retain) NSMutableArray * addressLines;
@property(retain) NSString * formattedAddress;
@property(readonly) BOOL hasCid;
@property long long cid;
@property(readonly) BOOL hasInexactPosition;
@property BOOL inexactPosition;
@property(readonly) BOOL hasZoomLevel;
@property unsigned int zoomLevel;
@property(readonly) BOOL hasLongitudeE6Value;
@property int longitudeE6Value;
@property(readonly) BOOL hasLatitudeE6Value;
@property int latitudeE6Value;
@property(retain) NSString * panoramaID;
@property(retain) NSString * thoroughfare;
@property(retain) NSString * dependentLocality;
@property(retain) NSString * mapsURL;
@property(retain) NSString * attributionURL;
@property(retain) NSString * attributionText;
@property(retain) NSString * referenceURL;
@property(retain) NSString * phone;
@property(retain) NSString * countryName;
@property(retain) NSString * countryCode;
@property(retain) NSString * postalCode;
@property(retain) NSString * region;
@property(retain) NSString * locality;
@property(readonly) BOOL hasFlags;
@property unsigned int flags;
@property(retain) NSString * name;
@property(readonly) BOOL hasResultIndex;
@property int resultIndex;
@property int originalType;
@property int type;
@property unsigned int mapType;


- (unsigned int)flags;
- (id)dictionaryRepresentation;
- (id)mapsURL;
- (int)type;
- (void)setType:(int)arg1;
- (id)query;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setQuery:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setResultIndex:(int)arg1;
- (BOOL)hasResultIndex;
- (BOOL)hasZoomLevel;
- (BOOL)hasAdActionsSent;
- (BOOL)hasGmmKmlInfo;
- (BOOL)hasFormattedAddress;
- (BOOL)hasPanoramaID;
- (BOOL)hasThoroughfare;
- (BOOL)hasAttributionURL;
- (BOOL)hasPhone;
- (BOOL)hasPostalCode;
- (BOOL)hasRegion;
- (BOOL)hasLocality;
- (BOOL)hasName;
- (BOOL)hasCountryCode;
- (BOOL)hasCountryName;
- (BOOL)hasReferenceURL;
- (BOOL)hasAttributionText;
- (BOOL)hasMapsURL;
- (BOOL)hasDependentLocality;
- (void)setLongitudeE6Value:(int)arg1;
- (void)setInexactPosition:(BOOL)arg1;
- (int)addressLinesCount;
- (void)setAddressLine:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addressLineAtIndex:(unsigned int)arg1;
- (void)addAddressLine:(id)arg1;
- (BOOL)hasDirectionsPlacemarkToken;
- (BOOL)hasAdInfo;
- (BOOL)hasQuery;
- (void)writeTo:(id)arg1;
- (BOOL)hasGmmContentType;
- (BOOL)hasAddressID;
- (BOOL)hasClosedListing;
- (BOOL)hasUnverifiedListing;
- (id)formattedAddress;
- (void)setFormattedAddress:(id)arg1;
- (BOOL)hasCid;
- (BOOL)hasInexactPosition;
- (BOOL)hasFlags;
- (id)gmmKmlInfo;
- (int)gmmContentType;
- (id)adIconData;
- (id)adInfo;
- (int)addressRecordID;
- (BOOL)closedListing;
- (BOOL)inexactPosition;
- (int)longitudeE6Value;
- (int)latitudeE6Value;
- (id)dependentLocality;
- (id)attributionURL;
- (id)attributionText;
- (id)phone;
- (id)countryName;
- (int)resultIndex;
- (id)locality;
- (id)postalCode;
- (id)countryCode;
- (int)addressID;
- (void)setPanoramaID:(id)arg1;
- (id)directionsPlacemarkToken;
- (id)panoramaID;
- (unsigned int)zoomLevel;
- (void)setFlags:(unsigned int)arg1;
- (void)setPhone:(id)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setOriginalType:(int)arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (void)setAttributionURL:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setReferenceURL:(id)arg1;
- (void)setCid:(long long)arg1;
- (void)setLatitudeE6Value:(int)arg1;
- (void)setDirectionsPlacemarkToken:(id)arg1;
- (void)setAdInfo:(id)arg1;
- (void)setAdIconData:(id)arg1;
- (void)setAdActionsSent:(unsigned int)arg1;
- (void)setGmmKmlInfo:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (int)originalType;
- (long long)cid;
- (unsigned int)adActionsSent;
- (void)setAddressLines:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (void)setDependentLocality:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setUnverifiedListing:(BOOL)arg1;
- (void)setClosedListing:(BOOL)arg1;
- (void)setGmmContentType:(int)arg1;
- (id)thoroughfare;
- (BOOL)unverifiedListing;
- (BOOL)hasAddressRecordID;
- (BOOL)hasLatitudeE6Value;
- (BOOL)hasLongitudeE6Value;
- (BOOL)hasAdIconData;
- (void)setAddressID:(int)arg1;
- (void)setAddressRecordID:(int)arg1;
- (id)addressLines;
- (unsigned int)mapType;
- (void)setRegion:(id)arg1;
- (id)region;
- (id)referenceURL;

@end
