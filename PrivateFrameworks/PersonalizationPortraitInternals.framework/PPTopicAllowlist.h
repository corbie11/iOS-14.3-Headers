/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicAllowlist : NSObject {
    _PASCFBurstTrie * _allowlistTrie;
    PPTrialWrapper * _trialWrapper;
}

+ (id)_keyFor:(id)arg1 of:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadAssetData;
- (bool)_topicIsAllowedForClientProcess:(id)arg1 topic:(id)arg2;
- (id)filterTopicDictionary:(id)arg1 clientProcess:(id)arg2;
- (id)indicesOfAllowedTopicsInRecordArray:(id)arg1 clientProcess:(id)arg2;
- (id)indicesOfAllowedTopicsInScoredTopicArray:(id)arg1 clientProcess:(id)arg2;
- (id)initWithTrialWrapper:(id)arg1;
- (bool)shouldBypassAllowlist:(id)arg1;

@end