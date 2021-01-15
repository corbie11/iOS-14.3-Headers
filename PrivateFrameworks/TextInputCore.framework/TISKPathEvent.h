/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKPathEvent : TISKEvent {
    TIKeyboardCandidate * _candidate;
    TIKeyboardTouchEvent * _pathTouchUp;
}

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1 candidate:(id)arg2 emojiSearchMode:(bool)arg3 order:(long long)arg4;
- (bool)isMissingATouch;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;

@end