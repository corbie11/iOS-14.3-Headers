/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingFakeAccount : CKDBackingAccount {
    ACAccount * _fakeCKAccount;
}

@property (nonatomic, retain) ACAccount *fakeCKAccount;

+ (void)_setUpFakeAccountShenanigans;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5;

- (void).cxx_destruct;
- (void)_checkAndLogIfAccountError;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5;
- (void)_setOverridesOnVettingContext:(id)arg1;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (void)deviceCountWithCompletionHandler:(id /* block */)arg1;
- (id)fakeCKAccount;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (id)password;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setFakeCKAccount:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;

@end