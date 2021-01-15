/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
 */

@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess {
    NSArray * _activeTemplates;
    NSSet * _homeActionObjects;
    NSArray * _rooms;
}

@property (nonatomic, retain) NSArray *activeTemplates;
@property (nonatomic, retain) NSSet *homeActionObjects;
@property (nonatomic, retain) NSArray *rooms;

- (void).cxx_destruct;
- (bool)_actionObjects:(id)arg1 meetTypeCountRequirementInTemplate:(id)arg2;
- (id)_createInitialRecommendations:(id)arg1 withBaseConfiguration:(id)arg2;
- (id)_defineActionsForRecommendation:(id)arg1 withActionMap:(id)arg2 withActionableObjects:(id)arg3;
- (id)_defineProfileActionsForActionableObjects:(id)arg1 withActionMap:(id)arg2;
- (id)_existingActionSetInHome:(id)arg1 forRecommendation:(id)arg2;
- (id)_filterRecommendations:(id)arg1 fromTemplate:(id)arg2;
- (id)_filterSplitRecommendations:(id)arg1 characteristicTypePriority:(id)arg2;
- (id)_filterToAllowedObjects:(id)arg1 withSourceObjects:(id)arg2 withTrigger:(id)arg3 template:(id)arg4;
- (id)_initialRecommendationsForTemplate:(id)arg1;
- (id)_triggerForRecommendation:(id)arg1 fromTemplate:(id)arg2 withActionableObjects:(id)arg3;
- (id)_triggerInHome:(id)arg1 withSameConfigurationAsTrigger:(id)arg2;
- (id)activeTemplates;
- (id)characteristicActionsForObject:(id)arg1 actionMap:(id)arg2;
- (id)definiteActionsForCharacteristicActionMap:(id)arg1 object:(id)arg2;
- (id)generateRecommendations;
- (id)homeActionObjects;
- (id)recommendationsWithTemplate:(id)arg1;
- (id)rooms;
- (void)setActiveTemplates:(id)arg1;
- (void)setHomeActionObjects:(id)arg1;
- (void)setRooms:(id)arg1;
- (bool)shouldGenerateRecommendations;

@end