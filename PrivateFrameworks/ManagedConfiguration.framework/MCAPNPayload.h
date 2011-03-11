/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray;

@interface MCAPNPayload : MCPayload  {
    NSArray *_apnInfos;
    BOOL _wasInstalled;
}

@property BOOL wasInstalled;

+ (id)apnDomainName;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (BOOL)wasInstalled;
- (id)_validationErrorType:(int)arg1 forInvalidKey:(id)arg2;
- (BOOL)_checkForValidContents:(id)arg1 outError:(id*)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)apnDefaults;
- (id)_strippedAPNDefaults;
- (void)setWasInstalled:(BOOL)arg1;
- (id)subtitle1Description;
- (id)subtitle2Description;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;

@end
