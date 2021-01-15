/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPAppleMediaServicesServer : NSObject <GEOAppleMediaServicesProtocol, NSXPCListenerDelegate> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)arg1;
- (id)additionalParameterWithType:(long long)arg1;
- (void)cleanConnections;
- (id)connections;
- (void)dealloc;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 type:(long long)arg3 artworkSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5 completion:(id /* block */)arg6;
- (void)setConnections:(id)arg1;
- (void)setListener:(id)arg1;

@end