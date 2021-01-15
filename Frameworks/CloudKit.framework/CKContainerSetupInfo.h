/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerSetupInfo : NSObject <NSCopying, NSSecureCoding> {
    CKAccountOverrideInfo * _accountInfoOverride;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString * _applicationBundleIdentifierOverrideForPushTopicGeneration;
    NSString * _applicationBundleIdentifierOverrideForTCC;
    bool  _bypassPCSEncryption;
    bool  _captureResponseHTTPHeaders;
    unsigned int  _clientSDKVersion;
    bool  _connectToTestingDaemon;
    NSString * _containerEncryptionServiceName;
    CKContainerID * _containerID;
    NSDictionary * _fakeEntitlements;
    bool  _forceEnableReadOnlyManatee;
    CKFrameworkFingerprint * _frameworkFingerprint;
    bool  _holdAllOperations;
    bool  _masqueradeAsThirdPartyApp;
    unsigned long long  _mmcsEncryptionSupport;
    NSString * _personaIdentifier;
    bool  _returnPCSMetadata;
    bool  _useClearAssetEncryption;
    bool  _useZoneWidePCS;
    bool  _wantsSiloedContext;
}

@property (nonatomic, copy) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForTCC;
@property (nonatomic) bool bypassPCSEncryption;
@property (nonatomic) bool captureResponseHTTPHeaders;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) bool connectToTestingDaemon;
@property (nonatomic, retain) NSString *containerEncryptionServiceName;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, retain) NSDictionary *fakeEntitlements;
@property (nonatomic) bool forceEnableReadOnlyManatee;
@property (nonatomic, retain) CKFrameworkFingerprint *frameworkFingerprint;
@property (nonatomic) bool holdAllOperations;
@property (nonatomic) bool masqueradeAsThirdPartyApp;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (nonatomic, retain) NSString *personaIdentifier;
@property (nonatomic) bool returnPCSMetadata;
@property (nonatomic) bool useClearAssetEncryption;
@property (nonatomic) bool useZoneWidePCS;
@property (nonatomic) bool wantsSiloedContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountInfoOverride;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)applicationBundleIdentifierOverrideForPushTopicGeneration;
- (id)applicationBundleIdentifierOverrideForTCC;
- (bool)bypassPCSEncryption;
- (bool)captureResponseHTTPHeaders;
- (unsigned int)clientSDKVersion;
- (bool)connectToTestingDaemon;
- (id)containerEncryptionServiceName;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fakeEntitlements;
- (bool)forceEnableReadOnlyManatee;
- (id)frameworkFingerprint;
- (id)hashString;
- (bool)holdAllOperations;
- (id)initWithCoder:(id)arg1;
- (bool)masqueradeAsThirdPartyApp;
- (unsigned long long)mmcsEncryptionSupport;
- (id)personaIdentifier;
- (bool)returnPCSMetadata;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForContainerAccess:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForTCC:(id)arg1;
- (void)setBypassPCSEncryption:(bool)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setConnectToTestingDaemon:(bool)arg1;
- (void)setContainerEncryptionServiceName:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setFakeEntitlements:(id)arg1;
- (void)setForceEnableReadOnlyManatee:(bool)arg1;
- (void)setFrameworkFingerprint:(id)arg1;
- (void)setHoldAllOperations:(bool)arg1;
- (void)setMasqueradeAsThirdPartyApp:(bool)arg1;
- (void)setMmcsEncryptionSupport:(unsigned long long)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setReturnPCSMetadata:(bool)arg1;
- (void)setUseClearAssetEncryption:(bool)arg1;
- (void)setUseZoneWidePCS:(bool)arg1;
- (void)setWantsSiloedContext:(bool)arg1;
- (bool)useClearAssetEncryption;
- (bool)useZoneWidePCS;
- (bool)wantsSiloedContext;

@end