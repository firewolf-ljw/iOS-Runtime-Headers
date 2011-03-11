/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPathStore2 : NSString  {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)arg1;
+ (id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;

- (id)stringByResolvingSymlinksInPath;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)stringByDeletingPathExtension;
- (id)pathComponents;
- (BOOL)isAbsolutePath;
- (id)stringByDeletingLastPathComponent;
- (id)pathExtension;
- (unsigned int)hash;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)lastPathComponent;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)length;
- (id)stringByAppendingPathComponent:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)stringByStandardizingPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)stringByExpandingTildeInPath;

@end
