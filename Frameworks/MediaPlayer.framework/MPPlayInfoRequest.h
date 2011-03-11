/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPMediaItem, SSPlayInfoRequest, MPAirPlayVideoService;

@interface MPPlayInfoRequest : NSObject  {
    MPMediaItem *_mediaItem;
    SSPlayInfoRequest *_playInfoRequest;
    MPAirPlayVideoService *_airVideoService;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}


- (void)dealloc;
- (void)_sendCompletionHandlerWithError:(id)arg1;
- (id)initWithAirVideoService:(id)arg1 mediaItem:(id)arg2;
- (void)startWithCompletionHandler:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
