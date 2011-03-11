/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, NSArray, ABPersonTableTinyActionCell, NSMutableArray;

@interface ABPersonTableTinyActionCellContentView : UIView  {
    NSMutableArray *_actions;
    NSMutableArray *_buttons;
    UIButton *_highlightedButton;
    ABPersonTableTinyActionCell *_cell;
}

@property(readonly) NSArray * actions;
@property ABPersonTableTinyActionCell * cell;


- (id)cell;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setCell:(id)arg1;
- (void)unhighlight;
- (id)actions;
- (void)refreshActions;

@end
