/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString;

@interface GKScore : NSObject <NSCoding> {
    long long _value;
    NSString *_formattedValue;
    NSString *_category;
    NSDate *_date;
    NSString *_playerID;
    int _rank;
    BOOL _fakeScore;
}

@property BOOL fakeScore;
@property int rank;
@property(retain) NSString * playerID;
@property(retain) NSDate * date;
@property(retain) NSString * category;
@property(retain) NSString * formattedValue;
@property long long value;


- (void)setPlayerID:(id)arg1;
- (BOOL)fakeScore;
- (void)reportScoreWithCompletionHandler:(id)arg1;
- (void)setFakeScore:(BOOL)arg1;
- (void)setFormattedValue:(id)arg1;
- (id)formattedValue;
- (id)category;
- (id)initWithCategory:(id)arg1;
- (id)playerID;
- (void)setCategory:(id)arg1;
- (id)date;
- (long long)value;
- (void)setDate:(id)arg1;
- (void)setValue:(long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (int)rank;
- (void)setRank:(int)arg1;

@end
