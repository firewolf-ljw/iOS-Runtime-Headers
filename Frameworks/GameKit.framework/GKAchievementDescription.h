/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding> {
    NSString *_identifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    int _pointMax;
    BOOL _hidden;
    NSString *_imageURL;
    UIImage *_image;
}

@property(retain) UIImage * image;
@property(retain) NSString * imageURL;
@property(getter=isHidden) BOOL hidden;
@property int maximumPoints;
@property(retain) NSString * unachievedDescription;
@property(retain) NSString * achievedDescription;
@property(retain) NSString * title;
@property(retain) NSString * identifier;

+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (id)incompleteAchievementImage;
+ (id)placeholderCompletedAchievementImage;

- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)setMaximumPoints:(int)arg1;
- (id)unachievedDescription;
- (void)setUnachievedDescription:(id)arg1;
- (void)setAchievedDescription:(id)arg1;
- (int)maximumPoints;
- (id)achievedDescription;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)image;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isHidden;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;

@end
