/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {
    PLPhotoLibraryBundleController * _bundleController;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)arg1;
- (void)getPhotoLibraryURLsWithReply:(id /* block */)arg1;
- (id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2;
- (void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(id /* block */)arg4;

@end