/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSwellTextViewDelegate>, UIColor, NSString, UITextView, UIFont;

@interface ABSwellTextView : UIView <UITextViewDelegate> {
    UITextView *_textView;
    float _maxHeight;
    BOOL _allowsEditing;
    <ABSwellTextViewDelegate> *_delegate;
    struct { 
        unsigned int delegateImplementsShouldBeginEditing : 1; 
        unsigned int delegateImplementsShouldEndEditing : 1; 
        unsigned int delegateImplementsDidBeginEditing : 1; 
        unsigned int delegateImplementsDidEndEditing : 1; 
        unsigned int delegateImplementsDidChange : 1; 
    } _flags;
}

@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(getter=isHighlighted) BOOL highlighted;
@property UIColor * highlightedTextColor;
@property NSString * text;
@property UIFont * font;
@property UIColor * textColor;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float width; float height; } shadowOffset;
@property <ABSwellTextViewDelegate> * delegate;
@property BOOL allowsEditing;
@property float maxHeight;

+ (float)lineHeightWithFont:(id)arg1;
+ (void)_initializeSafeCategory;

- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)shadowColor;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (BOOL)isFirstResponder;
- (id)textColor;
- (BOOL)resignFirstResponder;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (BOOL)isHighlighted;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setScrollEnabled:(BOOL)arg1;
- (BOOL)isScrollEnabled;
- (BOOL)becomeFirstResponder;
- (id)text;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)setShadowColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (float)maxHeight;
- (void)setMaxHeight:(float)arg1;
- (float)abUITextView:(id)arg1 heightForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection;
- (void)setKeyboardSettings:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (id)accessibilityValue;

@end
