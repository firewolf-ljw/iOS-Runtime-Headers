/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSArray;

@interface WebEvent : NSObject  {
    int _type;
    double _timestamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    int _modifierFlags;
    BOOL _keyRepeating;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchGlobalLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}

@property(readonly) struct CGPoint { float x; float y; } locationInWindow;
@property(retain,readonly) NSString * characters;
@property(retain,readonly) NSString * charactersIgnoringModifiers;
@property(readonly) int modifierFlags;
@property(getter=isKeyRepeating,readonly) BOOL keyRepeating;
@property(readonly) unsigned short keyCode;
@property(getter=isTabKey,readonly) BOOL tabKey;
@property(readonly) int characterSet;
@property(readonly) float deltaX;
@property(readonly) float deltaY;
@property(readonly) unsigned int touchCount;
@property(retain,readonly) NSArray * touchLocations;
@property(retain,readonly) NSArray * touchGlobalLocations;
@property(retain,readonly) NSArray * touchIdentifiers;
@property(retain,readonly) NSArray * touchPhases;
@property(readonly) BOOL isGesture;
@property(readonly) float gestureScale;
@property(readonly) float gestureRotation;
@property(readonly) double timestamp;
@property(readonly) int type;


- (id)initWithTouchEventType:(int)arg1 withTimeStamp:(double)arg2 withLocation:(struct CGPoint { float x1; float x2; })arg3 withTouchCount:(unsigned int)arg4 withTouchLocations:(id)arg5 withTouchGlobalLocations:(id)arg6 withTouchIdentifiers:(id)arg7 withTouchPhases:(id)arg8 isGesture:(BOOL)arg9 withGestureScale:(float)arg10 withGestureRotation:(float)arg11;
- (id)_typeDescription;
- (id)touchPhases;
- (id)touchIdentifiers;
- (id)touchLocations;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (id)initWithMouseEventType:(int)arg1 withTimeStamp:(double)arg2 withLocation:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 withLocation:(struct CGPoint { float x1; float x2; })arg2 withDeltaX:(float)arg3 withDeltaY:(float)arg4;
- (int)type;
- (double)timestamp;
- (id)initWithKeyEventType:(int)arg1 withTimeStamp:(double)arg2 withCharacters:(id)arg3 withCharactersIgnoringModifiers:(id)arg4 withModifiers:(int)arg5 isRepeating:(BOOL)arg6 withKeyCode:(unsigned short)arg7 isTabKey:(BOOL)arg8 withCharacterSet:(int)arg9;
- (void)dealloc;
- (id)description;
- (int)characterSet;
- (id)_modiferFlagsDescription;
- (BOOL)isTabKey;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_characterSetDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (float)deltaX;
- (float)deltaY;
- (unsigned int)touchCount;
- (id)touchGlobalLocations;
- (BOOL)isGesture;
- (float)gestureScale;
- (float)gestureRotation;
- (id)charactersIgnoringModifiers;
- (id)characters;
- (BOOL)isKeyRepeating;
- (int)modifierFlags;
- (unsigned short)keyCode;

@end
