/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary  {
    NSMutableDictionary *dict;
}


- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (id)serializeToData;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;

@end
