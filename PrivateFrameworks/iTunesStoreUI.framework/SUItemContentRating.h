/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSItemArtworkImage, NSString, NSDictionary;

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary *_dictionary;
    int _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    int _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    BOOL _shouldHideWhenRestricted;
}

@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property(getter=isRestricted,readonly) BOOL restricted;
@property BOOL shouldHideWhenRestricted;
@property(copy) SSItemArtworkImage * ratingSystemLogo;
@property int ratingSystem;
@property(copy) NSString * ratingLabel;
@property(copy) NSString * ratingDescription;
@property int rank;

+ (int)ratingSystemFromString:(id)arg1;

- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)rank;
- (void)setRank:(int)arg1;
- (BOOL)isExplicitContent;
- (id)ratingDescription;
- (int)ratingSystem;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (id)ratingSystemLogo;
- (void)setRatingSystemLogo:(id)arg1;
- (void)setRatingSystem:(int)arg1;
- (id)ratingLabel;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingDescription:(id)arg1;
- (BOOL)shouldHideWhenRestricted;
- (BOOL)isRestricted;

@end
