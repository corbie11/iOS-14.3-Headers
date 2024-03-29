/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSetWallpaperAction : WFAction

+ (id)unableToGetImageError;
+ (id)userInterfaceProtocol;

- (void)getImageForAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)imageTooLargeError;
- (id)invalidLocationErrorWithProvidedLocation:(id)arg1;
- (id)locationParameterValues;
- (id)missingImageError;
- (double)preferredMaximumSize;
- (id)readableLocationParameterValues;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)setWallpaperFailedError;
- (void)setWallpaperWithImage:(id)arg1;
- (long long)wallpaperLocationFromLocationParameter;

@end
