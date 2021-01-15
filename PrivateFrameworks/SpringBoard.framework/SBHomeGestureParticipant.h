/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding> {
    SBHomeGestureArbiter * _arbiter;
    bool  _canShareOwnershipWithNextParticipant;
    <SBHomeGestureParticipantDelegate> * _delegate;
    long long  _homeAffordanceSuppression;
    long long  _identifier;
    bool  _ownsHomeGesture;
    long long  _resolvedHomeAffordanceSuppression;
    NSIndexSet * _trumpsAdditionalIdentifiers;
}

@property (nonatomic) SBHomeGestureArbiter *arbiter;
@property (nonatomic) bool canShareOwnershipWithNextParticipant;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeGestureParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeAffordanceSuppression;
@property (nonatomic) long long identifier;
@property (nonatomic) bool ownsHomeGesture;
@property (nonatomic) long long resolvedHomeAffordanceSuppression;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSIndexSet *trumpsAdditionalIdentifiers;

- (void).cxx_destruct;
- (id)arbiter;
- (bool)canShareOwnershipWithNextParticipant;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)homeAffordanceSuppression;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1;
- (void)invalidate;
- (bool)ownsHomeGesture;
- (long long)resolvedHomeAffordanceSuppression;
- (void)setArbiter:(id)arg1;
- (void)setCanShareOwnershipWithNextParticipant:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeAffordanceSuppression:(long long)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setOwnsHomeGesture:(bool)arg1;
- (void)setResolvedHomeAffordanceSuppression:(long long)arg1;
- (void)setTrumpsAdditionalIdentifiers:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)trumpsAdditionalIdentifiers;

@end