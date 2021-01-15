/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAvatarImage : SearchUIImage {
    NSArray * _contactIdentifiers;
    NSString * _letters;
    <CNCancelable> * _renderingToken;
}

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSString *letters;
@property (nonatomic, retain) <CNCancelable> *renderingToken;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (int)defaultCornerRoundingStyle;
- (unsigned long long)hash;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)letters;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)renderingToken;
- (void)setContactIdentifiers:(id)arg1;
- (void)setDefaultSizeIfNecessary;
- (void)setLetters:(id)arg1;
- (void)setRenderingToken:(id)arg1;

@end