/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKVoiceChatService, LoopbackSocketTunnel, <GKVoiceChatClient>, NSRecursiveLock, NSLock, VideoConference, NSString, GKVoiceChatDictionary;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel> {
    <GKVoiceChatClient> *client;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    float outputMeterLevel;
    float inputMeterLevel;
    BOOL microphoneMuted;
    int curCallID;
    int state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    NSString *sdp;
    struct tagCONNRESULT { 
        int iCallID; 
        int iRemoteCallID; 
        int proto; 
        int bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemoteSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        unsigned int dwRTT; 
    } currentConnResult;
    LoopbackSocketTunnel *tunnel;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    GKVoiceChatService *wrapperService;
    int didUseICE;
    int bundle;
    BOOL forceNoICE;
    VideoConference *conf;
    BOOL clientHasRTChannel;
    int chatMode;
    BOOL focus;
}

@property float remoteParticipantVolume;
@property void* localVideoLayer;
@property void* remoteVideoLayer;
@property(getter=getLocalFramerate,readonly) double localFramerate;
@property(getter=getLocalBitrate,readonly) double localBitrate;
@property(getter=getRemoteFramerate,readonly) double remoteFramerate;
@property(getter=getRemoteBitrate,readonly) double remoteBitrate;
@property(getter=isFocus) BOOL focus;
@property int chatMode;
@property GKVoiceChatService * wrapperService;
@property int state;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(readonly) float inputMeterLevel;
@property(readonly) float outputMeterLevel;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property id client;

+ (id)defaultVoiceChatService;

- (double)getRemoteBitrate;
- (void)setClient:(id)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (id)wrapperService;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)acceptCallID:(int)arg1 error:(id*)arg2;
- (void)denyCallID:(int)arg1;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (BOOL)inviteIsValid:(id)arg1;
- (id)createInvite:(id*)arg1 toParticipant:(id)arg2 callID:(int*)arg3;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2 withCallID:(int)arg3;
- (void)getNSError:(id*)arg1 code:(int)arg2 description:(id)arg3 hResult:(int)arg4;
- (BOOL)isInputMeteringEnabled;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;
- (double)getLocalFramerate;
- (double)getLocalBitrate;
- (void)setWrapperService:(id)arg1;
- (float)outputMeterLevel;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)getNSError:(id*)arg1 code:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)resetState;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned int)arg2 error:(id*)arg3;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (void)setChatMode:(int)arg1;
- (id)localDisplayNameForCallID:(int)arg1;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (id)remoteDisplayNameForCallID:(int)arg1;
- (float)remoteParticipantVolume;
- (void*)localVideoLayer;
- (void*)remoteVideoLayer;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (double)getRemoteFramerate;
- (void)forceNoICE:(BOOL)arg1;
- (int)chatMode;
- (float)inputMeterLevel;
- (void)setFocus:(BOOL)arg1;
- (BOOL)isFocus;
- (void)setState:(int)arg1;
- (int)state;
- (id)init;
- (void)dealloc;
- (void)cleanup;
- (id)client;

@end
