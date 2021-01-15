/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProximityCardLauncher : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    HMDAddAccessoryRequestInformation * _internal_pendingAddAccessoryRequestInformation;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) SBSRemoteAlertHandle *alertHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDAddAccessoryRequestInformation *internal_pendingAddAccessoryRequestInformation;
@property (nonatomic, readonly) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)proximityCardServiceBundleIdentifier;

- (void).cxx_destruct;
- (void)_handleNfcProxCardPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)alertHandle;
- (void)clearPendingAddAccessoryRequestInformation;
- (void)dealloc;
- (void)handleNfcProxCardPayload:(id)arg1;
- (id)init;
- (id)internal_pendingAddAccessoryRequestInformation;
- (id)pendingAddAccessoryRequestInformation;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setAlertHandle:(id)arg1;
- (void)setInternal_pendingAddAccessoryRequestInformation:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end