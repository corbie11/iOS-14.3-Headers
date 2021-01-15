/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest {
    long long  _barcodeCount;
    NSString * _dpanIdentifier;
    NSArray * _encryptionCertificateChain;
    long long  _fetchReason;
    NSString * _lastUsedBarcodeIdentifier;
    PKPaymentPass * _pass;
}

@property (nonatomic) long long barcodeCount;
@property (nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSArray *encryptionCertificateChain;
@property (nonatomic) long long fetchReason;
@property (nonatomic, copy) NSString *lastUsedBarcodeIdentifier;
@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;
- (long long)barcodeCount;
- (id)dpanIdentifier;
- (id)encryptionCertificateChain;
- (long long)fetchReason;
- (id)lastUsedBarcodeIdentifier;
- (id)pass;
- (void)setBarcodeCount:(long long)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setEncryptionCertificateChain:(id)arg1;
- (void)setFetchReason:(long long)arg1;
- (void)setLastUsedBarcodeIdentifier:(id)arg1;
- (void)setPass:(id)arg1;

@end