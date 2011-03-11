/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSURL, AVFileValidator;

@interface MPMovieInternal : NSObject  {
    MPAVItem *_item;
    NSURL *_url;
    AVFileValidator *_fileValidator;
    int _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    BOOL _explicitlySetMovieSourceType;
    BOOL _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize { 
        float width; 
        float height; 
    } _lastKnownNaturalSize;
    unsigned int _lastKnownType;
}



@end
