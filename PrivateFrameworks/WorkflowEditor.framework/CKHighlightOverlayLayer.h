/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKHighlightOverlayLayer : CALayer {
    NSArray * _rects;
    CALayer * _targetLayer;
}

@property (retain) struct CGColor { }*highlightColor;
@property CALayer *targetLayer;

+ (id)defaultValueForKey:(id)arg1;
+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithRects:(id)arg1;
- (id)initWithRects:(id)arg1 targetLayer:(id)arg2;
- (void)setTargetLayer:(id)arg1;
- (id)targetLayer;

@end