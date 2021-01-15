/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate> {
    bool  _addingDefaultShortcuts;
    <VCDatabaseProvider> * _databaseProvider;
    HMHomeManager * _homeManager;
}

@property (nonatomic) bool addingDefaultShortcuts;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) <VCDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHomeManager *homeManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDefaultShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)addDefaultShortcutsWithCompletion:(id /* block */)arg1;
- (void)addNewFolderWithPersonalizedShortcuts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (bool)addingDefaultShortcuts;
- (void)createShortcutWithRecordData:(id)arg1 name:(id)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (void)createSleepWorkflow:(id)arg1 completion:(id /* block */)arg2;
- (id)database;
- (id)databaseProvider;
- (void)deleteSleepWorkflowWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteStaleSuggestions;
- (void)deleteSuggestionsFromApps:(id)arg1;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 name:(id)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (void)drawGlyphs:(id)arg1 withBackgroundColorValues:(id)arg2 intoContext:(id)arg3;
- (void)getDefaultShortcutEligibilityWithCompletion:(id /* block */)arg1;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getResultsForWorkflowQuery:(id)arg1 resultClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(bool)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg1 shouldFilterBySleep:(bool)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (void)getValueForDescriptor:(id)arg1 resultClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (id)homeManager;
- (id)initWithDatabaseProvider:(id)arg1;
- (bool)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (void)logHomescreenFastPathRunEventForShortcutWithWebClip:(id)arg1;
- (bool)lsDatabaseChangedSinceLastCheck;
- (bool)phraseHasHomeKitConflict:(id)arg1;
- (void)requestDataMigrationWithCompletion:(id /* block */)arg1;
- (void)requestShortcutsSpotlightFullReindex;
- (void)resetDefaultShortcutFlagsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setAddingDefaultShortcuts:(bool)arg1;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
- (void)updateLSDatabaseAnchors;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(id /* block */)arg5;

@end