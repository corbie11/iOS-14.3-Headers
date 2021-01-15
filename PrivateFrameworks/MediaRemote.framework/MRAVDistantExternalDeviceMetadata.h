/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    MRDeviceInfo * _deviceInfo;
    NSString * _hostName;
    long long  _hostPort;
    NSString * _name;
    MRSupportedProtocolMessages * _supportedMessages;
    bool  _usingSystemPairing;
}

@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) long long hostPort;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) bool usingSystemPairing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)hostName;
- (long long)hostPort;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)supportedMessages;
- (bool)usingSystemPairing;

@end