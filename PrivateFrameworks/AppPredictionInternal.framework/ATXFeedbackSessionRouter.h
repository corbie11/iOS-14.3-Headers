/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFeedbackSessionRouter : NSObject {
    NSMutableArray * _clientModelResults;
    NSDictionary * _feedbackListeners;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    NSObject<OS_dispatch_queue> * _queue;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, retain) NSMutableArray *clientModelResults;

+ (id)_clientModelIdToFeedbackListenersMapping:(id)arg1;
+ (id)_executableToSuggestionMappingFromSuggestions:(id)arg1;
+ (bool)_shouldProcessFeedbackSession:(id)arg1;
+ (id)_suggestionsFromClientModelEqualToSuggestionsFromSessionWithUUIDs:(id)arg1 sessionUUIDToProactiveSuggestionMapping:(id)arg2 clientModelExecutableMapping:(id)arg3;
+ (id)_uuidToSuggestionMappingForSuggestionsInFeedbackSession:(id)arg1 clientModelCacheUpdates:(id)arg2;

- (void).cxx_destruct;
- (id)_predictionTimeContextWithDate:(id)arg1;
- (id)clientModelIdsAcceptingFeedback;
- (id)clientModelResults;
- (id)init;
- (id)initWithClientModelFeedbackListeners:(id)arg1 hyperParameters:(id)arg2 tracker:(id)arg3;
- (void)logClientModelClientCacheAgeMetricForClientModelResult:(id)arg1 uiContext:(id)arg2;
- (void)logClientModelEngagementMetricsForClientModelResult:(id)arg1 uiContext:(id)arg2;
- (void)logClientModelUICacheAgeMetricForFeedbackSession:(id)arg1 uiContext:(id)arg2;
- (void)logFeedbackRecordedEngagementTypesForSession:(id)arg1;
- (void)logSessionEngagementMetricsForFeedbackSession:(id)arg1;
- (void)processFeedbackResultForSession:(id)arg1 uiContext:(id)arg2;
- (void)setClientModelResults:(id)arg1;

@end