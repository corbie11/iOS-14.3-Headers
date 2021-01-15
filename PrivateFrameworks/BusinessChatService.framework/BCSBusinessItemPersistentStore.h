/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessItemPersistentStore : BCSPersistentStore

+ (const char *)debugQueueName;

- (id)_databasePath;
- (bool)_executeDeleteBusinessItemSQLQuery:(const char *)arg1;
- (id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char *)arg1;
- (bool)_insertBusinessItem:(id)arg1 withTTL:(double)arg2;
- (bool)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2;
- (bool)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2;
- (id)databasePath;
- (bool)deleteBusinessItem:(id)arg1;
- (bool)deleteBusinessItemWithBizID:(id)arg1;
- (bool)deleteBusinessItemWithPhoneNumber:(id)arg1;
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1;
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1;
- (bool)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2;
- (const char *)schema;
- (long long)schemaVersion;
- (bool)updateLastRetrievedDateForBusinessItem:(id)arg1;
- (bool)updateTTL:(double)arg1 forBusinessItem:(id)arg2;

@end