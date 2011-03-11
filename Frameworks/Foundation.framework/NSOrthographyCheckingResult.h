/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSOrthography *_orthography;
}


- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 orthography:(id)arg2;
- (id)orthography;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (BOOL)_adjustRangesWithOffset:(int)arg1;

@end
