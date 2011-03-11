/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKLeaderboardCellBackgroundView : GKCellBackgroundView  {
    NSArray *_leaderboardCellStyles;
    NSArray *_rankWidths;
}

@property(retain) NSArray * rankWidths;
@property(retain) NSArray * leaderboardCellStyles;

+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;
+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;

- (id)rankWidths;
- (float)_rankWidthForCellIndex:(int)arg1;
- (void)setRankWidths:(id)arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLeaderboardStyle:(int)arg2 cellIndex:(int)arg3;
- (id)leaderboardCellStyles;
- (void)updateContentStretchForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPath { }*)fillPathForCell:(unsigned int)arg1;
- (void)setLeaderboardCellStyles:(id)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
