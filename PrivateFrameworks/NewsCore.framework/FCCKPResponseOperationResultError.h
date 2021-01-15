/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {
    FCCKPResponseOperationResultErrorClient * _clientError;
    NSString * _errorDescription;
    NSString * _errorKey;
    FCCKPResponseOperationResultErrorExtension * _extensionError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    }  _has;
    int  _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer * _serverError;
}

@property (nonatomic, retain) FCCKPResponseOperationResultErrorClient *clientError;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorKey;
@property (nonatomic, retain) FCCKPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic, readonly) bool hasClientError;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorKey;
@property (nonatomic, readonly) bool hasExtensionError;
@property (nonatomic) bool hasRetryAfterSeconds;
@property (nonatomic, readonly) bool hasServerError;
@property (nonatomic) int retryAfterSeconds;
@property (nonatomic, retain) FCCKPResponseOperationResultErrorServer *serverError;

- (id)clientError;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (id)errorKey;
- (id)extensionError;
- (bool)hasClientError;
- (bool)hasErrorDescription;
- (bool)hasErrorKey;
- (bool)hasExtensionError;
- (bool)hasRetryAfterSeconds;
- (bool)hasServerError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)retryAfterSeconds;
- (id)serverError;
- (void)setClientError:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorKey:(id)arg1;
- (void)setExtensionError:(id)arg1;
- (void)setHasRetryAfterSeconds:(bool)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setServerError:(id)arg1;
- (void)writeTo:(id)arg1;

@end