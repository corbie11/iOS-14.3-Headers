/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPAgeMonitor : NSObject {
    NSNumber * _age;
    int  _characteristicUpdateToken;
    id /* block */  _currentDateProvider;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needUpdate;
    HKSPObserverSet * _observers;
}

@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic) int characteristicUpdateToken;
@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) bool needUpdate;
@property (nonatomic, readonly) HKSPObserverSet *observers;

- (void).cxx_destruct;
- (id)_lock_age;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)age;
- (int)characteristicUpdateToken;
- (void)checkForAgeChange;
- (id /* block */)currentDateProvider;
- (void)dealloc;
- (id)healthStore;
- (id)init;
- (id)initWithCurrentDateProvider:(id /* block */)arg1 healthStore:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)needUpdate;
- (id)observers;
- (void)registerForNotifications;
- (void)removeObserver:(id)arg1;
- (void)setCharacteristicUpdateToken:(int)arg1;
- (void)unregisterForNotifications;

@end