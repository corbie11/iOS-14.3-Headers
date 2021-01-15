/* Generated by RuntimeBrowser.
 */

@protocol HROnboardingManagerDataSource <NSObject>

@required

- (NSArray *)availableOnboardingStepsForOnboardingManager:(HROnboardingManager *)arg1;
- (HROnboardingSequence *)onboardingManager:(HROnboardingManager *)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;

@optional

- (HROnboardingBaseViewController *)onboardingManager:(HROnboardingManager *)arg1 customViewControllerForPage:(HROnboardingPage *)arg2;
- (long long)upgradingFromAlgorithmVersionForOnboardingManager:(HROnboardingManager *)arg1;

@end