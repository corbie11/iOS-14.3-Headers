/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKCandidateAcceptEvent : TISKEvent {
    TIKeyboardCandidate * _candidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;

- (void).cxx_destruct;
- (id)candidate;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (void)reportToSession:(id)arg1;
- (void)setCandidate:(id)arg1;

@end