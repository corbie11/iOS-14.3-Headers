/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBundleComplicationManager : NSObject {
    NTKBundleComplicationDataSourceLoader * _loader;
}

@property (nonatomic, readonly) NTKBundleComplicationDataSourceLoader *loader;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)bundleComplicationExistsForAppBundleIdentifier:(id)arg1;
- (bool)bundleExistsWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (Class)dataSourceClassForBundleComplication:(id)arg1;
- (void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(id /* block */)arg3;
- (id)groupIdentifierForBundleIdentifier:(id)arg1;
- (id)init;
- (id)loader;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (id)localizedComplicationNameForBundleIdentifier:(id)arg1;

@end