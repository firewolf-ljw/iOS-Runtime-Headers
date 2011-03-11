/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray, GKUITheme, NSMutableArray;

@interface GKCellBackgroundView : UIView  {
    GKUITheme *_theme;
    NSMutableArray *_backgroundDrawDescriptors;
    struct { 
        unsigned int drawSelected : 1; 
        unsigned int groupedTableViewStyle : 1; 
    } _gkViewFlags;
    int _backgroundStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _fillImagePhase;
    UIImage *_fillImage;
    BOOL _ignoreFillPhaseYOffset;
    unsigned int _columnCount;
    int _selectedColumn;
    unsigned int _cellCount;
    float _cellGapWidth;
    int _selectedCell;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderInsets;
}

@property BOOL grouped;
@property BOOL drawSelected;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } borderInsets;
@property int selectedCell;
@property float cellGapWidth;
@property unsigned int cellCount;
@property int selectedColumn;
@property unsigned int columnCount;
@property BOOL ignoreFillPhaseYOffset;
@property(retain) UIImage * fillImage;
@property struct CGSize { float width; float height; } fillImagePhase;
@property int backgroundStyle;
@property(retain) NSArray * backgroundDrawDescriptors;
@property(retain) GKUITheme * theme;

+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;
+ (id)buttonCellBackgroundWithTheme:(id)arg1;
+ (id)selectedButtonCellBackgroundWithTheme:(id)arg1;
+ (id)cellBackgroundWithTheme:(id)arg1;
+ (id)selectedCellBackgroundWithTheme:(id)arg1;
+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;

- (void)setSectionLocations:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillRectForCell:(unsigned int)arg1;
- (id)drawDescriptorForCellIndex:(int)arg1;
- (void)setSelectedColumn:(int)arg1;
- (int)selectedCell;
- (BOOL)drawSelected;
- (BOOL)grouped;
- (void)setGrouped:(BOOL)arg1;
- (void)updateContentStretchForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFillImagePhase:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasKnownLocations;
- (void)configureBorderImages;
- (void)setDrawSelected:(BOOL)arg1;
- (void)setCellCount:(unsigned int)arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_drawFourPartBorderImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_drawBorderOutlineInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellIndex:(int)arg2;
- (void)drawBorderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellIndex:(int)arg2;
- (BOOL)shouldDrawBorderAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillRectForColumn:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForCell:(unsigned int)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForCell:(unsigned int)arg1;
- (struct CGPath { }*)pathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3;
- (struct CGPath { }*)fillPathForCell:(unsigned int)arg1;
- (struct CGPath { }*)fillPathForColumn:(unsigned int)arg1;
- (void)setSelectedCell:(int)arg1;
- (float)cellGapWidth;
- (void)setCellGapWidth:(float)arg1;
- (int)selectedColumn;
- (BOOL)ignoreFillPhaseYOffset;
- (void)setIgnoreFillPhaseYOffset:(BOOL)arg1;
- (id)fillImage;
- (struct CGSize { float x1; float x2; })fillImagePhase;
- (id)backgroundDrawDescriptors;
- (void)setBackgroundDrawDescriptors:(id)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (int)backgroundStyle;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg1;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)cellCount;
- (id)theme;
- (void)setTheme:(id)arg1;
- (void)setFillImage:(id)arg1;
- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;

@end
