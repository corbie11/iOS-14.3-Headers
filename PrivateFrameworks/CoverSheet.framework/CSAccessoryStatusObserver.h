/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSAccessoryStatusObserver : NSObject {
    <NSObject> * _animationStatusNotificationToken;
    <NSObject> * _attachmentNotificationToken;
    <CSAccessoryStatusDelegate> * _delegate;
    <NSObject> * _detachmentNotificationToken;
    <CSAccessoryStatusProviding> * _statusProvider;
}

@property (nonatomic) <CSAccessoryStatusDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoverSheetContext:(id)arg1;
- (void)notifiedWithAccessoryAnimationStatusChanged;
- (void)notifiedWithAccessoryAttached;
- (void)notifiedWithAccessoryDetached;
- (void)setDelegate:(id)arg1;

@end