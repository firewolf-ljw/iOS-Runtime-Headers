/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, NSString, DOMDocument, UIView<UITextSelectingContainer>;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
    DOMDocument *_document;
    DOMHTMLElement *_textElement;
    DOMHTMLElement *_sizeElement;
    NSString *_initialText;
    NSString *_currentStyle;
    UIView<UITextSelectingContainer> *_proxiedView;
    unsigned int _baseWritingDirectionIsRTL : 1;
    unsigned int _changingView : 1;
    unsigned int _disableNotifications : 1;
    unsigned int _delegateRespondsToFieldEditorDidChange : 1;
    unsigned int _delegateRespondsToShouldInsertText : 1;
    unsigned int _delegateRespondsToShouldReplaceWithText : 1;
    unsigned int _fieldEditorReentrancyGuard : 1;
    unsigned int _isResigningFirstResponder : 1;
    unsigned int _mouseWasDragged : 1;
    unsigned int _reserved : 21;
}

@property struct CGPoint { float x; float y; } autoscrollContentOffset;

+ (id)activeFieldEditor;
+ (void)releaseSharedInstance;
+ (id)sharedFieldEditor;
+ (void)_initializeSafeCategory;

- (BOOL)notificationsDisabled;
- (void)setNotificationsDisabled:(BOOL)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)autoscrollWillNotStart;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (id)textColorForCaretSelection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)_textSelectingContainer;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)automaticallySelectedOverlay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (id)selectionView;
- (void)_selectNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (id)sizeStyleForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTextElementStyle:(id)arg1;
- (void)_setTextElementString:(id)arg1;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (int)scrollXOffset;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)scrollToMakeInlineHoleVisible;
- (void)webViewDidChange:(id)arg1;
- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (void)resumeWithNotification:(id)arg1;
- (id)customOverlayContainer;
- (BOOL)mouseEventsChangeSelection;
- (id)interactionAssistant;
- (void)updateAutoscroll:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (void)becomeFieldEditorForView:(id)arg1;
- (int)scrollYOffset;
- (void)setStyle:(id)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)revealSelection;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setCaretColor:(id)arg1;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)selectAll;
- (BOOL)hasMarkedText;
- (void)selectionChanged;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)style;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSize;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (id)text;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)proxiedView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;

@end
