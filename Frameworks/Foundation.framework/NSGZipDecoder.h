/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _stream;
    unsigned int _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}

+ (id)MIMEType;
+ (BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned int*)arg3 filename:(id*)arg4;
+ (BOOL)canDecodeDownloadHeaderData:(id)arg1;

- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)fileAttributes;
- (id)decodeData:(id)arg1;
- (BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3;
- (BOOL)isFinishedDecoding;
- (BOOL)finishDownloadDecoding;
- (id)filenameWithOriginalFilename:(id)arg1;

@end
