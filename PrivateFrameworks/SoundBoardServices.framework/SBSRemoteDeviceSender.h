/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

@interface SBSRemoteDeviceSender : NSObject <SBSImplementer> {
    RPCompanionLinkClient * _client;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _rapportQueue;
}

@property (retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *rapportQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)destinationID;
- (void)deviceAttributeChanged:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)getAllDebugInfo:(id /* block */)arg1;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)arg1;
- (void)getFeatureFlags:(id /* block */)arg1;
- (void)getTuningInfo:(id /* block */)arg1;
- (void)getUserDefaults:(id /* block */)arg1;
- (void)handoffCancel;
- (void)handoffComplete;
- (void)handoffInterruption:(id /* block */)arg1;
- (void)handoffSetDeviceAsStereoLeader:(bool)arg1 withOptions:(id)arg2;
- (void)handoffStart:(id /* block */)arg1;
- (void)handoffUpdateIntensity:(float)arg1;
- (void)homeKitSettingForKeyPathChanged:(id)arg1 updatedValue:(id)arg2 completion:(id /* block */)arg3;
- (void)identifyWithOptions:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)injectSWUpdateToHome:(id)arg1;
- (bool)isMediaAlarm:(id)arg1;
- (void)obliterate:(id)arg1;
- (void)playTone:(unsigned int)arg1;
- (id)rapportQueue;
- (void)reboot:(id)arg1;
- (void)requestDeferredReboot;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)arg1;
- (void)sendButtonCommand:(id)arg1;
- (void)sendLEDCommand:(id)arg1;
- (void)setAppleCareIsEnabled:(bool)arg1 withOptions:(id)arg2;
- (void)setBootSpinner:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setDeviceAsStereoLeader:(bool)arg1 withOptions:(id)arg2;
- (void)setFeatureFlags:(id)arg1;
- (void)setLEDContents:(id)arg1;
- (void)setRapportQueue:(id)arg1;
- (void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
- (void)setUserDefaults:(id)arg1 withValue:(id)arg2;
- (void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(bool)arg2 reply:(id /* block */)arg3;
- (void)stopTone:(unsigned int)arg1;
- (void)sysdiagnoseHasStarted:(bool)arg1;
- (void)triggerWiFiCoreCapture:(id)arg1;

@end