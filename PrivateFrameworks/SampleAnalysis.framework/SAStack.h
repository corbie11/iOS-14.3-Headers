/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAStack : NSObject {
    NSMutableDictionary * _binaryImagesHitByTask;
    unsigned long long  _count;
    unsigned long long  _cpuCycles;
    unsigned long long  _cpuInstructions;
    unsigned long long  _cpuTimeNs;
    NSMutableArray * _dispatchQueues;
    unsigned long long  _firstSampleIndex;
    bool  _isGlobalForcedIdleThread;
    bool  _isIdleWorkQueue;
    bool  _isMainThread;
    bool  _isProcessorIdleThread;
    bool  _isTargetThread;
    unsigned long long  _lastSampleIndex;
    int  _maxBasePriority;
    int  _maxPriority;
    int  _minBasePriority;
    int  _minPriority;
    bool  _omit;
    NSMutableArray * _rootFrames;
    NSMutableArray * _threadIds;
    NSString * _threadName;
    bool  _threadNameChanges;
    SATimestamp * _timeWhenFirstAttemptedToSample;
}

- (void).cxx_destruct;

@end