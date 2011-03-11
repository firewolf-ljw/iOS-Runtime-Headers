/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSSet, NSString, NSArray;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    NSArray *_clientIdentifiers;
    unsigned int _diskCapacity;
    NSSet *_fileExtensions;
    unsigned int _memoryCapacity;
    NSString *_persistentIdentifier;
    NSArray *_urlPatterns;
}

@property(copy) NSArray * URLPatterns;
@property(copy) NSString * persistentIdentifier;
@property unsigned int memoryCapacity;
@property(copy) NSSet * fileExtensions;
@property unsigned int diskCapacity;
@property(copy) NSArray * clientIdentifiers;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)URLPatterns;
- (void)_setClientIdentifiersFromPropertyList:(id)arg1;
- (void)_setFileExtensionsFromPropertyList:(id)arg1;
- (void)_setURLPatternsFromPropertyList:(id)arg1;
- (void)setURLPatterns:(id)arg1;
- (id)persistentIdentifier;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setFileExtensions:(id)arg1;
- (id)clientIdentifiers;
- (void)setClientIdentifiers:(id)arg1;
- (unsigned int)memoryCapacity;
- (unsigned int)diskCapacity;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (id)fileExtensions;
- (id)initWithPropertyList:(id)arg1;

@end
