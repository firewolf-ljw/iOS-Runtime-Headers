/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMOutlineState : NSObject  {
    int counter[10];
    int listId;
}


- (void)reset;
- (id)init;
- (int)listId;
- (id)initWithListId:(int)arg1;
- (void)setCounterTo:(int)arg1 atLevel:(int)arg2;
- (void)increaseCounterAtLevel:(int)arg1;
- (int)counterAtLevel:(int)arg1;

@end
