/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPUploader : NSObject {
    struct uarpControllerAppleObj { 
        struct uarpControllerAppleCallbacksObj { 
            int (*fPreparePersonalizationAsset)(); 
            int (*fPersonalizeAsset)(); 
        } callbacks; 
    }  _appleController;
    UARPController * _controller;
    struct uarpControllerCallbacksObj { 
        int (*fRequestBuffer)(); 
        int (*fReturnBuffer)(); 
        int (*fRequestTransmitMsgBuffer)(); 
        int (*fReturnTransmitMsgBuffer)(); 
        int (*fSendMessage)(); 
        int (*fAssetProcessingComplete)(); 
        int (*fUpdateInformationTLV)(); 
        int (*fRequestBytesFromAsset)(); 
        int (*fApplyStagedAssetsStatus)(); 
        int (*fVendorSpecific)(); 
    }  _coreCallbacks;
    struct uarpControllerObj { 
        void *pDelegate; 
        void *pVendorExtension; 
        int nextRemoteAccessoryID; 
        int nextAssetID; 
        struct uarpPlatformOptionsObj { 
            unsigned int maxTxPayloadLength; 
            unsigned int maxRxPayloadLength; 
            unsigned int payloadWindowLength; 
        } options; 
        struct uarpControllerCallbacksObj { 
            int (*fRequestBuffer)(); 
            int (*fReturnBuffer)(); 
            int (*fRequestTransmitMsgBuffer)(); 
            int (*fReturnTransmitMsgBuffer)(); 
            int (*fSendMessage)(); 
            int (*fAssetProcessingComplete)(); 
            int (*fUpdateInformationTLV)(); 
            int (*fRequestBytesFromAsset)(); 
            int (*fApplyStagedAssetsStatus)(); 
            int (*fVendorSpecific)(); 
        } callbacks; 
        struct uarpRemoteAccessoryObj {} *pAccessoryList; 
        struct uarpControllerAssetObj {} *pAssetList; 
    }  _coreController;
    struct uarpPlatformOptionsObj { 
        unsigned int maxTxPayloadLength; 
        unsigned int maxRxPayloadLength; 
        unsigned int payloadWindowLength; 
    }  _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _watchdogTimer;
    NSObject<OS_os_log> * _xpcLog;
}

@property (readonly) UARPController *controller;

- (void).cxx_destruct;
- (bool)addAccessory:(id)arg1 error:(id*)arg2;
- (void)applyStagedAssetStatus:(id)arg1 status:(unsigned short)arg2;
- (bool)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)cancelFirmwareStagingForAccessory:(id)arg1 asset:(id)arg2;
- (void)cancelThrottleWatchdog;
- (void)checkSendThrottleData:(id)arg1;
- (id)controller;
- (void)dealloc;
- (void)expireThrottleWatchdog:(id)arg1;
- (id)initWithController:(id)arg1 queue:(id)arg2;
- (bool)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)pauseAssetTransfersForAccessory:(id)arg1;
- (unsigned int)personalizeAsset:(struct uarpControllerAssetObj { struct uarpAssetCoreObj { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned int x_1_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_1_1_4; unsigned int x_1_1_5; unsigned short x_1_1_6; } x1; unsigned short x2; void *x3; void *x4; struct uarpRemoteAccessoryObj {} *x5; struct uarpControllerAssetObj {} *x6; }*)arg1 forAccessory:(id)arg2;
- (void)processingComplete:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3;
- (void)queryFirmwareUpdateResultForAccessory:(id)arg1;
- (long long)queryProperty:(unsigned long long)arg1 forAccessory:(id)arg2;
- (unsigned int)recvAppleAccessoryInfoForAccessory:(id)arg1 buffer:(struct UARPMsgAccessoryAppleInformationResponse { unsigned int x1; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (unsigned int)recvHeySiriModelInfoForAccessory:(id)arg1 buffer:(struct AppleUARPHeySiriModelInfoResponse { unsigned int x1; unsigned char x2; unsigned char x3; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvHeySiriNumModelsForAccessory:(id)arg1 buffer:(struct AppleUARPHeySiriNumModelsResponse { unsigned int x1; unsigned char x2; unsigned char x3; struct UARPVersion { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvPersonalizationInfoResponseForAccessory:(id)arg1 buffer:(struct AppleUARPPersonalizationInfoResponse { unsigned int x1; unsigned int x2; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvPersonalizationRequestForAccessory:(id)arg1 buffer:(struct AppleUARPPersonalizationRequired { unsigned short x1; unsigned int x2; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvVendorSpecificMessage:(unsigned short)arg1 forAccessory:(id)arg2 oui1:(unsigned char)arg3 oui2:(unsigned char)arg4 oui3:(unsigned char)arg5 buffer:(char *)arg6 length:(unsigned int)arg7;
- (bool)removeAccessory:(id)arg1 error:(id*)arg2;
- (unsigned int)requestBytesInRangeForAccessory:(id)arg1 asset:(id)arg2 bytes:(void*)arg3 length:(unsigned int)arg4 offset:(unsigned int)arg5 bytesCopied:(unsigned int*)arg6 offsetUsed:(unsigned int*)arg7;
- (bool)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)resumeAssetTransfersForAccessory:(id)arg1;
- (unsigned int)sendData:(id)arg1 uarpMsg:(id)arg2;
- (unsigned int)sendMsgToThrottleQueue:(id)arg1 uarpMsg:(id)arg2 needsResponse:(bool)arg3;
- (void)setThrottleWatchdog:(id)arg1;
- (void)updateInfo:(id)arg1 type:(unsigned int)arg2 length:(unsigned int)arg3 value:(char *)arg4;

@end