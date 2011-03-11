/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    id mFirst;
    id mSecond;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (id)pairWithPair:(id)arg1;
+ (id)pair;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)second;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithPair:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (void)p_SetSecond:(id)arg1;
- (id)first;

@end
