/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficTile : PBCodable <NSCopying> {
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property (nonatomic, readonly) BOOL hasVertices;
@property (nonatomic, retain) NSMutableArray *trafficIncidents;
@property (nonatomic, retain) NSMutableArray *trafficSegments;
@property (nonatomic, retain) NSData *vertices;

- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (void)clearTrafficIncidents;
- (void)clearTrafficSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { int x1; int x2; }*)createUnpackedVerticesWithGutterSize:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasVertices;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTrafficIncidents:(id)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(id)arg1;
- (id)trafficIncidentAtIndex:(unsigned int)arg1;
- (id)trafficIncidents;
- (unsigned int)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned int)arg1;
- (id)trafficSegments;
- (unsigned int)trafficSegmentsCount;
- (id)vertices;
- (void)writeTo:(id)arg1;

@end
