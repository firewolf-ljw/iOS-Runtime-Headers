/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _time;
}

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (int)integerValue;
- (unsigned int)unsignedIntegerValue;
- (float)floatValue;
- (long long)longLongValue;
- (double)doubleValue;
- (int)intValue;
- (void)getValue:(void*)arg1;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongLongValue;
- (long)longValue;
- (unsigned short)unsignedShortValue;
- (unsigned long)unsignedLongValue;
- (BOOL)charValue;
- (short)shortValue;
- (const char *)objCType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;

@end
