/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class CPDistributedMessagingCenter, NSData, NSTimer, NSMutableArray, NSDictionary, NSDate, <MCInteractionDelegate>;

@interface MCProfileConnection : NSObject  {
    CPDistributedMessagingCenter *_messageCenter;
    struct __CFBag { } *_observers;
    CPDistributedMessagingCenter *_interactionServer;
    <MCInteractionDelegate> *_interactionDelegate;
    id _interactionLockDelayedContext;
    NSDictionary *_preflightResponse;
    NSData *_originalProfileData;
    BOOL _needToRestoreOriginalProfileData;
    NSDate *_lastNoPasscodeMDMPollTime;
    int _userInputTimeoutType;
    NSTimer *_userInputTimer;
    struct dispatch_queue_s { } *_notificationSyncQueue;
    NSMutableArray *_notificationTokens;
}

+ (id)sharedConnection;

- (void)removeObserver:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)dealloc;
- (id)_init;
- (void)setDelegate:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
- (BOOL)isPasscodeSet;
- (BOOL)isPasscodeRequiredByProfiles;
- (BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3;
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3;
- (BOOL)isContentProtectionInEffect;
- (BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2;
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1;
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (int)unlockScreenType;
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (void)setParameters:(id)arg1 forBoolSetting:(id)arg2;
- (void)setParameters:(id)arg1 forValueSetting:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (id)parametersForBoolSetting:(id)arg1;
- (id)parametersForValueSetting:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)effectiveRestrictions;
- (int)boolRestrictionForFeature:(id)arg1;
- (id)valueRestrictionForFeature:(id)arg1;
- (int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10;
- (id)_pathsToInstalledProfilesWithFlags:(int)arg1;
- (id)installedProfilesWithFilterFlags:(int)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;
- (id)queueProfileForAcceptance:(id)arg1 outError:(id*)arg2;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (id)installProfile:(id)arg1 outError:(id*)arg2;
- (id)installProfileData:(id)arg1 outError:(id*)arg2;
- (id)installProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
- (id)installCarrierProfileData:(id)arg1 outError:(id*)arg2;
- (void)removeProfileWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2;
- (id)acceptedMIMETypes;
- (id)acceptedFileExtensions;
- (BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2;
- (BOOL)transitionToProfileOverviewUI;
- (BOOL)transitionToProfileAcceptanceUI;
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1;
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2;
- (BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
- (BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2;
- (void)_tearDownInteractionServer;
- (void)_detectProfiledCrashes;
- (void)_registerSelectorsForInteractionServer:(id)arg1;
- (void)installProfileData:(id)arg1 interactionDelegate:(id)arg2;
- (void)installProfile:(id)arg1 interactionDelegate:(id)arg2;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;
- (void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned int)arg2;
- (void)_setTimeoutWaitingForUserInputType:(int)arg1;
- (void)_cancelUserInputTimeout;
- (void)_userInputTimerFired;
- (void)_doMCICPreflightResponse:(id)arg1 params:(id)arg2;
- (void)cancelUserInputResponses;
- (void)submitUserInputResponses:(id)arg1;
- (void)_doMCICDidUpdateStatus:(id)arg1 params:(id)arg2;
- (void)_doMCICDidRequestCurrentPasscode:(id)arg1 params:(id)arg2;
- (void)_doMCICDidBeginInstallingNextProfileData:(id)arg1 params:(id)arg2;
- (void)__doMCICDidFinish:(id)arg1;
- (void)_doMCICDidFinish:(id)arg1 params:(id)arg2;
- (void)__checkForProfiledCrash;
- (void)_doMCICRequestUserInput:(id)arg1 params:(id)arg2;
- (void)_doMCICShowUserWarnings:(id)arg1 params:(id)arg2;
- (void)respondToWarningsContinueInstallation:(BOOL)arg1;
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2;
- (id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 transitionToUI:(BOOL)arg3 outError:(id*)arg4;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8;
- (id)objectRestrictionForFeature:(id)arg1;
- (id)profileFromProfileData:(id)arg1 outError:(id*)arg2;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2;
- (id)queueProfileForInstallation:(id)arg1 outError:(id*)arg2;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (BOOL)isPasscodeRequiredByPolicy;
- (id)passcodeExpiryDate;
- (BOOL)validatePasscode:(id)arg1;
- (BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(BOOL*)arg4 outEffectiveSettingsChanged:(BOOL*)arg5 outError:(id*)arg6;
- (void)setPasscodeWasSetInBackup:(BOOL)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (BOOL)isPasscodeRequired;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (id)userSettings;
- (id)effectiveUserSettings;
- (void)setParametersForSettingsByType:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (void)removeBoolSetting:(id)arg1;
- (void)removeValueSetting:(id)arg1;
- (void)resetAllSettingsToDefaults;
- (id)defaultParametersForBoolSetting:(id)arg1;
- (id)defaultParametersForValueSetting:(id)arg1;
- (int)defaultBoolValueForSetting:(id)arg1;
- (id)defaultValueForSetting:(id)arg1;
- (void)notifyClientsToRecomputeCompliance;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;
- (int)newPasscodeEntryScreenType;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (void)checkInAsynchronously;
- (void)_applyToObservers:(id)arg1;
- (void)__restrictionDidChange;
- (void)_restrictionDidChange;
- (void)__passcodeDidChange;
- (void)_passcodeDidChange;
- (void)__passcodePolicyDidChange;
- (void)_passcodePolicyDidChange;
- (void)__profileListDidChange;
- (void)_profileListDidChange;
- (void)__effectiveSettingsDidChange:(id)arg1;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (void)recomputeUserComplianceWarning;
- (void)removeOrphanedClientTruths;
- (void)migratePostDataMigrator;
- (void)processProfilesPostMigrate;
- (void)processProfilesPostRestore;
- (void)shutDown;
- (id)managedWiFiNetworkNames;
- (id)managedSystemConfigurationServiceIDs;
- (void)lockDevice;
- (void)removeCarrierProfile;
- (void)removeProfilesFromInstallationQueue;
- (id)popProfileFromHeadOfInstallationQueue;
- (void)checkIn;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1;
- (id)effectiveValueForSetting:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)userInfoForClientUUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (BOOL)installConfigurationProfileWithData:(id)arg1;

@end
