/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIScrollView, CKAtomListView, UIImageView;

@interface CKRecipientListView : UIView <CKOverlayViewProtocol> {
    UIScrollView *_recipientScrollView;
    CKAtomListView *_toField;
    UIImageView *_recipientSeparatorShadow;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    id _delegate;
}

@property(readonly) struct CGSize { float width; float height; } contentSize;
@property id delegate;


- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toFieldRecipients:(id)arg2 delegate:(id)arg3;
- (void)addressAtomClicked:(id)arg1;
- (void)_clearToField;
- (void)_adjustContentSize;
- (void)_setupToFieldWithRecipients:(id)arg1;
- (void)atomListView:(id)arg1 sizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (float)heightWithoutSeparator;

@end
