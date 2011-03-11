/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString, NSDate, NSNumber, NSURL;

@interface SPSearchResult : NSObject <SPSearchResult, SPSearchResultCursor> {
    int _domain;
    int _resultDomain;
    NSString *_resultDisplayIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_auxiliaryTitle;
    NSString *_auxiliarySubtitle;
    unsigned long long _identifier;
    NSURL *_URL;
    NSDate *_date;
    NSNumber *_badge;
}

@property int domain;
@property int resultDomain;
@property(retain) NSString * resultDisplayIdentifier;
@property(retain) NSString * title;
@property(retain) NSString * subtitle;
@property(retain) NSString * summary;
@property(retain) NSString * auxiliaryTitle;
@property(retain) NSString * auxiliarySubtitle;
@property unsigned long long identifier;
@property(retain) NSURL * URL;
@property(retain) NSDate * date;
@property(copy) NSNumber * badge;


- (void)setDomain:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setURL:(id)arg1;
- (unsigned long long)identifier;
- (id)date;
- (id)URL;
- (id)subtitle;
- (void)setDate:(id)arg1;
- (unsigned int)hash;
- (void)setIdentifier:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (id)summary;
- (int)domain;
- (void)setSummary:(id)arg1;
- (BOOL)getBadgeValue:(float*)arg1;
- (const char *)URLUTF8String;
- (BOOL)getDateSinceReferenceDate:(double*)arg1;
- (const char *)resultDisplayIdentifierUTF8String;
- (void)setAuxiliaryTitle:(id)arg1;
- (void)setResultDomain:(int)arg1;
- (const char *)summaryUTF8String;
- (const char *)auxiliarySubtitleUTF8String;
- (const char *)subtitleUTF8String;
- (const char *)titleUTF8String;
- (id)auxiliarySubtitle;
- (id)auxiliaryTitle;
- (id)badge;
- (id)resultDisplayIdentifier;
- (void)setBadge:(id)arg1;
- (void)setAuxiliarySubtitle:(id)arg1;
- (void)setResultDisplayIdentifier:(id)arg1;
- (const char *)auxiliaryTitleUTF8String;
- (int)resultDomain;

@end
