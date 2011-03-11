/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIView;

@interface UI9PartImageView : UIView  {
    UIView *_topLeft;
    UIView *_topMiddle;
    UIView *_topRight;
    UIView *_middleLeft;
    UIView *_middleMiddle;
    UIView *_middleRight;
    UIView *_bottomLeft;
    UIView *_bottomMiddle;
    UIView *_bottomRight;
    struct { 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } left; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } middle; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } right; 
        } top; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } left; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } middle; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } right; 
        } middle; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } left; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } middle; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } right; 
        } bottom; 
    } _slices;
    UIImage *_image;
    unsigned int _dontReflow : 1;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 slices:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg3;
- (void)rebuildTiles;
- (void)reflowTiles;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
