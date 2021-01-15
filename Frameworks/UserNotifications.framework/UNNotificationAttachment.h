/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSString * _identifier;
    UNNotificationAttachmentOptions * _options;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) UNNotificationAttachmentOptions *options;
@property (nonatomic, readonly, copy) NSString *type;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)family;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 URL:(id)arg2 type:(id)arg3 options:(id)arg4;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)type;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (void)blt_swizzleEncodeWithCoder;

- (id)_blt_encodedShouldAddNotificationAttachmentOptions;
- (void)_blt_setEncodedShouldAddNotificationAttachmentOptions:(id)arg1;
- (void)blt_encodeWithCoder:(id)arg1;
- (void)blt_postEncodeNotificationAttachmentOptions;
- (void)blt_preEncodeShouldAddNotificationAttachmentOptions;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

+ (id)_systemDirectoryURL;
+ (unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id*)arg3;

@end