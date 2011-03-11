/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDate, ABDateField;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {
    ABDateField *_dateField;
}

@property(readonly) NSDate * date;

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (id)date;
- (void)reload;
- (void)dealloc;
- (BOOL)dateFieldShouldReturn:(id)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (id)viewForFirstResponder;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)dateFieldShouldClear:(id)arg1;
- (void)dateFieldDateDidChange:(id)arg1;
- (BOOL)dateFieldShouldBeginEditing:(id)arg1;
- (void)dateFieldDidBeginEditing:(id)arg1;
- (BOOL)dateFieldShouldEndEditing:(id)arg1;
- (void)dateFieldDidEndEditing:(id)arg1;
- (void)reloadFromModel;
- (void)setUpdateDelegate:(id)arg1;
- (void)setAbCellStyle:(int)arg1;

@end
