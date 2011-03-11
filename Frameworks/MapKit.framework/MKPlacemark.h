/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSDictionary, MKPlacemarkInternal, NSString;

@interface MKPlacemark : NSObject <MKAnnotation> {
    MKPlacemarkInternal *_internal;
}

@property(readonly) NSString * countryCode;
@property(readonly) NSString * country;
@property(readonly) NSString * postalCode;
@property(readonly) NSString * subAdministrativeArea;
@property(readonly) NSString * administrativeArea;
@property(readonly) NSString * subLocality;
@property(readonly) NSString * locality;
@property(readonly) NSString * subThoroughfare;
@property(readonly) NSString * thoroughfare;
@property(readonly) NSDictionary * addressDictionary;
@property(readonly) struct { double latitude; double longitude; } coordinate;


- (id)title;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)subThoroughfare;
- (id)administrativeArea;
- (id)subAdministrativeArea;
- (id)locality;
- (id)subLocality;
- (id)postalCode;
- (id)countryCode;
- (id)_mapkit_cache_key;
- (unsigned int)_mapkit_cache_accessTime;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2;
- (void)set_mapkit_cache_accessTime:(unsigned int)arg1;
- (id)thoroughfare;
- (id)_formattedAddressLines;
- (id)_mergedThoroughfare;
- (id)addressDictionary;
- (struct { double x1; double x2; })coordinate;
- (id)country;

@end
