/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateLockupView : HULockupView {
    NSSet * _affectedAccessories;
    bool  _isObservingPreferredContentSize;
    HFItem * _item;
    NSLayoutConstraint * _serviceGridHeightConstraint;
    HUInformationalServiceGridViewController * _serviceGridViewController;
    UILabel * _tertiaryDetailLabel;
}

@property (nonatomic, retain) NSSet *affectedAccessories;
@property (nonatomic) bool isObservingPreferredContentSize;
@property (nonatomic, retain) NSLayoutConstraint *serviceGridHeightConstraint;
@property (nonatomic, retain) HUInformationalServiceGridViewController *serviceGridViewController;
@property (nonatomic, retain) UILabel *tertiaryDetailLabel;

- (void).cxx_destruct;
- (id)affectedAccessories;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initializeIconViewWithSize:(unsigned long long)arg1;
- (bool)isObservingPreferredContentSize;
- (id)item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)serviceGridHeightConstraint;
- (id)serviceGridViewController;
- (void)setAffectedAccessories:(id)arg1;
- (void)setIsObservingPreferredContentSize:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setServiceGridHeightConstraint:(id)arg1;
- (void)setServiceGridViewController:(id)arg1;
- (void)setTertiaryDetailLabel:(id)arg1;
- (id)tertiaryDetailLabel;
- (void)updateIconView:(id)arg1 animate:(bool)arg2;
- (void)updateUIWithAnimation:(bool)arg1;

@end
