/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;
@property(readonly) struct __SecCertificate { }* certificateFromData;

+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)data;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithRandomBytes:(unsigned int)arg1;
+ (id)dataWithCertificate:(struct __SecCertificate { }*)arg1;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)isEqualToData:(id)arg1;
- (Class)classForCoder;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)hash;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const void*)bytes;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)length;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)_asciiDescription;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64Encoding;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)_bytesAreVM;
- (void)getBytes:(void*)arg1;
- (unsigned long)_cfTypeID;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)isNSData__;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_parseRFC822HeaderFields;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)abDecodedUTF7;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (id)abEncodeBase64DataBreakLines:(BOOL)arg1 allowSlash:(BOOL)arg2 padChar:(BOOL)arg3;
- (id)abDecodeVCardBase64;
- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)_webkit_parseRFC822HeaderFields;
- (BOOL)_web_startsWithBlankLine;
- (int)_web_locationAfterFirstBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)sha1Digest;
- (id)base64Encoded;
- (id)md5Digest;
- (id)hexStringValue;
- (id)base64Decoded;
- (id)MCHexString;
- (id)decompressedGzipData;
- (id)hexString;
- (id)hexStringOfBytes:(char *)arg1 withLength:(int)arg2;
- (id)SHA1HexString;
- (id)CRAM_MD5DataWithKey:(id)arg1;
- (id)CRAM_MD5HexStringWithKey:(id)arg1;
- (id)SHA1Data;
- (struct __SecCertificate { }*)certificateFromData;
- (id)_FTGzippedData;
- (id)_FTDecompressData;
- (id)_FTCompressData;
- (id)aa_verifiedData;
- (id)aa_signedData;
- (id)copyHexDescription;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)mf_immutable;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_decodeBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeBase64;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_encodeBase64HeaderData;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)mf_copyHexString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (int)CDXTicketPID;
- (id)CDXTicketExpirationDate;
- (unsigned int)CDXTicketRevision;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsStub;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (BOOL)CDXTicketWellFormed;
- (int)CDXTicketPCNT;
- (unsigned long long)CDXTicketSID;
- (id)hexString;
- (id)lowercaseHexStringWithoutSpaces;
- (id)uppercaseHexStringWithoutSpaces;
- (id)mf_MD5Digest;
- (id)_iad_truncatedDescription;
- (id)_adlib_inflate:(unsigned int)arg1;
- (id)webSafeBase64Data;

@end
