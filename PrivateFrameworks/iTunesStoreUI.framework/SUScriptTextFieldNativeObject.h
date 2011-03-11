/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITextField, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(readonly) UITextField * textField;


- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)dealloc;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;

@end
