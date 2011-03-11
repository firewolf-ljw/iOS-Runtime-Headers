/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptoKey;

@interface SFUCommonCryptoCryptor : SFUCryptor  {
    int mOperation;
    SFUCryptoKey *mKey;
    struct _CCCryptor { } *mCryptor;
    unsigned int mBlockSize;
    BOOL mFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    unsigned int mOutputBufferAvailable;
}


- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(unsigned int*)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned int*)arg5 error:(id*)arg6;

@end
