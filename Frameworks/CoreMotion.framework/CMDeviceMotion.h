/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem  {
    id _internal;
}

@property(readonly) CMAttitude * attitude;
@property(readonly) struct { double x; double y; double z; } rotationRate;
@property(readonly) struct { double x; double y; double z; } gravity;
@property(readonly) struct { double x; double y; double z; } userAcceleration;


- (id)initWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1 andTimestamp:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (struct { double x1; double x2; double x3; })gravity;
- (struct { double x1; double x2; double x3; })rotationRate;
- (id)attitude;

@end
