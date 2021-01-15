/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetPickerAssetCollectionGridCell : UICollectionViewCell <PUAssetPickerAsyncCountCell, PUAssetPickerAsyncImageCell> {
    NSUUID * _asyncRequestID;
    UIView * _badgesBackgroundView;
    PXUIOverlayBadgesView * _badgesView;
    UILabel * _countLabel;
    UIView * _highlightView;
    int  _imageRequestID;
    UIImageView * _imageView;
    UIStackView * _stackView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSUUID *asyncRequestID;
@property (nonatomic, readonly) UIView *badgesBackgroundView;
@property (nonatomic, readonly) PXUIOverlayBadgesView *badgesView;
@property (nonatomic, readonly) UILabel *countLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *highlightView;
@property (nonatomic) int imageRequestID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageRequestSize;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)identifier;

- (void).cxx_destruct;
- (id)asyncRequestID;
- (id)badgesBackgroundView;
- (id)badgesView;
- (id)countLabel;
- (id)highlightView;
- (int)imageRequestID;
- (struct CGSize { double x1; double x2; })imageRequestSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAsyncRequestID:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageRequestID:(int)arg1;
- (id)stackView;
- (id)subtitleLabel;
- (id)titleLabel;

@end