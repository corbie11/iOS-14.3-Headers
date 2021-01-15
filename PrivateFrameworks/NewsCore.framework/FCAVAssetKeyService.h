/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType> {
    NFPromise * _fairPlayBaseURLPromise;
    NFLazy * _requestEncoder;
    NFLazy * _session;
}

@property (nonatomic, readonly) NFPromise *fairPlayBaseURLPromise;
@property (nonatomic, readonly) NFLazy *requestEncoder;
@property (nonatomic, readonly) NFLazy *session;

- (void).cxx_destruct;
- (id)_errorForBadRequestWithResponseData:(id)arg1 URL:(id)arg2;
- (void)_performHTTPRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)fairPlayBaseURLPromise;
- (void)fetchAppCertificateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchContentKeyWithURI:(id)arg1 spcData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1;
- (id)requestEncoder;
- (id)session;

@end