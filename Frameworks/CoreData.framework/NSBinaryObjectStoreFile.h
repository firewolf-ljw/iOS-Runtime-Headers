/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSDictionary;

@interface NSBinaryObjectStoreFile : NSObject  {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
}


- (void)dealloc;
- (int)databaseVersion;
- (unsigned long long)primaryKeyGeneration;
- (void)setFullMetadata:(id)arg1;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;
- (void)setDatabaseVersion:(int)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (id)mapData;
- (void)setMapData:(id)arg1;
- (void)clearCurrentValues;
- (BOOL)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3;
- (BOOL)readFromFile:(id)arg1 error:(id*)arg2;
- (BOOL)readMetadataFromFile:(id)arg1 error:(id*)arg2;
- (BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4;
- (id)fullMetadata;
- (BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2;

@end
