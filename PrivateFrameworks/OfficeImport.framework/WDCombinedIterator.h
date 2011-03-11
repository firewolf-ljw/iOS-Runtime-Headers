/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDIterator;

@interface WDCombinedIterator : WDIterator  {
    WDIterator *mParentIterator;
    WDIterator *mChildIterator;
}

@property(retain) WDIterator * childIterator;


- (void)dealloc;
- (id)childIterator;
- (void)setChildIterator:(id)arg1;
- (void)incrementChildIterator;
- (BOOL)hasNext;
- (id)initWithParentIterator:(id)arg1;
- (id)childIteratorFrom:(id)arg1;
- (id)newChildIteratorFrom:(id)arg1;
- (id)next;

@end
