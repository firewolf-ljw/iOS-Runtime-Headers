/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMPixelPoint, GMMPolygon, GMMEfficientMapPoint, GMMMapPoint, GMMPolyLine;

@interface GMMGeometry : PBCodable  {
    int _type;
    GMMMapPoint *_mapPoint;
    GMMPolyLine *_polyLine;
    GMMPolygon *_polygon;
    GMMPixelPoint *_pixelPoint;
    GMMEfficientMapPoint *_efficientMapPoint;
}

@property(readonly) BOOL hasCoordinate;
@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(readonly) int latitudeE6;
@property(readonly) int longitudeE6;
@property(readonly) BOOL hasMapPoint;
@property(readonly) BOOL hasPolyLine;
@property(readonly) BOOL hasPolygon;
@property(readonly) BOOL hasPixelPoint;
@property(readonly) BOOL hasEfficientMapPoint;
@property(retain) GMMEfficientMapPoint * efficientMapPoint;
@property(retain) GMMPixelPoint * pixelPoint;
@property(retain) GMMPolygon * polygon;
@property(retain) GMMPolyLine * polyLine;
@property(retain) GMMMapPoint * mapPoint;
@property int type;


- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)description;
- (BOOL)hasPolyLine;
- (void)setEfficientMapPoint:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setPolyLine:(id)arg1;
- (id)polyLine;
- (BOOL)hasPolygon;
- (BOOL)readFrom:(id)arg1;
- (id)polygon;
- (void)writeTo:(id)arg1;
- (id)pixelPoint;
- (void)setMapPoint:(id)arg1;
- (BOOL)hasPixelPoint;
- (BOOL)hasEfficientMapPoint;
- (BOOL)hasMapPoint;
- (id)efficientMapPoint;
- (void)setPixelPoint:(id)arg1;
- (id)mapPoint;
- (id)initWithOldMapPoint:(struct MapPoint { int x1; int x2; int x3; int x4; }*)arg1;
- (BOOL)hasCoordinate;
- (int)latitudeE6;
- (int)longitudeE6;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)pixelPointGeometry;
- (struct { double x1; double x2; })coordinate;

@end
