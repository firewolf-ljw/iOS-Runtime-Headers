/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPGraphicObject;

@interface CPTableCell : CPChunk <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } cellBounds;
    struct { 
        int location; 
        int length; 
    } rowSpan;
    struct { 
        int location; 
        int length; 
    } columnSpan;
    struct { struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x1; struct CGColor {} *x2; unsigned int x3; CPGraphicObject **x4; } *borders;
    struct CGColor { } *backgroundColor;
    unsigned int backgroundGraphicCount;
    CPGraphicObject **backgroundGraphics;
}

@property(readonly) unsigned int backgroundGraphicCount;
@property struct { int location; int length; } columnSpan;
@property struct { int location; int length; } rowSpan;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } cellBounds;


- (void)dispose;
- (void)finalize;
- (struct CGColor { }*)backgroundColor;
- (void)dealloc;
- (void)setRowSpan:(struct { int x1; int x2; })arg1;
- (struct { int x1; int x2; })rowSpan;
- (struct { int x1; int x2; })columnSpan;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBorder:(int)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 graphics:(id)arg3;
- (unsigned int)graphicCountOfBorder:(int)arg1;
- (id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned int)arg2;
- (int)compareCellOrdinal:(id)arg1;
- (void)setColumnSpan:(struct { int x1; int x2; })arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (unsigned int)backgroundGraphicCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfBorder:(int)arg1;
- (struct CGColor { }*)colorOfBorder:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cellBounds;

@end
