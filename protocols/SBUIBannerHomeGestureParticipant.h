/* Generated by RuntimeBrowser.
 */

@protocol SBUIBannerHomeGestureParticipant <NSObject>

@required

- (<SBUIBannerHomeGestureContext> *)bannerHomeGestureContext;
- (void)setBannerHomeGestureContext:(id <SBUIBannerHomeGestureContext>)arg1;

@optional

- (bool)homeAffordanceDidCrossThreshold;
- (void)homeGestureOwnershipDidChange:(bool)arg1;

@end