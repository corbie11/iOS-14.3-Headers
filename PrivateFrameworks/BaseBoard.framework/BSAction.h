/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAction : NSObject <BSDebugDescriptionProviding, BSInvalidatable, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding> {
    bool  _expectsResponse;
    bool  _hasTimeout;
    BSSettings * _info;
    bool  _originatingAction;
    NSObject<OS_dispatch_queue> * _queue;
    BSAuditHistory * _queue_auditHistory;
    id /* block */  _queue_handler;
    bool  _queue_hasBeenNeuteredForEncode;
    bool  _queue_hasBeenNeuteredForSend;
    bool  _queue_invalidated;
    id /* block */  _queue_invalidationHandler;
    BSActionListenerToken * _queue_listenerToken;
    NSArray * _queue_neuteredCallStack;
    BSPortDeathSentinel * _queue_portDeathSentinel;
    BSMachPortReceiveRight * _queue_receiveRight;
    BSActionResponse * _queue_response;
    BSMachPortTransferableSendRight * _queue_sendRight;
    BSTimer * _queue_timer;
    unsigned long long  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_expectsResponse, nonatomic, readonly) bool expectsResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSSettings *info;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)supportsSecureCoding;

- (bool)_expectsResponse;
- (bool)canSendResponse;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (long long)UIActionType;

@end