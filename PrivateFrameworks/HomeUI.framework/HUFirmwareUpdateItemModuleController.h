/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUFirmwareUpdateItemModuleController : HUItemTableModuleController <HULockupViewDelegate> {
    NSMapTable * _expandedStateByItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *expandedStateByItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUFirmwareUpdateItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)expandedStateByItems;
- (id)initWithModule:(id)arg1;
- (void)lockupView:(id)arg1 downloadControlTapped:(id)arg2;
- (void)lockupView:(id)arg1 expandableTextViewDidExpand:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end