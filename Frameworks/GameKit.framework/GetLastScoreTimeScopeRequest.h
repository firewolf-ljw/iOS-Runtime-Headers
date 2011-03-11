/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, GKGame;

@interface GetLastScoreTimeScopeRequest : GKDataRequest  {
    GKGame *_game;
    GKPlayer *_player;
    int _timeScope;
}

@property(readonly) int timeScope;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;


- (int)timeScope;
- (int)cacheType;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)game;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setGame:(id)arg1;
- (id)cacheKey;
- (id)key;
- (id)request;
- (void)dealloc;

@end
