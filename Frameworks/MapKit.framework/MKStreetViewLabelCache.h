/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary, UIFont;

@interface MKStreetViewLabelCache : NSObject  {
    NSMutableDictionary *current;
    NSMutableDictionary *previous;
    unsigned int labelWidth;
    unsigned int labelHeight;
    UIFont *font;
    struct CGContext { } *scratchContext;
    void *scratchBytes;
    unsigned int arrowTexture;
}

@property(readonly) unsigned int arrowTexture;


- (id)init;
- (void)dealloc;
- (unsigned int)textureForName:(id)arg1;
- (void)ageLabels;
- (unsigned int)arrowTexture;

@end
