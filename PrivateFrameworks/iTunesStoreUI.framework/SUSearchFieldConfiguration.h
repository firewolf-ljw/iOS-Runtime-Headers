/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {
    NSString *_cancelString;
    struct __CFDictionary { } *_hintURLs;
    int _location;
    NSString *_placeholder;
    BOOL _rootViewOnly;
    struct __CFDictionary { } *_searchURLs;
    NSString *_userDefaultsKey;
    float _width;
}

@property(readonly) float width;
@property(readonly) NSString * userDefaultsKey;
@property(getter=isRootViewOnly,readonly) BOOL rootViewOnly;
@property(readonly) NSString * placeholderString;
@property(readonly) int location;
@property(readonly) NSString * cancelString;

+ (id)defaultConfiguration;

- (float)width;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)location;
- (id)cancelString;
- (id)searchURLRequestPropertiesForNetworkType:(int)arg1;
- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(int)arg2;
- (id)_initWithoutDictionary;
- (int)_locationForString:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(int)arg1;
- (struct __CFDictionary { }*)_newURLsDictionaryWithDictionary:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(int)arg2;
- (id)userDefaultsKey;
- (id)placeholderString;
- (void)loadFromDictionary:(id)arg1;
- (id)hintsURLRequestPropertiesForNetworkType:(int)arg1;
- (BOOL)isRootViewOnly;

@end
