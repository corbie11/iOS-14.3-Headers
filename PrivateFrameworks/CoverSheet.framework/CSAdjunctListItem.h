/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSAdjunctListItem : NSObject <CSAdjunctListItemProviding> {
    NSMutableSet * _actions;
    NSString * _identifier;
    UIViewController<CSAdjunctItemHosting> * contentHost;
    UIView * platterView;
}

@property (nonatomic, readonly) SBSLockScreenContentAction *action;
@property (nonatomic, retain) UIViewController<CSAdjunctItemHosting> *contentHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIView *platterView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)addAction:(id)arg1;
- (void)conformsToCSAdjunctListItemProviding;
- (id)contentHost;
- (id)identifier;
- (id)init;
- (bool)isValid;
- (id)platterView;
- (void)removeAction:(id)arg1;
- (void)setContentHost:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlatterView:(id)arg1;

@end