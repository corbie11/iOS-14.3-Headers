/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal * _internal;
}

@property (nonatomic, readonly) long long autoFocusSystem;
@property (nonatomic, readonly) bool cam_supportsPortraitFrontFacingZoomed;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription { }*formatDescription;
@property (getter=isGlobalToneMappingSupported, nonatomic, readonly) bool globalToneMappingSupported;
@property (nonatomic, readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property (getter=isHighestPhotoQualitySupported, nonatomic, readonly) bool highestPhotoQualitySupported;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (nonatomic, readonly) NSArray *supportedDepthDataFormats;
@property (nonatomic, readonly) NSArray *unsupportedCaptureOutputClasses;
@property (getter=isVideoBinned, nonatomic, readonly) bool videoBinned;
@property (nonatomic, readonly) float videoFieldOfView;
@property (getter=isVideoHDRSupported, nonatomic, readonly) bool videoHDRSupported;
@property (nonatomic, readonly) double videoMaxZoomFactor;
@property (nonatomic, readonly) double videoMaxZoomFactorForDepthDataDelivery;
@property (nonatomic, readonly) double videoMinZoomFactorForDepthDataDelivery;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) bool videoStabilizationSupported;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 frameRateRanges:(id)arg3;
- (long long)autoFocusSystem;
- (int)baseSensorPowerConsumption;
- (void)dealloc;
- (id)debugDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDurationForSessionPreset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDurationForSessionPreset:(id)arg1;
- (float)defaultPortraitLightingEffectStrength;
- (float)defaultSimulatedAperture;
- (id)description;
- (id)figCaptureSourceDepthDataFormat;
- (id)figCaptureSourceVideoFormat;
- (const struct opaqueCMFormatDescription { }*)formatDescription;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (float)hardwareCost;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (unsigned int)internalDemosaicedRawPixelFormat;
- (bool)isCameraCalibrationDataDeliverySupported;
- (bool)isContentAwareDistortionCorrectionSupported;
- (bool)isDeepFusionSupported;
- (bool)isDefaultActiveFormat;
- (bool)isDeferredPhotoProcessingSupported;
- (bool)isDigitalFlashSupported;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToVirtualDeviceFormat:(id)arg1;
- (bool)isExperimental;
- (bool)isFastCapturePrioritizationSupported;
- (bool)isGlobalToneMappingSupported;
- (bool)isHDRSupported;
- (bool)isHighResPhotoFormat;
- (bool)isHighestPhotoQualitySupported;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isLowLightVideoCaptureSupported;
- (bool)isMomentCaptureMovieRecordingSupported;
- (bool)isMultiCamSupported;
- (bool)isNonDestructiveCropSupported;
- (bool)isPhotoFormat;
- (bool)isPortraitEffectsMatteStillImageDeliverySupported;
- (bool)isSISSupported;
- (bool)isSpatialOverCaptureSupported;
- (bool)isStereoFusionSupported;
- (bool)isStillImageDepthSupported;
- (bool)isStillImageDisparitySupported;
- (bool)isStreamingDepthSupported;
- (bool)isStreamingDisparitySupported;
- (bool)isVariableFrameRateVideoCaptureSupported;
- (bool)isVideoBinned;
- (bool)isVideoHDRSupported;
- (bool)isVideoHDRSuspensionSupported;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)isVideoStabilizationSupported;
- (bool)isVisionDataDeliverySupported;
- (bool)isWideColorSupported;
- (int)ispPowerConsumption;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (float)maxPortraitLightingEffectStrength;
- (float)maxSimulatedAperture;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (float)minPortraitLightingEffectStrength;
- (float)minSimulatedAperture;
- (id)optimizedPhotoFilterNames;
- (id)optimizedVideoPreviewFilterNames;
- (bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (float)spatialOverCapturePercentage;
- (long long)stabilizationTypeForTimelapse;
- (id)supportedColorSpaces;
- (unsigned int)supportedDemosaicedRawPixelFormat;
- (id)supportedDepthDataFormats;
- (int)supportedFormatsArrayIndex;
- (unsigned int)supportedRawPixelFormat;
- (id)supportedSemanticSegmentationMatteTypes;
- (int)supportedStabilizationMethod;
- (bool)supportsDynamicCrop;
- (bool)supportsHighProfileH264;
- (bool)supportsHighResolutionStillImageOutput;
- (bool)supportsQuadraHighResolutionStillImageOutput;
- (bool)supportsRedEyeReduction;
- (id)unsupportedCaptureOutputClasses;
- (int)variableSensorPowerConsumption;
- (float)videoFieldOfView;
- (long long)videoHDRFlavor;
- (double)videoMaxZoomFactor;
- (double)videoMaxZoomFactorForCameraCalibrationDataDelivery;
- (double)videoMaxZoomFactorForDepthDataDelivery;
- (double)videoMinZoomFactorForCameraCalibrationDataDelivery;
- (double)videoMinZoomFactorForDepthDataDelivery;
- (id)videoSupportedFrameRateRanges;
- (double)videoZoomFactorUpscaleThreshold;
- (id)vtScalingMode;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

- (int)axm_totalResolutionPixels;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (struct { int x1; int x2; })_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (long long)cam_compareUsingBinning:(id)arg1;
- (long long)cam_compareUsingDimensions:(id)arg1;
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;
- (long long)cam_compareUsingQuality:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cam_frameDurationForVideoConfiguration:(long long)arg1;
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;
- (double)cam_maximumFrameRate;
- (bool)cam_supportsFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)cam_supportsFrameRate:(double)arg1;
- (bool)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4 enableHDR10BitVideo:(bool)arg5;
- (bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (bool)cam_supportsPortraitFrontFacingZoomed;
- (bool)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2 enableHDR10BitVideo:(bool)arg3;

@end