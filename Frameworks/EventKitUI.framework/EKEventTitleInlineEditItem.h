/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIResponder, UITableViewCell;

@interface EKEventTitleInlineEditItem : EKEventEditItem <UITextFieldDelegate> {
    UITableViewCell *_titleCell;
    UITableViewCell *_locationCell;
    UIResponder *_selectedTextField;
}

@property(retain) UIResponder * selectedResponder;


- (void)reset;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)dealloc;
- (id)selectedTextField;
- (id)_makeCell:(int)arg1;
- (id)selectedResponder;
- (void)setSelectedResponder:(id)arg1;
- (int)numberOfSubitems;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (BOOL)isInline;

@end
