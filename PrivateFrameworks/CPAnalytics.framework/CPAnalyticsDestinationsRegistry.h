/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray * _destinations;
}

@property (nonatomic, readonly) NSMutableArray *destinations;

- (void).cxx_destruct;
- (void)_parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)_readConfiguration:(id)arg1;
- (void)addDestination:(id)arg1;
- (id)destinations;
- (id)init;
- (void)removeDestination:(id)arg1;
- (void)removePhotoLibraryFromDestinations;
- (void)sendToAllDestinations:(id)arg1;
- (void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)updateWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end