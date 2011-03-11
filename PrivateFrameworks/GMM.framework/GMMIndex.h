/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMIndex : PBCodable  {
    int _tileYIndex;
    int _face;
    BOOL _hasFace;
    int _tileXIndex;
}

@property int tileXIndex;
@property(readonly) BOOL hasFace;
@property int face;
@property int tileYIndex;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTileXIndex:(int)arg1;
- (void)setTileYIndex:(int)arg1;
- (BOOL)hasFace;
- (int)tileXIndex;
- (int)tileYIndex;
- (int)face;
- (void)setFace:(int)arg1;

@end
