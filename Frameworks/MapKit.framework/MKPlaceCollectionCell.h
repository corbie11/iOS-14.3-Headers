/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCollectionCell : UICollectionViewCell {
    UIImageView * _checkMarkImageView;
    UIImageView * _collectionImageView;
    UILabel * _collectionLabel;
    UILabel * _collectionSecondaryLabel;
    MKPlaceCollectionViewModel * _item;
    UIStackView * _metadataStackView;
    UIImageView * _publisherLogoImageView;
    UILabel * _savedCollectionLabel;
    UIFont * _savedPillFont;
    UIStackView * _savedStackView;
    UIVisualEffectView * _savedView;
    NSUUID * _updateIdentifier;
}

@property (nonatomic, retain) UIImageView *checkMarkImageView;
@property (nonatomic, retain) UIImageView *collectionImageView;
@property (nonatomic, retain) UILabel *collectionLabel;
@property (nonatomic, retain) UILabel *collectionSecondaryLabel;
@property (nonatomic, retain) MKPlaceCollectionViewModel *item;
@property (nonatomic, retain) UIStackView *metadataStackView;
@property (nonatomic, retain) UIImageView *publisherLogoImageView;
@property (nonatomic, retain) UILabel *savedCollectionLabel;
@property (nonatomic, retain) UIStackView *savedStackView;
@property (nonatomic, retain) UIVisualEffectView *savedView;
@property (nonatomic, retain) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addAndSetSecondaryLabel;
- (void)addCollectionNameView;
- (void)addPublisherLogoImage;
- (void)addSavedCollectionView;
- (bool)canBecomeFirstResponder;
- (id)checkMarkImageView;
- (id)collectionImageView;
- (id)collectionLabel;
- (id)collectionSecondaryLabel;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializeCollectionSecondaryLabel;
- (id)item;
- (id)metadataStackView;
- (void)prepareForReuse;
- (id)publisherLogoImageView;
- (id)savedCollectionLabel;
- (id)savedStackView;
- (id)savedView;
- (void)setCheckMarkImageView:(id)arg1;
- (void)setCollectionImageView:(id)arg1;
- (void)setCollectionLabel:(id)arg1;
- (void)setCollectionSecondaryLabel:(id)arg1;
- (void)setImageMetadata;
- (void)setItem:(id)arg1;
- (void)setMetadataStackView:(id)arg1;
- (void)setPublisherLogoImageView:(id)arg1;
- (void)setSavedCollectionLabel:(id)arg1;
- (void)setSavedStackView:(id)arg1;
- (void)setSavedView:(id)arg1;
- (void)setTextMetadata;
- (void)setUpCellUsingModel:(id)arg1;
- (void)setUpdateIdentifier:(id)arg1;
- (void)setupCollectionImage;
- (void)setupConstraints;
- (void)setupCornerRadius;
- (void)setupStackView;
- (void)setupSubviews;
- (struct CGSize { double x1; double x2; })sizeForSavedPill;
- (id)updateIdentifier;

@end