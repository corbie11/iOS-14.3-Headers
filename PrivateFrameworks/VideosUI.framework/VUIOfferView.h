/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOfferView : UIView {
    UIView * _appIconView;
    UIView * _badgeView;
    UIView * _channelImageBackgroundView;
    VUILabel * _channelNameLabel;
    UIView * _imageView;
    bool  _isEntitled;
    VUIOfferLayout * _layout;
    UIView * _logoView;
    VUISeparatorView * _separatorView;
    VUILabel * _subtitleLabel;
    VUIMediaTagsView * _tagsView;
    VUILabel * _textLabel;
    VUILabel * _titleLabel;
    UIView * _versionsButton;
}

@property (nonatomic, retain) UIView *appIconView;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic, retain) UIView *channelImageBackgroundView;
@property (nonatomic, retain) VUILabel *channelNameLabel;
@property (nonatomic, retain) UIView *imageView;
@property (nonatomic) bool isEntitled;
@property (nonatomic, retain) VUIOfferLayout *layout;
@property (nonatomic, retain) UIView *logoView;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUIMediaTagsView *tagsView;
@property (nonatomic, retain) VUILabel *textLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) UIView *versionsButton;

- (void).cxx_destruct;
- (double)_chinHeightForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDisplaySeparator;
- (id)appIconView;
- (id)badgeView;
- (id)channelImageBackgroundView;
- (id)channelNameLabel;
- (id)imageView;
- (bool)isEntitled;
- (id)layout;
- (void)layoutSubviews;
- (id)logoView;
- (void)prepareForCellReuse;
- (id)separatorView;
- (void)setAppIconView:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setChannelImageBackgroundView:(id)arg1;
- (void)setChannelNameLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsEntitled:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTagsView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVersionsButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)tagsView;
- (id)textLabel;
- (id)titleLabel;
- (id)versionsButton;

@end