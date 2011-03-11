/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolyline : MKMultiPoint <MKOverlay> {
}

@property(readonly) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property(readonly) struct { double latitude; double longitude; } coordinate;

+ (id)polylineWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
+ (id)polylineWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;

- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; double x2; })coordinate;

@end
