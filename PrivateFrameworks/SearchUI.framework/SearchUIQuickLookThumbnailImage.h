/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIQuickLookThumbnailImage : SearchUIImage {
    bool  _isCompact;
    QLThumbnailGenerationRequest * _request;
    SFSearchResult * _result;
}

@property bool isCompact;
@property QLThumbnailGenerationRequest *request;
@property (nonatomic, retain) SFSearchResult *result;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithResult:(id)arg1 isCompact:(bool)arg2;
- (bool)isCompact;
- (bool)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)request;
- (id)result;
- (void)setIsCompact:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (id)url;

@end