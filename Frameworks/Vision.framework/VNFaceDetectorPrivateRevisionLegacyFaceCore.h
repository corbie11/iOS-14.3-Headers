/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector

+ (id)_convertVNOptionsToFaceCoreDetectOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreOptions:(id)arg1 optionsMap:(id)arg2;
+ (id)_convertVNOptionsToFaceCoreSetupOptions:(id)arg1;

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end