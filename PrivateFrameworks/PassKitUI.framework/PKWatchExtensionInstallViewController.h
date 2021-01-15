/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate> {
    ASCLockupView * _appStoreView;
    PKWatchDeviceAppCarouselView * _deviceImageView;
    PKPaymentPass * _paymentPass;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentWebService * _webservice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentWebService *webservice;

+ (bool)shouldShowWatchExtensionInstallViewControllerForPaymentPass:(id)arg1 webService:(id)arg2;

- (void).cxx_destruct;
- (void)_installNowPressed;
- (void)_proceedToNextScreen;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 provisioningController:(id)arg2 webService:(id)arg3 context:(long long)arg4 setupDelegate:(id)arg5;
- (void)loadView;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)paymentPass;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (id)provisioningController;
- (void)setPaymentPass:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setWebservice:(id)arg1;
- (id)setupDelegate;
- (id)webservice;

@end