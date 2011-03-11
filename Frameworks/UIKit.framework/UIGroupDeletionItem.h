/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexSet;

@interface UIGroupDeletionItem : NSObject  {
    unsigned int _lastIndex;
    int _group;
    NSIndexSet *_indexes;
}


- (id)initWithGroup:(int)arg1;
- (id)initWithGroup:(int)arg1 andIndexes:(id)arg2;
- (id)initWithIndexes:(id)arg1 inGroup:(int)arg2;
- (int)group;
- (id)indexes;
- (unsigned int)lastIndex;
- (void)setLastIndex:(unsigned int)arg1;
- (void)dealloc;

@end
