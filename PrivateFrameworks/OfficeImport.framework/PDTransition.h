/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;

@interface PDTransition : OADProperties  {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}


- (id)options;
- (int)type;
- (void)setType:(int)arg1;
- (int)speed;
- (id)init;
- (void)dealloc;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasAdvanceAfterTime;
- (int)advanceAfterTime;
- (BOOL)hasTransitionOptions;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (void)setSpeed:(int)arg1;
- (void)setAdvanceAfterTime:(int)arg1;
- (void)setOptions:(id)arg1;
- (BOOL)hasType;

@end
