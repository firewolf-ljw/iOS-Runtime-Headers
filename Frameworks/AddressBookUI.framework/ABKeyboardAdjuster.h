/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject  {
    NSMutableSet *_adjustmentRecords;
    BOOL _active;
}

@property BOOL active;

+ (id)sharedAdjuster;

- (void)_keyboardWillHide:(id)arg1;
- (BOOL)active;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)recordForScrollView:(id)arg1;
- (void)cancelDelayedAdjustmentsForView:(id)arg1;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 force:(BOOL)arg2;
- (void)addScrollView:(id)arg1;
- (void)removeScrollView:(id)arg1;
- (BOOL)containsScrollView:(id)arg1;
- (BOOL)shouldForceAutomaticKeyboardForView:(id)arg1;
- (void)textFieldTextDidBeginEditingNotification:(id)arg1;
- (void)textFieldTextDidEndEditingNotification:(id)arg1;
- (void)textViewTextDidBeginEditingNotification:(id)arg1;
- (void)textViewTextDidEndEditingNotification:(id)arg1;
- (void)dateFieldDateDidBeginEditingNotification:(id)arg1;
- (void)dateFieldDateDidEndEditingNotification:(id)arg1;
- (void)resetAdjustment;

@end
