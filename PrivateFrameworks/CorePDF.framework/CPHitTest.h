/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject  {
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}


- (void)dealloc;
- (id)initWithPage:(id)arg1;
- (id)paragraph:(struct CGPoint { float x1; float x2; })arg1;
- (id)paragraphNear:(struct CGPoint { float x1; float x2; })arg1;
- (id)layoutArea:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)columnsAt:(struct CGPoint { float x1; float x2; })arg1;
- (id)column:(struct CGPoint { float x1; float x2; })arg1;
- (id)textLine:(struct CGPoint { float x1; float x2; })arg1;
- (id)objectAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)compareByReadingOrder:(struct CGPoint { float x1; float x2; })arg1 to:(struct CGPoint { float x1; float x2; })arg2;
- (void)findClickableObjects:(BOOL)arg1;
- (BOOL)hitTestGraphicObject:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)hitTestParagraph:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (id)findBestMatch:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)findObjectIn:(id)arg1 at:(struct CGPoint { float x1; float x2; })arg2 count:(int*)arg3;
- (id)page;

@end
