/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMDrawableMapper : CMDrawableMapper  {
    double *mRowGrid;
    double *mColumnGrid;
}

+ (BOOL)isAnchorRelative:(id)arg1;

- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 parent:(id)arg3;
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3;
- (void)setBoundingBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getImageRect;
- (struct CGPoint { float x1; float x2; })anchorMarkerToPosition:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 start:(BOOL)arg4 relative:(BOOL)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapAnchorToRect:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3;
- (id)worksheetMapper;
- (id)workbookMapper;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;

@end
