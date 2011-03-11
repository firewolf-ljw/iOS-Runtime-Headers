/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData, NSMutableArray;

@interface GMMPolygon : PBCodable  {
    int _lineWidth;
    BOOL _hasLineWidth;
    int _lineColor;
    BOOL _hasLineColor;
    NSData *_line;
    int _fillColor;
    BOOL _hasFillColor;
    NSMutableArray *_innerBoundarys;
}

@property(readonly) BOOL hasLine;
@property(readonly) int innerBoundarysCount;
@property(retain) NSMutableArray * innerBoundarys;
@property(readonly) BOOL hasFillColor;
@property int fillColor;
@property(retain) NSData * line;
@property(readonly) BOOL hasLineColor;
@property int lineColor;
@property(readonly) BOOL hasLineWidth;
@property int lineWidth;


- (int)fillColor;
- (void)setFillColor:(int)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (int)lineWidth;
- (void)setLineWidth:(int)arg1;
- (id)description;
- (BOOL)hasLineColor;
- (void)setLineColor:(int)arg1;
- (BOOL)hasLine;
- (BOOL)hasLineWidth;
- (BOOL)hasFillColor;
- (int)innerBoundarysCount;
- (void)setInnerBoundary:(id)arg1 atIndex:(unsigned int)arg2;
- (id)innerBoundaryAtIndex:(unsigned int)arg1;
- (void)addInnerBoundary:(id)arg1;
- (id)innerBoundarys;
- (void)setInnerBoundarys:(id)arg1;
- (void)setLine:(id)arg1;
- (id)line;
- (int)lineColor;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
