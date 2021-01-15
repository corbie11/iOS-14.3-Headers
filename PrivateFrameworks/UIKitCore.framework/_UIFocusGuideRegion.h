/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusGuideRegion : _UIFocusRegion {
    bool  __isFocusGuideUnoccludable;
    double  __regionFocusPriority;
    <_UIFocusGuideRegionDelegate> * _delegate;
}

@property (setter=_setIsFocusGuideUnoccludable:, nonatomic) bool _isFocusGuideUnoccludable;
@property (setter=_setRegionFocusPriority:, nonatomic) double _regionFocusPriority;
@property (nonatomic) <_UIFocusGuideRegionDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canBeOccludedByRegionsAbove;
- (bool)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2;
- (bool)_isEnabledForFocusedRegion:(id)arg1;
- (bool)_isFocusGuideUnoccludable;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (long long)_preferredDistanceComparisonType;
- (double)_regionFocusPriority;
- (void)_setIsFocusGuideUnoccludable:(bool)arg1;
- (void)_setRegionFocusPriority:(double)arg1;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (bool)_shouldUseNextFocusedItemForLinearSorting;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end