/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderActionIntervalometerDelegate, CAMViewfinderViewControllerCaptureRequestTestingDelegate> {
    bool  __capturesOnTouchDown;
    double  __delayBetweenCaptures;
    unsigned long long  __expectedNumberOfResponsesPerRequest;
    NSString * __finalRequestPersistenceUUID;
    bool  __intervalometerReachedMaxCount;
    double  __lastCaptureCompletionTime;
    NSString * __lastReceivedPersistenceUUID;
    long long  __mode;
    bool  __performWarmupCapture;
    NSCountedSet * __requestIDs;
    CAMViewfinderViewController * __viewfinderViewController;
    bool  __waitingOnWarmupCapture;
    CAMViewfinderActionIntervalometer * _testIntervalometer;
}

@property (nonatomic) bool _capturesOnTouchDown;
@property (nonatomic) double _delayBetweenCaptures;
@property (nonatomic) unsigned long long _expectedNumberOfResponsesPerRequest;
@property (nonatomic, retain) NSString *_finalRequestPersistenceUUID;
@property (nonatomic) bool _intervalometerReachedMaxCount;
@property (nonatomic) double _lastCaptureCompletionTime;
@property (nonatomic, retain) NSString *_lastReceivedPersistenceUUID;
@property (nonatomic) long long _mode;
@property (nonatomic) bool _performWarmupCapture;
@property (nonatomic, retain) NSCountedSet *_requestIDs;
@property (nonatomic, retain) CAMViewfinderViewController *_viewfinderViewController;
@property (nonatomic) bool _waitingOnWarmupCapture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMViewfinderActionIntervalometer *testIntervalometer;

- (void).cxx_destruct;
- (bool)_allowOverlappingCaptures;
- (bool)_capturesOnTouchDown;
- (double)_delayBetweenCaptures;
- (unsigned long long)_expectedNumberOfResponsesPerRequest;
- (id)_finalRequestPersistenceUUID;
- (bool)_intervalometerReachedMaxCount;
- (double)_lastCaptureCompletionTime;
- (id)_lastReceivedPersistenceUUID;
- (long long)_mode;
- (bool)_performWarmupCapture;
- (id)_requestIDs;
- (id)_viewfinderViewController;
- (bool)_waitingOnWarmupCapture;
- (void)failedTestWithReason:(id)arg1;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 viewfinderViewController:(id)arg3 performingWarmupCapture:(bool)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6 capturesOnTouchDown:(bool)arg7;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)setTestIntervalometer:(id)arg1;
- (void)set_capturesOnTouchDown:(bool)arg1;
- (void)set_delayBetweenCaptures:(double)arg1;
- (void)set_expectedNumberOfResponsesPerRequest:(unsigned long long)arg1;
- (void)set_finalRequestPersistenceUUID:(id)arg1;
- (void)set_intervalometerReachedMaxCount:(bool)arg1;
- (void)set_lastCaptureCompletionTime:(double)arg1;
- (void)set_lastReceivedPersistenceUUID:(id)arg1;
- (void)set_mode:(long long)arg1;
- (void)set_performWarmupCapture:(bool)arg1;
- (void)set_requestIDs:(id)arg1;
- (void)set_viewfinderViewController:(id)arg1;
- (void)set_waitingOnWarmupCapture:(bool)arg1;
- (bool)shouldAttemptAction;
- (void)startTesting;
- (void)stopTesting;
- (id)testIntervalometer;
- (void)viewfinderViewController:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteCapture:(id)arg2 error:(id)arg3;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidStopCapturingStillImage:(id)arg2;

@end