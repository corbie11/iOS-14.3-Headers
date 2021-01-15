/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMDaemonUserDefaults : REMUserDefaults

@property (nonatomic, retain) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (nonatomic, retain) NSString *acAccountIdentifierToMigrateInactivatedCalDavData;
@property (nonatomic, copy) NSData *accountsListCategorizedCountsCache;
@property (nonatomic, retain) NSString *cloudKitMergeLocalLastBuildVersionMaxRetryReached;
@property (nonatomic, retain) NSDate *cloudKitMergeLocalLastDateMaxRetryReached;
@property (nonatomic, retain) NSNumber *cloudKitMigrationDelayAfterError;
@property (nonatomic) bool cloudKitMigrationDisableCleanUp;
@property (nonatomic, retain) NSNumber *cloudKitMigrationMaxNumFailures;
@property (nonatomic, retain) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (nonatomic, retain) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (nonatomic, retain) NSNumber *cloudKitMigrationSimulatedError;
@property (nonatomic, retain) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (nonatomic, readonly) bool dataaccessDaemonStopSyncingReminders;
@property (nonatomic) bool databaseMigrationTestModeEnabled;
@property (nonatomic) bool databaseMigrationTimedOut;
@property (nonatomic) bool debugSimulateSqliteFull;
@property (nonatomic) bool disableAlarmEngineDataSourcePrefetching;
@property (nonatomic) bool enableAssignmentNotifications;
@property (nonatomic) bool enableInAppDebugMenu;
@property (nonatomic) bool enableWelcomeScreen;
@property (nonatomic) bool forceShowWelcomeScreen;
@property (nonatomic) bool isDatabaseMigrated;
@property (nonatomic, copy) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (nonatomic, copy) NSDate *lastPresentAlarmDate;
@property (nonatomic, copy) NSData *lastSuggestedAttributesAutoTrainingToken;
@property (nonatomic, copy) NSDate *lastSyncPoll;
@property (nonatomic, readonly) bool newAppShouldTakeoverEKReminderNotifications;
@property (nonatomic, copy) NSDate *nextScheduledAlarmDate;
@property (nonatomic, retain) REMObjectID *preferredDefaultListID;
@property (nonatomic, retain) NSURL *preferredDefaultListObjectIDUrl;
@property (nonatomic) bool showRemindersAsOverdue;
@property (nonatomic) bool simulateMAIDAccount;
@property (nonatomic, readonly) bool siriShouldRouteIntentsToNewRemindersApp;
@property (nonatomic, copy) NSNumber *spotlightIndexVersion;
@property (nonatomic, copy) NSDictionary *suggestedAttributesAccepted;
@property (nonatomic, copy) NSDictionary *suggestedAttributesHarvestingOverrides;
@property (nonatomic, copy) NSDictionary *suggestedAttributesTrainingOverrides;
@property (nonatomic, retain) NSDateComponents *todayNotificationFireTime;
@property (nonatomic, copy) NSData *userInteractionsData;

+ (id)defaultValues;
+ (id)storageNumberForTodayNotificationTime:(id)arg1;
+ (id)todayNotificationFireTimeFromStorageNumber:(id)arg1;

- (void)_deletePreferredDefaultListObjectIDUrl;
- (id)_pptPreferredDefaultListIDKey;
- (id)_reminderIDAttributeKey:(id)arg1 attributeType:(id)arg2;
- (id)acAccountIdentifierToMergeLocalDataIntoSyncData;
- (id)acAccountIdentifierToMigrateInactivatedCalDavData;
- (id)accountsListCategorizedCountsCache;
- (id)cloudKitMergeLocalLastBuildVersionMaxRetryReached;
- (id)cloudKitMergeLocalLastDateMaxRetryReached;
- (id)cloudKitMigrationDelayAfterError;
- (bool)cloudKitMigrationDisableCleanUp;
- (id)cloudKitMigrationMaxNumFailures;
- (id)cloudKitMigrationMaxNumInvocations;
- (id)cloudKitMigrationObserverPollingInterval;
- (id)cloudKitMigrationSimulatedError;
- (id)cloudKitResultsLimitPerSyncOperation;
- (bool)dataaccessDaemonStopSyncingReminders;
- (bool)databaseMigrationTestModeEnabled;
- (bool)databaseMigrationTimedOut;
- (bool)debugSimulateSqliteFull;
- (void)deletePreferredDefaultListID;
- (bool)disableAlarmEngineDataSourcePrefetching;
- (bool)enableAssignmentNotifications;
- (bool)enableInAppDebugMenu;
- (bool)enableWelcomeScreen;
- (bool)forceShowWelcomeScreen;
- (bool)hasSuggestedRecentlyForReminderWithID:(id)arg1 attributeType:(id)arg2;
- (id)initWithSuiteName:(id)arg1 containerURL:(id)arg2;
- (bool)isDatabaseMigrated;
- (id)lastDatabaseMigrationSystemBuildVersion;
- (id)lastPresentAlarmDate;
- (id)lastSuggestedAttributesAutoTrainingToken;
- (id)lastSyncPoll;
- (bool)newAppShouldTakeoverEKReminderNotifications;
- (id)nextScheduledAlarmDate;
- (id)observePreferredDefaultListIDWithBlock:(id /* block */)arg1;
- (id)observeShowRemindersAsOverdueWithBlock:(id /* block */)arg1;
- (void)ppt_handleInstall;
- (void)ppt_handleRestore;
- (id)preferredDefaultListID;
- (id)preferredDefaultListObjectIDUrl;
- (void)setAcAccountIdentifierToMergeLocalDataIntoSyncData:(id)arg1;
- (void)setAcAccountIdentifierToMigrateInactivatedCalDavData:(id)arg1;
- (void)setAccountsListCategorizedCountsCache:(id)arg1;
- (void)setBestKForKNN:(id)arg1;
- (void)setCloudKitMergeLocalLastBuildVersionMaxRetryReached:(id)arg1;
- (void)setCloudKitMergeLocalLastDateMaxRetryReached:(id)arg1;
- (void)setCloudKitMigrationDelayAfterError:(id)arg1;
- (void)setCloudKitMigrationDisableCleanUp:(bool)arg1;
- (void)setCloudKitMigrationMaxNumFailures:(id)arg1;
- (void)setCloudKitMigrationMaxNumInvocations:(id)arg1;
- (void)setCloudKitMigrationObserverPollingInterval:(id)arg1;
- (void)setCloudKitMigrationSimulatedError:(id)arg1;
- (void)setCloudKitResultsLimitPerSyncOperation:(id)arg1;
- (void)setCoreBehaviorTrainingParameters:(id)arg1;
- (void)setDatabaseMigrationTestModeEnabled:(bool)arg1;
- (void)setDatabaseMigrationTimedOut:(bool)arg1;
- (void)setDebugSimulateSqliteFull:(bool)arg1;
- (void)setDisableAlarmEngineDataSourcePrefetching:(bool)arg1;
- (void)setEnableAssignmentNotifications:(bool)arg1;
- (void)setEnableInAppDebugMenu:(bool)arg1;
- (void)setEnableWelcomeScreen:(bool)arg1;
- (void)setForceShowWelcomeScreen:(bool)arg1;
- (void)setIsDatabaseMigrated:(bool)arg1;
- (void)setLastDatabaseMigrationSystemBuildVersion:(id)arg1;
- (void)setLastPresentAlarmDate:(id)arg1;
- (void)setLastSuggestedAttributesAutoTrainingToken:(id)arg1;
- (void)setLastSyncPoll:(id)arg1;
- (void)setNextScheduledAlarmDate:(id)arg1;
- (void)setPreferredDefaultListID:(id)arg1;
- (void)setPreferredDefaultListObjectIDUrl:(id)arg1;
- (void)setShowRemindersAsOverdue:(bool)arg1;
- (void)setSimulateMAIDAccount:(bool)arg1;
- (void)setSpotlightIndexVersion:(id)arg1;
- (void)setSuggestedAttributesAccepted:(id)arg1;
- (void)setSuggestedAttributesHarvestingOverrides:(id)arg1;
- (void)setSuggestedAttributesTrainingOverrides:(id)arg1;
- (void)setTodayNotificationFireTime:(id)arg1;
- (void)setUserInteractionsData:(id)arg1;
- (bool)showRemindersAsOverdue;
- (bool)simulateMAIDAccount;
- (bool)siriShouldRouteIntentsToNewRemindersApp;
- (id)spotlightIndexVersion;
- (id)streamTodayNotificationFireTime:(id /* block */)arg1;
- (id)suggestedAttributesAccepted;
- (id)suggestedAttributesHarvestingOverrides;
- (id)suggestedAttributesTrainingOverrides;
- (id)todayNotificationFireTime;
- (void)updateAcceptedAttributesForReminderWithID:(id)arg1 attributeType:(id)arg2;
- (id)userInteractionsData;

@end