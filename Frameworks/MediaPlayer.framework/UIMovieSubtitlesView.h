/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSAttributedString;

@interface UIMovieSubtitlesView : UIView  {
    id _delegate;
    NSAttributedString *_subtitleString;
    unsigned int _sizeIsDirty : 1;
    struct CGSize { 
        float width; 
        float height; 
    } _markupSize;
    struct CGSize { 
        float width; 
        float height; 
    } _padding;
    float _fontSize;
    BOOL _subtitlesAreForced;
}

@property struct CGSize { float width; float height; } padding;
@property(retain) NSAttributedString * subtitleString;
@property(readonly) BOOL subtitlesAreForced;
@property float fontSize;


- (void)setPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)subtitlesAreForced;
- (void)sizeToFitWidth:(float)arg1;
- (void)setSubtitleString:(struct __CFAttributedString { }*)arg1 forced:(BOOL)arg2;
- (void)clearSubtitle;
- (id)_translateUIMovieAttributesOfAttributedString:(id)arg1;
- (id)subtitleString;
- (void)setSubtitleString:(id)arg1;
- (struct CGSize { float x1; float x2; })padding;

@end
