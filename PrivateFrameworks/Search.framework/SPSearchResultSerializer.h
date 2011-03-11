/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchResultSerializer : PBDataWriter  {
    unsigned int _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    Class _lastResultClass;
    BOOL _respondsToResultDomain;
    BOOL _respondsToResultDisplayIdentifierUTF8String;
    BOOL _respondsToTitleUTF8String;
    BOOL _respondsToSubtitleUTF8String;
    BOOL _respondsToAuxiliaryTitleUTF8String;
    BOOL _respondsToAuxiliarySubtitleUTF8String;
    BOOL _respondsToSummaryUTF8String;
    BOOL _respondsToIdentifier;
    BOOL _respondsToURL;
    BOOL _respondsToDate;
    BOOL _respondsToBadgeValue;
    BOOL _inProc;
}


- (id)init;
- (void)dealloc;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned int)byteVector;
- (unsigned int)byteVectorCount;
- (BOOL)appendResult:(id)arg1;
- (id)initForDomain:(int)arg1 andDisplayIdentifier:(id)arg2 andCategory:(id)arg3 withInitialCapacity:(unsigned int)arg4;
- (id)initForDomain:(int)arg1 andDisplayIdentifier:(id)arg2 withInitialCapacity:(unsigned int)arg3;
- (void)writeCString:(const char *)arg1 forTag:(unsigned short)arg2;
- (id)initForDomain:(int)arg1 andDisplayIdentifier:(id)arg2 andCategory:(id)arg3 withInitialCapacity:(unsigned int)arg4 inProc:(BOOL)arg5;
- (unsigned int)_allocateSize:(unsigned int)arg1;

@end
