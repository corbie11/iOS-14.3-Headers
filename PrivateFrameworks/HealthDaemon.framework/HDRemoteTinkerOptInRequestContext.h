/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRemoteTinkerOptInRequestContext : NSObject {
    id /* block */  _completion;
    HDCodableTinkerOptInRequest * _request;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) HDCodableTinkerOptInRequest *request;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)request;
- (void)setCompletion:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end