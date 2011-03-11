/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCoder : NSObject  {
}


- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeDataObject;
- (id)decodeObject;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(void*)arg3;
- (void*)decodeBytesWithReturnedLength:(unsigned int*)arg1;
- (int)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (BOOL)containsValueForKey:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeObject:(id)arg1;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void*)arg3;
- (void)encodePoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (struct CGPoint { float x1; float x2; })decodePointForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeSizeForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (void)encodePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })decodePoint;
- (void)encodeSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })decodeSize;
- (void)encodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeRect;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeLong:(long)arg1 forKey:(id)arg2;
- (long)decodeLongForKey:(id)arg1;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (struct _NSZone { }*)objectZone;
- (void)encodeRootObject:(id)arg1;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const float*)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
- (BOOL)CA_decodeCGFloatArray:(float*)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (void)encodeCGSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 forKey:(id)arg2;
- (struct CGPoint { float x1; float x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })decodeCGAffineTransformForKey:(id)arg1;
- (id)_copyDecodedObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2;

@end
