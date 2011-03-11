/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKVoiceChatClient>;

@interface GKVoiceChatService : NSObject  {
    id _voiceChatService;
}

@property <GKVoiceChatClient> * client;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property float remoteParticipantVolume;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;

+ (id)defaultVoiceChatService;
+ (BOOL)isVoIPAllowed;
+ (void)initialize;

- (void)setClient:(id)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)acceptCallID:(int)arg1 error:(id*)arg2;
- (void)denyCallID:(int)arg1;
- (BOOL)isInputMeteringEnabled;
- (float)outputMeterLevel;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (float)remoteParticipantVolume;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (float)inputMeterLevel;
- (void)dealloc;
- (id)client;

@end
