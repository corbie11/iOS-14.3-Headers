/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {
    NSXPCConnection * _connection;
}

+ (id)service;

- (void).cxx_destruct;
- (id)connection;
- (void)requestImageProcessingTask:(Class)arg1 forAssetURL:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(id /* block */)arg4;
- (void)requestImageProcessingTask:(Class)arg1 forPixelBuffer:(struct __CVBuffer { }*)arg2 withOptions:(id)arg3 andCompletionHandler:(id /* block */)arg4;
- (id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2;

@end