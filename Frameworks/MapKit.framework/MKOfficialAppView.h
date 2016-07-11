/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOfficialAppView : MKPlaceSectionRowView {
    _MKUILabel * _appNameLabel;
    NSLayoutConstraint * _categoryBaselineToDeveloperBaselineConstraint;
    UIView * _categoryContainerView;
    _MKUILabel * _categoryLabel;
    NSLayoutConstraint * _categoryLeadingToCategoryContainerLeadingConstraint;
    NSLayoutConstraint * _categoryTrailingToCategoryContainerTrailingConstraint;
    NSMutableArray * _constraintArray;
    <MKOfficialAppViewDelegate> * _delegate;
    NSLayoutConstraint * _developerBaselineToNameBaselineConstraint;
    _MKUILabel * _developerLabel;
    UIView * _labelContainerView;
    NSLayoutConstraint * _nameBaselineToTopConstraint;
    UIButton * _punchOutButton;
    NSLayoutConstraint * _ratingBaselineToCategoryBaslineConstraint;
    _MKUILabel * _ratingLabel;
    UIImageView * _storeAppImageView;
    SSLookupItem * _storeItem;
    UIImage * _storeItemImage;
}

@property (nonatomic) <MKOfficialAppViewDelegate> *delegate;
@property (nonatomic, retain) SSLookupItem *storeItem;
@property (nonatomic, retain) UIImage *storeItemImage;

- (void).cxx_destruct;
- (bool)_appIsInstalled;
- (void)_commonInit;
- (void)_createView;
- (void)_punchOutButtonSelected:(id)arg1;
- (void)_updateLabelText;
- (void)contentSizeDidChange;
- (id)delegate;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConstraintConstants;
- (void)setDelegate:(id)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setStoreItemImage:(id)arg1;
- (id)storeItem;
- (id)storeItemImage;
- (void)updateButtonText;

@end
