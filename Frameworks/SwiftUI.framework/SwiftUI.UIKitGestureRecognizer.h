/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
 */

@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, _UITransformEventRespondable> {
    void eventBridge;
    void hoverSeed;
    void initialAngle;
    void initialScale;
    void transformSeed;
}

- (void).cxx_destruct;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (void)_transformChangedWithEvent:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end