/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircle : MKShape <MKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    double _radius;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingMapRect;
}

@property(readonly) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property(readonly) double radius;
@property(readonly) struct { double latitude; double longitude; } coordinate;

+ (id)circleWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
+ (id)circleWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (double)radius;
- (id)_initWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; double x2; })coordinate;

@end
