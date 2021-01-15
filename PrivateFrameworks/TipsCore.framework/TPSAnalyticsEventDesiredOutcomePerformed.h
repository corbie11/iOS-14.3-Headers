/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    NSString * _displayType;
    NSString * _experimentCampID;
    NSString * _experimentID;
    double  _timeToDesiredOutcome;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, retain) NSString *experimentCampID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) double timeToDesiredOutcome;

+ (id)eventWithContentID:(id)arg1 displayType:(id)arg2 lastDisplayedContext:(id)arg3 lastHintDisplayedDate:(id)arg4 desiredOutcomePerformedDate:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 context:(id)arg2 displayType:(id)arg3 lastHintDisplayedDate:(id)arg4 desiredOutcomePerformedDate:(id)arg5;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experimentCampID;
- (id)experimentID;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setBundleID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setExperimentCampID:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setTimeToDesiredOutcome:(double)arg1;
- (double)timeToDesiredOutcome;

@end