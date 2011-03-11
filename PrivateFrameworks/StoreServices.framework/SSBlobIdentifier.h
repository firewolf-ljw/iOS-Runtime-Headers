/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSBlobIdentifier : NSObject <NSCopying> {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSString *_key;
    NSString *_lastKnownVersion;
}

@property(copy) NSString * key;
@property(copy) NSString * lastKnownVersion;


- (id)key;
- (void)setKey:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)lastKnownVersion;
- (id)initWithKey:(id)arg1 lastKnownVersion:(id)arg2;
- (void)setLastKnownVersion:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
