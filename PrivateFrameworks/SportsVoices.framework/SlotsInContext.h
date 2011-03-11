/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotSequence, SimpleSlotSequence;

@interface SlotsInContext : NSObject  {
    SlotSequence *_preContext;
    SlotSequence *_preContextReversed;
    SimpleSlotSequence *_significantSlots;
    SlotSequence *_postContext;
}

@property(readonly) SimpleSlotSequence * significantSlots;

+ (id)slotsInContextWithSignificantSlotSequence:(id)arg1;
+ (id)test;
+ (id)instanceFromPlist:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)significantSlots;
- (id)initWithArraysForSignificantSlots:(id)arg1 preContext:(id)arg2 postContext:(id)arg3;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)initFromPlist:(id)arg1;

@end
