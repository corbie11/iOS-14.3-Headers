/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)startListening;
- (void)stopListening;

@end