/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
 */

@interface APPCContext : APPCBaseContext <APPCMetricRegister, APPCPromotableContext, APPCPromotableUIContext> {
    void blacklistEvaluator;
    void contextQueue;
    void fetching;
    void fetchingLock;
    void inventory;
    void inventoryLock;
    void lastError;
    void limit;
    void newsContext;
    void placeholders;
    void placeholdersLock;
    void prefetchLock;
    void requester;
    void waiting;
    void waitingLock;
}

@property (nonatomic, readonly) long long hash;

// Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent

- (void).cxx_destruct;
- (void)dealloc;
- (long long)hash;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4 newsContext:(id)arg5;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4 newsContext:(id)arg5;
- (void)nativePromotedContentWithSize:(struct CGSize { double x1; double x2; })arg1 contentFetched:(id /* block */)arg2;
- (void)prefetchPromotedContentWithRequests:(id)arg1;
- (id)promotedContentInterstitialWithSize:(struct CGSize { double x1; double x2; })arg1 ready:(id /* block */)arg2;
- (void)promotedContentNativeWithSize:(struct CGSize { double x1; double x2; })arg1 contentFetched:(id /* block */)arg2;
- (id)promotedContentVideoWithSize:(struct CGSize { double x1; double x2; })arg1 placeholderReplacement:(id /* block */)arg2;
- (id)promotedContentWithType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 placeholderReplacement:(id /* block */)arg3;
- (void)registerBlacklistEvaluator:(id /* block */)arg1;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;

// Image: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI

+ (void)cleanupWithIdentifier:(id)arg1;
+ (void)start;

- (void)intersititialReady:(id /* block */)arg1;
- (id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2;
- (id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)newInterstitialRequest:(id)arg1;
- (void)newNativeRequest:(id)arg1;
- (void)newPromotedContent:(id)arg1;
- (id)promotedContentAppAdWithSize:(struct CGSize { double x1; double x2; })arg1 adamId:(id)arg2 adType:(long long)arg3;
- (id)promotedContentInterstitialViewWithInfo:(id)arg1;
- (id)promotedContentInterstitialWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)promotedContentVideo;
- (id)promotedContentViewOfType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)promotedContentViewOfType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 startsCollapsed:(bool)arg3;

@end