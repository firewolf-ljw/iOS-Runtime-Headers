/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewItemPath : NSObject <NSCopying> {
    int _section;
    unsigned int _index;
}

@property(readonly) unsigned int index;
@property(readonly) int section;

+ (id)itemPathWithIndex:(unsigned int)arg1 inSection:(int)arg2;

- (int)section;
- (unsigned int)index;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIndex:(unsigned int)arg1 inSection:(int)arg2;

@end
