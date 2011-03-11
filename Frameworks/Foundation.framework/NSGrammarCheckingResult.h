/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSArray *_details;
}


- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 details:(id)arg2;
- (id)grammarDetails;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (BOOL)_adjustRangesWithOffset:(int)arg1;

@end
