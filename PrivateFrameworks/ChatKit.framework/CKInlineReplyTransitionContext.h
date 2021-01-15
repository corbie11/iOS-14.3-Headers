/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInlineReplyTransitionContext : NSObject {
    NSString * _anchorChatItemGUID;
    bool  _keyboardWasUpInMainTranscript;
    bool  _presentWithKeyboard;
    NSDictionary * _visibleChatItemToFrameMap;
}

@property (nonatomic, copy) NSString *anchorChatItemGUID;
@property (nonatomic) bool keyboardWasUpInMainTranscript;
@property (nonatomic) bool presentWithKeyboard;
@property (nonatomic, retain) NSDictionary *visibleChatItemToFrameMap;

- (void).cxx_destruct;
- (id)anchorChatItemGUID;
- (id)description;
- (bool)keyboardWasUpInMainTranscript;
- (bool)presentWithKeyboard;
- (void)setAnchorChatItemGUID:(id)arg1;
- (void)setKeyboardWasUpInMainTranscript:(bool)arg1;
- (void)setPresentWithKeyboard:(bool)arg1;
- (void)setVisibleChatItemToFrameMap:(id)arg1;
- (id)visibleChatItemToFrameMap;

@end