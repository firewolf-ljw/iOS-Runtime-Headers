/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, ABItemLabelPicker, ABPropertyGroup;

@interface ABLabelPickerViewController : ABPickerViewController  {
    NSArray *_additionalLabels;
    NSString *_selectedLabel;
    void *_addressBook;
    ABPropertyGroup *_propertyGroup;
    int _itemIndex;
    ABItemLabelPicker *_labelPicker;
    BOOL _didCreateNewLabel;
}

@property BOOL didCreateNewLabel;
@property(retain) NSString * selectedLabel;


- (void)loadView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(int)arg3 additionalLabels:(id)arg4;
- (float)ab_heightToFitForViewInPopoverView;
- (BOOL)didCreateNewLabel;
- (struct CGSize { float x1; float x2; })fullScreenContentSize;
- (id)labelPicker;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3;
- (BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (void)setDidCreateNewLabel:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)setSelectedLabel:(id)arg1;
- (id)selectedLabel;

@end
