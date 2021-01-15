/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction> {
    <_UIPassthroughScrollInteractionDelegate> * _delegate;
    bool  _eatsTouches;
    _UIPassthroughGateGestureRecognizer * _gestureGate;
    _UIPassthroughScrollGestureRecognizer * _passthroughScrollGestureRecognizer;
    bool  _recognizeOnPrimaryButtonDown;
    bool  _recognizeOnSecondaryButtonDown;
    UIView * _touchFallbackView;
    UIView * _view;
}

@property (nonatomic, readonly) _UIPassthroughGateGestureRecognizer *_gestureGate;
@property (nonatomic, readonly) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer;
@property (nonatomic, readonly) UIView *_touchFallbackView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPassthroughScrollInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eatsTouches;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognizeOnPrimaryButtonDown;
@property (nonatomic) bool recognizeOnSecondaryButtonDown;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (bool)_isPassthroughGestureRecognizer:(id)arg1;

- (void).cxx_destruct;
- (void)__forciblyEndWithReason:(unsigned long long)arg1;
- (bool)_delegateShouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_gestureGate;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)arg1;
- (void)_handlePassthroughRecognizer:(id)arg1;
- (id)_passthroughScrollGestureRecognizer;
- (void)_setUpForWindow:(id)arg1;
- (bool)_shouldEventBePassedThrough:(id)arg1;
- (void)_tearDown;
- (id)_touchFallbackView;
- (void)_updateGesturesEatTouches;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToView:(id)arg1;
- (bool)eatsTouches;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)init;
- (bool)recognizeOnPrimaryButtonDown;
- (bool)recognizeOnSecondaryButtonDown;
- (void)setDelegate:(id)arg1;
- (void)setEatsTouches:(bool)arg1;
- (void)setRecognizeOnPrimaryButtonDown:(bool)arg1;
- (void)setRecognizeOnSecondaryButtonDown:(bool)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end