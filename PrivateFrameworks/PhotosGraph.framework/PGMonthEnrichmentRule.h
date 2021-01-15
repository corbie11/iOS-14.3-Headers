/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    PGManager * _manager;
    <PGHighlightItemModelReader> * _modelReader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGManager *manager;
@property (nonatomic, readonly) <PGHighlightItemModelReader> *modelReader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* block */)arg2 maximumNumberOfVisibleItems:(unsigned long long)arg3 maximumNumberOfVisibleRegularItems:(unsigned long long)arg4;
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;
- (id)initWithManager:(id)arg1 modelReader:(id)arg2;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)manager;
- (id)modelReader;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;

@end