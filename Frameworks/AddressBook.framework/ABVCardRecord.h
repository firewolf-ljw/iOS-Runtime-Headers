/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardRecord : NSObject  {
    void *_record;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { }*)supportedProperties;
+ (BOOL)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (void)clearPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)arg1;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (BOOL)includeNotesInVCards;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (BOOL)includePhotosInVCards;

- (BOOL)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)vCardRepresentationForMode:(int)arg1;
- (BOOL)_showField:(unsigned int)arg1;
- (BOOL)_showField:(unsigned int)arg1 identifier:(int)arg2;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(BOOL)arg2;
- (struct __CFString { }*)_vCardKeyForGenericLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (struct __CFString { }*)_vCardKeyForEmailLabel:(id)arg1;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (id)newISO8061StringFromDate:(id)arg1;
- (id)ISO8061StringFromDate:(id)arg1;
- (void*)copyValueForProperty:(unsigned int)arg1;
- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(BOOL)arg3 groupCount:(int*)arg4;
- (id)propertyLineForInstantMessageHandles:(id)arg1 groupCount:(int*)arg2;
- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)dataForInstantMessageProperties;
- (id)encodedLineForValue:(id)arg1;
- (id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (BOOL)_isCompany;
- (id)_fullName;
- (id)_realCompositeName;
- (id)_21vCardRepresentationAsData;
- (BOOL)useThumbnailImageFormatIfAvailable;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1 withPhoto:(id)arg2;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1;
- (id)imageData;
- (id)alternateName;
- (void*)record;
- (id)initWithRecord:(void*)arg1;

@end
