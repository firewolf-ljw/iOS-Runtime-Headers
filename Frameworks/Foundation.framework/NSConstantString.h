/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantString : NSSimpleCString  {
}


- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)finalize;
- (unsigned int)hash;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (const char *)cString;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (oneway void)release;
- (id)copy;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (unsigned int)length;
- (id)autorelease;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned int)fastestEncoding;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned int)arg2;
- (unsigned int)smallestEncoding;
- (BOOL)canBeConvertedToEncoding:(unsigned int)arg1;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const char *)lossyCString;
- (unsigned int)cStringLength;

@end
