/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UINibStringIDTable : NSObject  {
    struct UIStringIDTableBucket {} **table;

  /* Error parsing encoded ivar type info: ^{UIStringIDTableBucket=@"NSString"I^{UIStringIDTableBucket}} */
    struct UIStringIDTableBucket { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const int x6; in void*x7; void*x8; unsigned int x9; struct UIStringIDTableBucket {} *x10; } *buckets;

    unsigned int hashMask;
    unsigned int count;
}


- (BOOL)lookupKey:(id)arg1 identifier:(int*)arg2;
- (id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (int)count;

@end
