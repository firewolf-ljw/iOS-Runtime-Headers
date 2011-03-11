/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMCopyright : PBCodable  {
    NSMutableArray *_map_data_copyrights;
    NSMutableArray *_imagery_copyrights;
    int _copyrightYear;
    BOOL _hasCopyrightYear;
}

@property(readonly) int map_data_copyrightsCount;
@property(readonly) int imagery_copyrightsCount;
@property(readonly) BOOL hasCopyrightYear;
@property int copyrightYear;
@property(retain) NSMutableArray * imagery_copyrights;
@property(retain) NSMutableArray * map_data_copyrights;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (int)map_data_copyrightsCount;
- (void)setMap_data_copyright:(id)arg1 atIndex:(unsigned int)arg2;
- (id)map_data_copyrightAtIndex:(unsigned int)arg1;
- (void)addMap_data_copyright:(id)arg1;
- (int)imagery_copyrightsCount;
- (void)setImagery_copyright:(id)arg1 atIndex:(unsigned int)arg2;
- (id)imagery_copyrightAtIndex:(unsigned int)arg1;
- (void)addImagery_copyright:(id)arg1;
- (void)setCopyrightYear:(int)arg1;
- (void)setImagery_copyrights:(id)arg1;
- (void)setMap_data_copyrights:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasCopyrightYear;
- (int)copyrightYear;
- (id)map_data_copyrights;
- (id)imagery_copyrights;
- (void)writeTo:(id)arg1;

@end
