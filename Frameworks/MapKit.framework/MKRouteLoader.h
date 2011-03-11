/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MKTilePathArray;

@interface MKRouteLoader : NSObject  {
    MKTilePathArray *_tilePaths;
    struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; } *_requester;
    id _delegate;
    unsigned int _loadingCount;
    BOOL _isLoading;
}

@property id delegate;

+ (unsigned int)maxTilesToPreload;

- (void)stopLoading;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)tileRequester:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1 failedWithError:(id)arg2;
- (void)tileRequesterProgress:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (void)_checkLoading;
- (void)tileRequesterCompleted:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (id)initWithTiles:(id)arg1;
- (void)startLoading;
- (void)_setLoading:(BOOL)arg1;

@end
