/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper  {
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;

- (id)styleMatrix;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)diagram;
- (id)identifierFromLayoutTypeId:(id)arg1;
- (id)createDiagramMapperForId:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
