/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface UIPushButton : UIControl  {
    NSString *_title;
    UIFont *_font;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    struct CGSize { 
        float width; 
        float height; 
    } _imageOffset;
    struct CGSize { 
        float width; 
        float height; 
    } _titlePadding;
    struct __CFDictionary { } *_info;
    float _minimumFontPointSize;
    struct { 
        unsigned int selected : 1; 
        unsigned int drawShadow : 1; 
        unsigned int disableAutosizeToFit : 1; 
        unsigned int drawContentsCentered : 1; 
        unsigned int reverseShadowDirectionWhenHighlighted : 1; 
        unsigned int stretchBackground : 1; 
        unsigned int showPressFeedback : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int alwaysHandleScrollerMouseEvent : 1; 
        unsigned int drawsImageOnRight : 1; 
        unsigned int drawContentsCenteredHorizontally : 1; 
    } _pushButtonFlags;
}

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (void)setDrawsShadow:(BOOL)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (id)currentImage;
- (id)imageForState:(unsigned int)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStretchBackground:(BOOL)arg1;
- (void)setDrawContentsCentered:(BOOL)arg1;
- (void)setBackground:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleFont:(id)arg1;
- (void)setShadowOffset:(float)arg1;
- (void)setPressedImage:(id)arg1;
- (void)setImageOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)isSelected;
- (float)minimumFontSize;
- (id)initWithTitle:(id)arg1 autosizesToFit:(BOOL)arg2;
- (BOOL)isPressed;
- (id)titleFont;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (BOOL)autosizesToFit;
- (struct CGPoint { float x1; float x2; })pressFeedbackPosition;
- (void)setHighlighted:(BOOL)arg1;
- (void)_setAlwaysHandleScrollerMouseEvent:(BOOL)arg1;
- (void)setTitlePadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setDrawContentsCenteredHorizontally:(BOOL)arg1;
- (void)setDrawsImageOnRight:(BOOL)arg1;
- (BOOL)drawsShadow;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })imageOffset;
- (BOOL)drawContentsCentered;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (id)shadowColorForState:(unsigned int)arg1;
- (id)backgroundForState:(unsigned int)arg1;
- (id)currentTitleColor;
- (id)currentShadowColor;
- (id)currentBackground;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })_backgroundSlices:(struct CGSize { float x1; float x2; })arg1;
- (void)_drawBezelPartInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawImageAtPoint:(struct CGPoint { float x1; float x2; })arg1 fraction:(float)arg2;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (void)_drawImageAndTextPartInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawButtonPart:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_removePressFeedback:(id)arg1 finished:(id)arg2;
- (struct { id x1; id x2; id x3; id x4; })_currentButtonStateInfo;
- (void)_setNeedsDisplay:(struct { id x1; id x2; id x3; id x4; })arg1;
- (void)setHighlightedTitleColor:(id)arg1;
- (id)titleColor;
- (void)setTracking:(BOOL)arg1;
- (id)image;
- (id)_scriptingInfo;
- (id)title;
- (unsigned int)state;
- (id)initWithImage:(id)arg1;
- (void)sizeToFit;
- (void)setNeedsDisplay;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (void)configureFromScriptButton:(id)arg1;

@end
