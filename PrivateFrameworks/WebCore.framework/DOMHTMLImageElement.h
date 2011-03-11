/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURL, NSString;

@interface DOMHTMLImageElement : DOMHTMLElement  {
}

@property(copy) NSString * name;
@property(copy) NSString * align;
@property(copy) NSString * alt;
@property(copy) NSString * border;
@property int height;
@property int hspace;
@property BOOL isMap;
@property(copy) NSString * longDesc;
@property(copy) NSString * src;
@property(copy) NSString * useMap;
@property int vspace;
@property int width;
@property(readonly) BOOL complete;
@property(copy) NSString * lowsrc;
@property(readonly) int naturalHeight;
@property(readonly) int naturalWidth;
@property(readonly) int x;
@property(readonly) int y;
@property(copy,readonly) NSString * altDisplayString;
@property(copy,readonly) NSURL * absoluteImageURL;


- (int)height;
- (int)x;
- (id)dataRepresentation:(BOOL)arg1;
- (id)mimeType;
- (id)absoluteImageURL;
- (int)y;
- (int)width;
- (void)setName:(id)arg1;
- (void)setWidth:(int)arg1;
- (id)name;
- (void)setBorder:(id)arg1;
- (id)align;
- (void)setHeight:(int)arg1;
- (void)setAlign:(id)arg1;
- (id)border;
- (BOOL)isMap;
- (void)setIsMap:(BOOL)arg1;
- (id)useMap;
- (void)setUseMap:(id)arg1;
- (BOOL)complete;
- (id)lowsrc;
- (void)setLowsrc:(id)arg1;
- (int)naturalHeight;
- (int)naturalWidth;
- (id)altDisplayString;
- (id)longDesc;
- (void)setLongDesc:(id)arg1;
- (id)src;
- (void)setSrc:(id)arg1;
- (id)alt;
- (void)setAlt:(id)arg1;
- (int)hspace;
- (void)setHspace:(int)arg1;
- (int)vspace;
- (void)setVspace:(int)arg1;
- (BOOL)showsTapHighlight;
- (void)mf_constrainImageToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)mf_unconstrainImageSize;

@end
