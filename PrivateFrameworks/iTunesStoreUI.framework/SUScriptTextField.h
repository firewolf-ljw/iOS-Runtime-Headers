/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject, SUScriptFunction, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

@property(retain) id nativeTextField;
@property(retain) NSString * autocapitalizationType;
@property(retain) NSString * autocorrectionType;
@property(retain) NSString * keyboardType;
@property(retain) NSString * placeholder;
@property(retain) WebScriptObject * shouldFocusFunction;
@property(readonly) NSString * style;
@property(retain) NSString * value;
@property(retain) NSNumber * width;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (BOOL)blur;
- (BOOL)focus;
- (void)setAutocorrectionType:(id)arg1;
- (void)_setWidth:(float)arg1;
- (float)_width;
- (id)value;
- (void)setKeyboardType:(id)arg1;
- (id)width;
- (void)setValue:(id)arg1;
- (void)setAutocapitalizationType:(id)arg1;
- (id)autocorrectionType;
- (void)setStyle:(id)arg1;
- (id)autocapitalizationType;
- (id)keyboardType;
- (BOOL)_becomeFirstResponder;
- (BOOL)_resignFirstResponder;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (id)style;
- (void)setWidth:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_copyValue;
- (id)attributeKeys;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)nativeTextField;
- (void)setNativeTextField:(id)arg1;
- (id)buttonItem;
- (void)setShouldFocusFunction:(id)arg1;
- (id)shouldFocusFunction;
- (id)_autocapitalizationType;
- (id)_autocorrectionType;
- (id)_copyPlaceholder;
- (id)_copyShouldFocusFunction;
- (id)_keyboardType;
- (void)_setAutocapitalizationType:(id)arg1;
- (void)_setAutocorrectionType:(id)arg1;
- (void)_setKeyboardType:(id)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_setShouldFocusFunction:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_boxedNativeTextField;
- (BOOL)_canBecomeFirstResponder;
- (float)_defaultWidth;
- (id)_newTextField;
- (BOOL)_styleIsValid:(id)arg1;
- (id)scriptAttributeKeys;
- (id)_className;

@end
