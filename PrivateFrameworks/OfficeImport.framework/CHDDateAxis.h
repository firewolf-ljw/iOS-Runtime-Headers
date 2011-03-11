/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDateAxis : CHDAxis  {
    boolmAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}


- (void)setMajorUnitValue:(double)arg1;
- (void)setBaseTimeUnit:(int)arg1;
- (int)baseTimeUnit;
- (int)minorTimeUnit;
- (int)majorTimeUnit;
- (bool)isAutomatic;
- (void)setAutomatic:(bool)arg1;
- (bool)isDate;
- (double)minorUnitValue;
- (double)majorUnitValue;
- (void)setMinorUnitValue:(double)arg1;
- (void)setMinorTimeUnit:(int)arg1;
- (void)setMajorTimeUnit:(int)arg1;
- (id)initWithResources:(id)arg1;

@end
