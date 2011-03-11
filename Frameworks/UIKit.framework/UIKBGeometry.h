/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    struct { 
        float amount; 
        int unit; 
    } m_x;
    struct { 
        float amount; 
        int unit; 
    } m_y;
    struct { 
        float amount; 
        int unit; 
    } m_w;
    struct { 
        float amount; 
        int unit; 
    } m_h;
    struct { 
        float amount; 
        int unit; 
    } m_paddingTop;
    struct { 
        float amount; 
        int unit; 
    } m_paddingLeft;
    struct { 
        float amount; 
        int unit; 
    } m_paddingBottom;
    struct { 
        float amount; 
        int unit; 
    } m_paddingRight;
    BOOL m_explicit;
}

@property BOOL explicit;
@property(setter=setPaddingRight:) struct { float amount; int unit; } paddingRight;
@property(setter=setPaddingBottom:) struct { float amount; int unit; } paddingBottom;
@property(setter=setPaddingLeft:) struct { float amount; int unit; } paddingLeft;
@property(setter=setPaddingTop:) struct { float amount; int unit; } paddingTop;
@property(setter=setH:) struct { float amount; int unit; } h;
@property(setter=setW:) struct { float amount; int unit; } w;
@property(setter=setY:) struct { float amount; int unit; } y;
@property(setter=setX:) struct { float amount; int unit; } x;
@property(retain) NSString * name;

+ (id)geometryWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)geometry;

- (id)initWithName:(id)arg1 rect:(struct { struct { float x_1_1_1; int x_1_1_2; } x1[4]; })arg2 padding:(struct { struct { float x_1_1_1; int x_1_1_2; } x1[4]; })arg3;
- (void)setX:(struct { float x1; int x2; })arg1;
- (void)setY:(struct { float x1; int x2; })arg1;
- (void)setW:(struct { float x1; int x2; })arg1;
- (void)setH:(struct { float x1; int x2; })arg1;
- (void)setExplicit:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)explicit;
- (void)setPaddingRight:(struct { float x1; int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct { float x1; int x2; })w;
- (struct { float x1; int x2; })x;
- (struct { float x1; int x2; })y;
- (struct { float x1; int x2; })h;
- (void)setName:(id)arg1;
- (void)setPaddingLeft:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })paddingLeft;
- (void)setPaddingTop:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })paddingTop;
- (void)setPaddingBottom:(struct { float x1; int x2; })arg1;
- (struct { float x1; int x2; })paddingBottom;
- (struct { float x1; int x2; })paddingRight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
