/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteData : NSData  {
    unsigned int _isInline : 1;
    unsigned int _shouldFree : 1;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned int _length;
    unsigned int _capacity;
    void *_bytes;
    unsigned char _space[12];
}


- (void)finalize;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (const void*)bytes;
- (unsigned int)length;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)_bytesAreVM;
- (void)getBytes:(void*)arg1;

@end
