/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryFirmwareUpdateSession : NSObject <HMDDataStreamSocketDelegate, HMFLogging, HMFTimerDelegate, UARPControllerDelegateProtocol> {
    HMDAccessoryFirmwareUpdateManager * _accessoryFirmwareUpdateManager;
    HMFTimer * _allowedApplyDurationTimer;
    UARPAssetID * _assetID;
    bool  _assetOfferedForCurrentDataStream;
    <HMDDataStreamSocket> * _dataStreamSocket;
    NSString * _documentationPath;
    HMFTimer * _expectedApplyDurationTimer;
    HMDHAPAccessory * _hapAccessory;
    unsigned long long  _internalState;
    HMFUnfairLock * _lock;
    HMDAccessoryFirmwareUpdateConcurrencyLogEventManager * _logEventManager;
    bool  _sessionEnded;
    HMFTimer * _socketIdleTimer;
    UARPAccessory * _uarpAccessory;
    HMDAccessoryFirmwareUpdateScheduler * _updateScheduler;
    unsigned long long  _userInitiatedHDSRetryCount;
    bool  _userInitiatedInstall;
    <HMDAccessoryFirmwareUpdateSessionWingman> * _wingman;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (nonatomic, retain) HMFTimer *allowedApplyDurationTimer;
@property (retain) UARPAssetID *assetID;
@property bool assetOfferedForCurrentDataStream;
@property (getter=isCurrentUpdateLatest, readonly) bool currentUpdateLatest;
@property (getter=isCurrentlyStaging, readonly) bool currentlyStaging;
@property (nonatomic, retain) <HMDDataStreamSocket> *dataStreamSocket;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *documentationPath;
@property (nonatomic, retain) HMFTimer *expectedApplyDurationTimer;
@property (getter=isFirmwareVersionUpToDate, readonly) bool firmwareVersionUpToDate;
@property (nonatomic, readonly) HMDHAPAccessory *hapAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long internalState;
@property (readonly) HMFUnfairLock *lock;
@property (readonly) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager;
@property bool sessionEnded;
@property (nonatomic, readonly) unsigned long long sessionState;
@property (nonatomic, retain) HMFTimer *socketIdleTimer;
@property (readonly) Class superclass;
@property (readonly) UARPAccessory *uarpAccessory;
@property (nonatomic, retain) HMDAccessoryFirmwareUpdateScheduler *updateScheduler;
@property (nonatomic) unsigned long long userInitiatedHDSRetryCount;
@property (getter=isUserInitiatedInstall, nonatomic, readonly) bool userInitiatedInstall;
@property (readonly) <HMDAccessoryFirmwareUpdateSessionWingman> *wingman;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)__calculateDigestDataFromFile:(id)arg1 maxDataSize:(unsigned long long)arg2 error:(id*)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (double)_allowedApplyDuration;
- (void)_applyFirmware;
- (void)_automaticUpdateEnabledChanged:(bool)arg1;
- (void)_cancelApplyTimer;
- (void)_cancelSocketIdleTimer;
- (void)_endSession;
- (void)_evaluateHDSRetryForUserInitiatedInstall;
- (double)_expectedApplyDuration;
- (void)_handleAutomaticUpdateEnabledChanged:(id)arg1;
- (void)_handleSocketTimeout;
- (void)_logApplyEventWithStatus:(long long)arg1;
- (void)_logDebugStates:(const char *)arg1;
- (void)_resetAvailableSoftwareUpdate;
- (void)_resetSocketIdleTimer;
- (void)_schedule;
- (void)_stagingFailed;
- (void)_startSocketIdleTimer;
- (void)_syncStateWithAccessoryOnResume;
- (void)_updateAvailableSoftwareUpdate;
- (void)_updateAvailableSoftwareUpdateDocumentation;
- (void)_updateAvailableSoftwareUpdateState:(long long)arg1;
- (void)_updateSoftwareUpdateNotReadyReasons;
- (void)_verifyUpdateComplete;
- (void)_withOpenSocketDoBlock:(id /* block */)arg1 error:(id /* block */)arg2;
- (id)accessoryFirmwareUpdateManager;
- (id)allowedApplyDurationTimer;
- (void)applyFirmware;
- (void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2;
- (id)assetID;
- (bool)assetOfferedForCurrentDataStream;
- (void)configure;
- (id)dataStreamSocket;
- (void)dealloc;
- (id)description;
- (bool)documentationAvailable;
- (id)documentationPath;
- (id)expectedApplyDurationTimer;
- (void)firmwareStagingComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3;
- (void)firmwareStagingProgress:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)firmwareUpdateResult:(id)arg1 vendorSpecificStatus:(unsigned int)arg2 error:(id)arg3;
- (void)handleAccessoryFirmwareVersionChangedNotification:(id)arg1;
- (void)handleFirmwareUpdateStateChangedNotification:(id)arg1;
- (void)handleNotReadyReasonsChanged:(id)arg1;
- (void)handleStagedFirmwareVersionChangedNotification:(id)arg1;
- (id)hapAccessory;
- (id)init;
- (id)initWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4;
- (id)initWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4 wingman:(id)arg5;
- (unsigned long long)internalState;
- (bool)isCurrentUpdateLatest;
- (bool)isCurrentlyStaging;
- (bool)isFirmwareVersionUpToDate;
- (bool)isUserInitiatedInstall;
- (id)lock;
- (id)logEventManager;
- (id)logIdentifier;
- (id)newDocumentationMetadata;
- (id)newSoftwareUpdateWithState:(long long)arg1;
- (unsigned long long)nextStateToSchedule;
- (void)pause;
- (void)resumeUARP;
- (void)resumeWithState:(unsigned long long)arg1;
- (bool)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3;
- (bool)sessionEnded;
- (unsigned long long)sessionState;
- (void)setAllowedApplyDurationTimer:(id)arg1;
- (void)setAssetID:(id)arg1;
- (void)setAssetOfferedForCurrentDataStream:(bool)arg1;
- (void)setDataStreamSocket:(id)arg1;
- (void)setDocumentationPath:(id)arg1;
- (void)setExpectedApplyDurationTimer:(id)arg1;
- (void)setInternalState:(unsigned long long)arg1;
- (void)setSessionEnded:(bool)arg1;
- (void)setSocketIdleTimer:(id)arg1;
- (void)setUpdateScheduler:(id)arg1;
- (void)setUserInitiatedHDSRetryCount:(unsigned long long)arg1;
- (void)setUserInitiatedInstall:(bool)arg1;
- (void)socket:(id)arg1 didFailWithError:(id)arg2;
- (void)socketDidClose:(id)arg1;
- (void)socketDidReceiveData:(id)arg1;
- (id)socketIdleTimer;
- (void)stageFirmware;
- (void)stagingComplete;
- (bool)startManualUpdate:(id)arg1 error:(id*)arg2;
- (void)timerDidFire:(id)arg1;
- (id)uarpAccessory;
- (id)updateScheduler;
- (unsigned long long)userInitiatedHDSRetryCount;
- (id)wingman;
- (id)workQueue;

@end