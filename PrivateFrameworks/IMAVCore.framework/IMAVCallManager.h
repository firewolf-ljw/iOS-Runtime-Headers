/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableArray;

@interface IMAVCallManager : NSObject  {
    unsigned int _callState;
    unsigned int _telephonyCallState;
    unsigned int _globalCallState;
    NSMutableArray *_chatArray;
}

@property(readonly) unsigned int callState;
@property(setter=_setCallState:) unsigned int _callState;
@property(setter=_setTelephonyCallState:) unsigned int _telephonyCallState;

+ (id)sharedInstance;

- (oneway void)release;
- (id)init;
- (unsigned int)retainCount;
- (id)autorelease;
- (unsigned int)callState;
- (unsigned int)_telephonyCallState;
- (unsigned int)_callState;
- (id)_chatList;
- (id)_nonRetainingChatList;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_postStateChangeIfNecessary;
- (void)_setCallState:(unsigned int)arg1;
- (void)__setTelephonyCallState:(unsigned int)arg1;
- (void)_setTelephonyCallState:(unsigned int)arg1;
- (void)_updateOverallChatState;

@end
