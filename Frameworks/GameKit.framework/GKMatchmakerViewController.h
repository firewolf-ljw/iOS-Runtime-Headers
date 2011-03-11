/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKMatchmakerViewControllerPrivate, GKMatchRequest, <GKMatchmakerViewControllerDelegate>;

@interface GKMatchmakerViewController : UINavigationController  {
    GKMatchmakerViewControllerPrivate *_privateViewController;
}

@property(getter=isHosted) BOOL hosted;
@property(retain,readonly) GKMatchRequest * matchRequest;
@property <GKMatchmakerViewControllerDelegate> * matchmakerDelegate;
@property(retain) GKMatchmakerViewControllerPrivate * privateViewController;


- (id)matchmakerDelegate;
- (id)matchRequest;
- (id)initWithPrivateViewController:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (void)setHostedPlayerReady:(id)arg1;
- (id)privateViewController;
- (void)setPrivateViewController:(id)arg1;
- (BOOL)isHosted;
- (void)setHosted:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;

@end
