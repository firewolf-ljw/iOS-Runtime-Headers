/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, NSDate, GKPlayer;

@interface GKGameMatch : NSObject  {
    GKPlayer *_player;
    GKGame *_game;
    NSDate *_date;
    int _score;
}

@property int score;
@property(retain) NSDate * date;
@property(retain) GKGame * game;
@property(retain) GKPlayer * player;

+ (id)gameMatchWithDictionary:(id)arg1;
+ (id)gameMatchesWithDictionaries:(id)arg1;

- (id)game;
- (int)score;
- (void)setPlayer:(id)arg1;
- (void)setScore:(int)arg1;
- (id)player;
- (void)setGame:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (void)dealloc;

@end
