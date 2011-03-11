/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, <UIKeyboardEmojiController>, UITouch, NSMutableArray, UIKeyboardEmojiView;

@interface UIKeyboardEmojiPage : UIControl  {
    NSArray *_emoji;
    NSMutableArray *_emojiViews;
    int _numRows;
    int _numCols;
    int _numPages;
    struct CGPoint { 
        float x; 
        float y; 
    } _emojiPadding;
    struct CGPoint { 
        float x; 
        float y; 
    } _margin;
    struct CGSize { 
        float width; 
        float height; 
    } _emojiSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyActivationRect;
    NSString *_optionalText;
    <UIKeyboardEmojiController> *_controller;
    UITouch *_activeTouch;
    BOOL _needsLayout;
    UIKeyboardEmojiView *_touched;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_onDisplay;
}

@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } keyActivationRect;
@property(retain) UIKeyboardEmojiView * onDisplay;
@property(retain) UIKeyboardEmojiView * pendingDisplay;
@property(retain) UITouch * activeTouch;
@property(retain) NSString * optionalText;
@property <UIKeyboardEmojiController> * controller;
@property(retain) NSArray * emoji;
@property(retain) UIKeyboardEmojiView * touched;

+ (struct CGSize { float x1; float x2; })emojiSize:(BOOL)arg1;

- (id)activeTouch;
- (void)touchCancelled:(id)arg1;
- (void)setEmoji:(id)arg1;
- (int)takeEmoji:(id)arg1 fromIndex:(int)arg2;
- (void)setOptionalText:(id)arg1;
- (void)setKeyActivationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)emoji;
- (id)controller;
- (unsigned char)rowCount:(BOOL)arg1;
- (unsigned char)colCount:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })margin:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })padding:(BOOL)arg1;
- (void)updateLayoutConstants;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 Col:(int)arg2;
- (void)generateSubviews;
- (void)clearSubviews;
- (id)closestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelPendingPopupChanges;
- (void)showPendingPopup:(id)arg1;
- (void)removeDisplayedPopup:(id)arg1;
- (void)checkForStalePopup:(id)arg1;
- (void)touchBegan:(id)arg1;
- (void)touchMoved:(id)arg1;
- (void)touchEnded:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyActivationRect;
- (id)onDisplay;
- (void)setOnDisplay:(id)arg1;
- (id)pendingDisplay;
- (void)setPendingDisplay:(id)arg1;
- (id)optionalText;
- (id)touched;
- (void)setTouched:(id)arg1;
- (void)setController:(id)arg1;
- (void)setActiveTouch:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
