/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, UIColor;

@interface MKPanoramaAnnotation : NSObject  {
    int _type;
    NSString *_panoramaID;
    NSString *_text;
    NSString *_streetRange;
    double _yaw;
    UIColor *_roadOverlayColor;
}

@property(readonly) UIColor * roadOverlayColor;
@property(readonly) double yaw;
@property(readonly) NSString * streetRange;
@property(readonly) NSString * text;
@property(readonly) NSString * panoramaID;
@property int type;


- (int)type;
- (void)setType:(int)arg1;
- (id)text;
- (void)dealloc;
- (id)description;
- (id)roadOverlayColor;
- (id)streetRange;
- (id)initWithLink:(id)arg1;
- (id)panoramaID;
- (double)yaw;

@end
