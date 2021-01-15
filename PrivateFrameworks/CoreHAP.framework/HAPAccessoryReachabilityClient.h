/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryReachabilityClient : HMFObject <HAPAccessoryReachabilityClient, HMFLogging, HMFTimerDelegate> {
    HMFTimer * _activityTimer;
    double  _confirmInterval;
    <HAPAccessoryReachabilityDelegate> * _delegate;
    HAPDeviceID * _identifier;
    HAP2SerializedOperationQueue * _operationQueue;
    <HAPAccessoryReachabilityProfile> * _profile;
    HAP2PropertyLock * _propertyLock;
    long long  _state;
}

@property (nonatomic, readonly) double confirmInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryReachabilityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)logCategory;
+ (id)new;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_enterState:(long long)arg1;
- (void)_initializeMachine;
- (void)_poll;
- (void)_runStateMachine;
- (void)_stop;
- (void)_timerDidFire:(id)arg1;
- (void)_waitForActivity;
- (void)confirm;
- (double)confirmInterval;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 profile:(id)arg2 operationQueue:(id)arg3;
- (void)kick;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (long long)state;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;

@end