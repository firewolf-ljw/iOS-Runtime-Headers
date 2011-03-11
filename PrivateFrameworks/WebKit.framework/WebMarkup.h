/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WAKWindow, WebView, DOMDocument, DOMElement;

@interface WebMarkup : NSObject  {
    WebView *_webView;
    DOMDocument *_doc;
    WAKWindow *_window;
    DOMElement *_textElement;
    DOMElement *_sizeElement;
    struct CGContext { } *_graphicsContext;
    struct CGPoint { 
        float x; 
        float y; 
    } _stringDrawingOrigin;
}

+ (BOOL)isSharedMarkupCreated;
+ (id)sharedWebMarkup;

- (id)_styleFormatString:(id)arg1;
- (BOOL)_webPrepareContextForTextDrawing:(BOOL)arg1;
- (void)_setupWithStyle:(id)arg1 width:(float)arg2 height:(float)arg3;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 withStyle:(id)arg3;
- (void)drawString:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)drawMarkup:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)drawMarkup:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })sizeOfString:(id)arg1 withStyle:(id)arg2 forWidth:(float)arg3;
- (struct CGSize { float x1; float x2; })sizeOfMarkup:(id)arg1 forWidth:(float)arg2;
- (void)setStringDrawingOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearStringDrawingOrigin;
- (id)init;
- (void)dealloc;
- (id)_webView;

@end
