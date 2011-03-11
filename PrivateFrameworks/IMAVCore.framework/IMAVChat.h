/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, IMAccount, NSData, IMPair, NSError, IMAVChatParticipant, NSDate, <IMAVChatDelegate>, NSDictionary, NSArray, IMAVChatFeature, NSString, NSMutableDictionary, NSMutableArray, NSTimer;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSDictionary *_errorDict;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_participantNames;
    NSData *_connectData;
    NSDictionary *_callerProperties;
    NSMutableDictionary *_unknownPartyStates;
    struct dispatch_queue_s { } *_queue;
    int _ardRole;
    IMAVChatFeature *_recorder;
    IMAVChatFeature *_auxVideo;
    IMAVChatFeature *_ard;
    NSTimer *_inviteTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_screenSaverBlockingTimer;
    id _conferenceController;
    id _delegate;
    int _callID;
    unsigned int _sessionID;
    unsigned int _addStatus;
    NSError *_error;
    int _addableParticipants;
    unsigned int _localState;
    unsigned int _lastPostedState;
    int _securityLevel;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _securityExpectedByInitiator;
    BOOL _hasGatheredInfo;
    BOOL _silentConference;
    BOOL _isListening;
    BOOL _isCounterProposalConnect;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _needToSendEndConferenceNotification;
    BOOL _Q8IrisOpen;
    BOOL _usingCoercedIDs;
    BOOL _suppressBeginChat;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _dataOut;
    BOOL _dataIn;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _remoteNetworkStall;
    BOOL _participantOrderFinal;
    int _connectionType;
}

@property(readonly) BOOL _allParticipantsUsingICE;
@property float audioVolume;
@property(setter=setMute:) BOOL isMute;
@property(setter=setRemoteMute:) BOOL isRemoteMute;
@property(readonly) BOOL isChatMute;
@property BOOL isSendingAudio;
@property(readonly) BOOL didRemoteMute;
@property(setter=setPaused:) BOOL isPaused;
@property(setter=setRemotePaused:) BOOL isRemotePaused;
@property(readonly) BOOL isChatPaused;
@property BOOL isSendingVideo;
@property BOOL allowsVideo;
@property(readonly) BOOL didRemotePause;
@property double invitationTimeoutTime;
@property double connectionTimeoutTime;
@property(setter=_setConnectionType:) int _connectionType;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property BOOL lockCamera;
@property void* localVideoLayer;
@property void* localVideoBackLayer;
@property <IMAVChatDelegate> * delegate;
@property(retain,readonly) IMHandle * otherIMHandle;
@property(retain,readonly) IMAccount * account;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) NSString * participantNames;
@property(readonly) NSDictionary * errorDictionary;
@property(readonly) NSDictionary * vcErrorReport;
@property(readonly) BOOL isAOLInterop;
@property(readonly) BOOL isVideo;
@property(readonly) BOOL isOneWay;
@property(readonly) BOOL isStateFinal;
@property(readonly) BOOL isActive;
@property(readonly) BOOL canUseRelay;
@property(retain,readonly) NSArray * remoteParticipants;
@property(readonly) int numActiveParticipants;
@property(retain,readonly) IMAVChatParticipant * initiatorParticipant;
@property(retain,readonly) NSArray * participants;
@property(retain,readonly) IMAVChatParticipant * localParticipant;
@property(readonly) unsigned int state;
@property(readonly) unsigned int addStatus;
@property(readonly) int addableParticipants;
@property(readonly) NSDate * dateEnded;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateConnected;
@property(setter=_setConferenceController:) id _conferenceController;
@property(setter=setGUID:,retain) NSString * GUID;
@property(setter=_setConferenceID:,retain) NSString * conferenceID;
@property(setter=setCallID:) int callID;
@property(readonly) BOOL dataIn;
@property(readonly) BOOL dataOut;
@property(readonly) BOOL isCaller;
@property(setter=setConferenceSilent:) BOOL isConferenceSilent;
@property(retain,readonly) IMHandle * initiatorIMHandle;
@property(readonly) NSDictionary * callerProperties;
@property(readonly) unsigned int sessionID;
@property(readonly) BOOL isQ8IrisOpen;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConnectionType:) int _connectionType;
@property(readonly) struct dispatch_queue_s { }* _queue;

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (id)chatWithSessionID:(unsigned int)arg1;
+ (id)avChatWithConferenceID:(id)arg1;
+ (id)connectedChats;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (BOOL)_anyOfTheseParticipants:(id)arg1 matchAnyOfTheseIMHandles:(id)arg2;
+ (BOOL)isIMHandleInActiveConference:(id)arg1;
+ (id)avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (int)maxRemoteParticipantsVideo:(BOOL)arg1;
+ (BOOL)isStateActive:(unsigned int)arg1;
+ (void)_doSendUpdate;
+ (void)_sendUpdate;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (double)defaultConnectionTimeoutTime;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (BOOL)isStateFinal:(unsigned int)arg1;
+ (id)chatList;
+ (id)_avChatArray;
+ (id)connectingChats;
+ (id)incomingInvitations;
+ (id)outgoingInvitations;
+ (id)connectedChat;
+ (double)defaultInvitationTimeoutTime;
+ (id)avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ARDRole:(int)arg3;
+ (id)allowedClassesForArchives;
+ (id)activeChat;
+ (id)nonFinalChat;
+ (id)bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)currentAVChatInfo;
+ (void)getVideoStillForIMHandle:(id)arg1 data:(id*)arg2 result:(unsigned int*)arg3;

- (int)securityLevel;
- (id)conferenceID;
- (unsigned int)sessionID;
- (void*)localVideoLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (BOOL)startPreviewWithError:(id*)arg1;
- (void)setCallID:(int)arg1;
- (int)callID;
- (void)endChat;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (void)inviteAll;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (BOOL)isMute;
- (void)setMute:(BOOL)arg1;
- (id)otherIMHandle;
- (int)endedError;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)_reportError:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isActive;
- (unsigned int)state;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setCameraType:(unsigned int)arg1;
- (unsigned int)cameraType;
- (unsigned int)cameraOrientation;
- (BOOL)isVideo;
- (BOOL)stopPreview;
- (unsigned int)endedReason;
- (void)_removeRemoteParticipant:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_finalizeParticipantOrder:(id)arg1 andNotify:(BOOL)arg2;
- (id)participantsNotInNuggets:(id)arg1;
- (BOOL)_imHandlesRequireCoercedIDs:(id)arg1;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (void)_initParticipantsWithNuggets:(id)arg1;
- (void)_noteInviteDeliveredForParticipant:(id)arg1;
- (id)remoteParticipants;
- (BOOL)_allParticipantsUsingICE;
- (id)stringForAddStatus:(unsigned int)arg1;
- (id)stringForAddStatus;
- (unsigned int)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(int)arg3;
- (BOOL)canAddIMHandle:(id)arg1;
- (void)removeParticipantWithID:(id)arg1;
- (id)orderedRemotePartyIDs;
- (void)finalizeOrderWithVideoFrom:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (void)_subscribeToVCNotifications;
- (void)_setActiveConference;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (int)_theoreticalSecurityLevel;
- (int)_currentSecurityLevel;
- (BOOL)_allParticipantsCanBeSecure;
- (void)_setupIdentity;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)_currentAVChatInfo;
- (void)_clearInvitationTimeoutTimer;
- (void)_setScreenSaverBlockingTimer;
- (BOOL)canUseRelay;
- (BOOL)didRemoteMute;
- (BOOL)isRemoteMute;
- (void)toggleMute;
- (void)setRemoteMute:(BOOL)arg1;
- (void)toggleRemoteMute;
- (BOOL)isChatMute;
- (void)toggleChatMute;
- (void)toggleSendingAudio;
- (float)audioVolume;
- (void)setAudioVolume:(float)arg1;
- (void)togglePaused;
- (void)setRemotePaused:(BOOL)arg1;
- (BOOL)isRemotePaused;
- (void)toggleRemotePaused;
- (BOOL)isChatPaused;
- (void)toggleChatPaused;
- (BOOL)didRemotePause;
- (BOOL)allowsVideo;
- (void)setAllowsVideo:(BOOL)arg1;
- (void)toggleSendingVideo;
- (BOOL)isLocalNetworkStalled;
- (BOOL)isRemoteNetworkStalled;
- (void)_relayPropose:(id)arg1;
- (void)_setStateDisconnected;
- (void)_updateSecurity;
- (void)_unknownParty:(id)arg1 didConnect:(BOOL)arg2;
- (void)_unknownParty:(id)arg1 muteOrPause:(unsigned int)arg2 didChange:(BOOL)arg3;
- (void)conferencePersonWithID:(id)arg1 completedWithInfo:(id)arg2;
- (void)conferenceHungUpByPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 didCancel:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForInsufficientBandwidth:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForNoPackets:(id)arg2;
- (void)conferenceHasVideoError;
- (void)conferenceHasTimedOut;
- (BOOL)shouldConferenceAcceptIncomingRequestFromUser:(id)arg1 onLocalSubnetOnly:(BOOL*)arg2;
- (BOOL)conferencePersonWithID:(id)arg1 hasValidRemoteCertificate:(struct __SecCertificate { }*)arg2;
- (void)conferencePersonWithID:(id)arg1 securityDidChange:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 certificateRejected:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)_configureVCC;
- (void)connectProc:(id)arg1;
- (void)_noteConferenceConnected:(id)arg1;
- (void)startVCOnMainThread:(id)arg1;
- (double)connectionTimeoutTime;
- (double)invitationTimeoutTime;
- (void)_blockScreenSaver:(id)arg1;
- (void)_clearConnectionTimeoutTimer;
- (void)_setConnectionTimeoutTimer;
- (void)_connectionTimeout:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_invitationTimeout:(id)arg1;
- (void)_clearScreenSaverBlockingTimer;
- (id)dateEnded;
- (id)_callStatisticsGUID;
- (id)_callLoggingOutput;
- (void)_submitCrashTracerLogs;
- (void)_reportCallStatistics:(id)arg1;
- (BOOL)lockCamera;
- (void)setLockCamera:(BOOL)arg1;
- (void)conferencePersonWithID:(id)arg1 didConnect:(BOOL)arg2;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (BOOL)closeCamera;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (BOOL)isSendingVideo;
- (BOOL)isAOLInterop;
- (BOOL)isSendingAudio;
- (void)systemDidFastUserSwitchOut;
- (BOOL)_participantsCheckOut;
- (void)_noteStatusChangesForParticipant:(id)arg1;
- (void)_serviceCapsChanged:(id)arg1;
- (int)_initialRelayStatus;
- (void)notifySystemVC:(BOOL)arg1;
- (void)_postStateToDelegateIfNecessary;
- (void)_vccInitDidFinish;
- (void)_configureVCCRecv;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_refreshAddableParticipants;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_updateParticipantsWithData:(id)arg1;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (id)callerProperties;
- (BOOL)isConferenceSilent;
- (BOOL)dataOut;
- (id)_conferenceController;
- (id)initiatorParticipant;
- (int)numActiveParticipants;
- (id)vcErrorReport;
- (id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5;
- (void)_determineDataIn;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ARDRole:(int)arg3;
- (void)beginChat;
- (void)endChatWithError:(int)arg1;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)cancelInvitation;
- (void)invite:(id)arg1;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)declineInvitation;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_counterPropose:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_imHandleStatusChanged:(id)arg1;
- (void)_initiatorInfoChanged:(id)arg1;
- (void)_participantsChanged:(id)arg1;
- (void)handleVideoConferenceNotification:(id)arg1;
- (void)invalidateParticipantNames;
- (id)participantNames;
- (id)participantWithID:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (void)_setCallerProperties:(id)arg1;
- (BOOL)isOneWay;
- (void)_setCreationDate;
- (id)errorDictionary;
- (void)_setErrorDictionary:(id)arg1;
- (id)participants;
- (id)localParticipant;
- (unsigned int)addStatus;
- (int)addableParticipants;
- (id)dateCreated;
- (id)dateConnected;
- (void)_setConferenceController:(id)arg1;
- (id)GUID;
- (void)setGUID:(id)arg1;
- (BOOL)dataIn;
- (BOOL)isCaller;
- (void)setConferenceSilent:(BOOL)arg1;
- (BOOL)isQ8IrisOpen;
- (void)_setCallStatisticsGUID:(id)arg1;
- (void)_setConnectionType:(int)arg1;
- (int)_connectionType;
- (struct dispatch_queue_s { }*)_queue;
- (BOOL)openCamera;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (void)_setConferenceID:(id)arg1;
- (void)acceptInvitation;
- (void)_VCCounterProposal:(id)arg1;
- (void)_responseToVCInvite:(id)arg1;
- (BOOL)isStateFinal;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (id)initiatorIMHandle;
- (void)_handleAVError:(id)arg1;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (id)error;
- (BOOL)isPaused;
- (id)account;

@end
