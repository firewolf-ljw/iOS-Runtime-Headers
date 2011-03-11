/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMIncomingTile, GMMNavigationImage, NSString, GMMIncomingSuperTile, GMMIncomingThumbnail, GMMStreetViewMetadata;

@interface GMMStreetViewResponse : PBCodable  {
    NSString *_panoId;
    GMMIncomingSuperTile *_incomingSuperTile;
    GMMIncomingTile *_incomingTile;
    GMMIncomingThumbnail *_incomingThumbnail;
    GMMNavigationImage *_navigationImage;
    GMMStreetViewMetadata *_metadata;
    NSString *_signature;
    BOOL _throttled;
    BOOL _hasThrottled;
}

@property(readonly) BOOL hasPanoId;
@property(readonly) BOOL hasIncomingSuperTile;
@property(readonly) BOOL hasIncomingTile;
@property(readonly) BOOL hasIncomingThumbnail;
@property(readonly) BOOL hasNavigationImage;
@property(readonly) BOOL hasMetadata;
@property(readonly) BOOL hasSignature;
@property(readonly) BOOL hasThrottled;
@property BOOL throttled;
@property(retain) NSString * signature;
@property(retain) GMMStreetViewMetadata * metadata;
@property(retain) GMMNavigationImage * navigationImage;
@property(retain) GMMIncomingThumbnail * incomingThumbnail;
@property(retain) GMMIncomingTile * incomingTile;
@property(retain) GMMIncomingSuperTile * incomingSuperTile;
@property(retain) NSString * panoId;


- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasThrottled;
- (BOOL)hasIncomingSuperTile;
- (BOOL)hasIncomingTile;
- (BOOL)hasIncomingThumbnail;
- (BOOL)hasNavigationImage;
- (BOOL)hasSignature;
- (void)setThrottled:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (id)navigationImage;
- (void)setNavigationImage:(id)arg1;
- (void)setIncomingThumbnail:(id)arg1;
- (void)setIncomingTile:(id)arg1;
- (void)setIncomingSuperTile:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)incomingTile;
- (BOOL)throttled;
- (BOOL)hasMetadata;
- (id)incomingThumbnail;
- (id)incomingSuperTile;
- (BOOL)hasPanoId;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (id)signature;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)description;

@end
