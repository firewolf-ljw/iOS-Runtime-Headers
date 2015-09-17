/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKValueRange : NSObject <HKTimePeriod, NSCopying> {
    id _maxValue;
    id _minValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id maxValue;
@property (nonatomic, copy) id minValue;
@property (readonly) Class superclass;

+ (id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2;

- (void).cxx_destruct;
- (BOOL)containsValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned int)hash;
- (BOOL)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (id)startDate;
- (void)unionMaxValueWithRange:(id)arg1;
- (void)unionMinValueWithRange:(id)arg1;
- (void)unionRange:(id)arg1;

@end