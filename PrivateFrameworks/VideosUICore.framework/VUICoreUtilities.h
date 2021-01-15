/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUICoreUtilities : NSObject

+ (id)TVUIKitBundle;
+ (id)URLForResource:(id)arg1;
+ (id)VideosUIBundle;
+ (id)VideosUICoreBundle;
+ (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
+ (bool)_cornerRadiiFromImgTreatmentValue:(id)arg1 width:(double)arg2 cornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; }*)arg3 circle:(bool*)arg4;
+ (bool)_cornerRadiiWithBorderRadius:(id)arg1 cornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; }*)arg2 imageWidth:(double)arg3 imageTreatmentValue:(id)arg4 circle:(bool*)arg5;
+ (id)_getImageFromURLorBundle:(id)arg1;
+ (id)_imageForResource:(id)arg1;
+ (id)_vuiCoreResourceMap;
+ (bool)canHandleDecodingOnRenderThread;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (const struct CGPath { }*)createPathForRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isContinuous:(bool)arg3;
+ (id)defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x1; double x2; })arg1 upscaleFactor:(double)arg2;
+ (void)image:(id)arg1 didCompleteLoadingForCache:(long long)arg2 requestRecord:(id)arg3;
+ (id)imageForResource:(id)arg1;
+ (id)mobileGestaltStringForKey:(struct __CFString { }*)arg1;
+ (struct _VUICornerRadii { double x1; double x2; double x3; double x4; })radiiFromRadius:(double)arg1;
+ (bool)radiiIsZero:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3;
+ (const struct CGPath { }*)shadowPathWithCornerRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1 andScaledSize:(struct CGSize { double x1; double x2; })arg2;

@end