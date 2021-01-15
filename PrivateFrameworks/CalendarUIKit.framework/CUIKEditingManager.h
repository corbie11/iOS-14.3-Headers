/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKEditingManager : NSObject {
    NSMutableDictionary * _changeHistory;
    NSMutableDictionary * _changedObjectMap;
    NSMutableSet * _editingContextGroups;
    EKEventStore * _eventStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;
@property (retain) NSMutableSet *editingContextGroups;
@property EKEventStore *eventStore;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)changeHistory;
- (id)changedObjectMap;
- (id)editingContextGroups;
- (id)eventStore;
- (id)queue;
- (void)setChangeHistory:(id)arg1;
- (void)setChangedObjectMap:(id)arg1;
- (void)setEditingContextGroups:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setQueue:(id)arg1;

@end