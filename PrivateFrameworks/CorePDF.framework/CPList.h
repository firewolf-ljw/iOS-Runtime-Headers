/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    struct __CFArray { } *items;
}

@property(retain) CPListItem * parentItem;
@property unsigned int ordinalSuffixLength;
@property unsigned int ordinalPrefixLength;
@property int type;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } spacer;


- (void)dispose;
- (void)addItem:(id)arg1;
- (int)type;
- (void)finalize;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setParentItem:(id)arg1;
- (id)parentItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spacer;
- (void)setSpacer:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (BOOL)containsParagraph:(id)arg1;
- (unsigned int)ordinalPrefixLength;
- (unsigned int)ordinalSuffixLength;
- (BOOL)isMultilevel;
- (unsigned int)itemCount;
- (id)itemAtIndex:(unsigned int)arg1;

@end
