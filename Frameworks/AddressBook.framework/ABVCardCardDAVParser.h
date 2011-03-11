/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser  {
    NSMutableDictionary *_unknownAttributes;
    unsigned int _existingRecordType;
}


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)genericLabel;
- (id)defaultLabel;
- (id)defaultADRLabel;
- (id)defaultURLLabel;
- (BOOL)parseUID;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)importToPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)importToGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned int*)arg2;

@end
