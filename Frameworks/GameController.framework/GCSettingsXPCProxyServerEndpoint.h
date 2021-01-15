/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCSettingsXPCProxyServerEndpoint : NSObject <GCSettingsXPCProxyRemoteServerEndpointInterface, _GCIPCEndpointServer> {
    <GCSettingsXPCProxyRemoteClientEndpointInterface> * _clientEndpoint;
    <_GCIPCEndpointConnection> * _connection;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    <GCSettingsXPCProxyServerEndpointDelegate> * _delegate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    unsigned long long  _pendingUpdates;
    GCControllerSettings * _settingsDefault;
    GCControllerSettings * _settingsForBundleID;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GCSettingsXPCProxyServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) <_GCControllerComponentDescription> *receiverDescription;
@property (nonatomic, retain) GCControllerSettings *settingsDefault;
@property (nonatomic, retain) GCControllerSettings *settingsForBundleID;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (void)fetchSettingsWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3;
- (id)initWithInitialValueForBundleID:(id)arg1 defaultSettings:(id)arg2;
- (void)invalidateClient;
- (void)invalidateConnection;
- (id)receiverDescription;
- (void)setDelegate:(id)arg1;
- (void)setSettingsDefault:(id)arg1;
- (void)setSettingsForBundleID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)settingsDefault;
- (id)settingsForBundleID;
- (id)userInfo;

@end