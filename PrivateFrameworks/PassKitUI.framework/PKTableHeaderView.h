/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTableHeaderView : UIView {
    bool  _accessoryViewsDisabled;
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    double  _bottomPadding;
    UIImageView * _checkmarkView;
    double  _extraTextPadding;
    UIImageView * _imageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageViewSize;
    bool  _shouldResizeImageToFit;
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    double  _topPadding;
}

@property (nonatomic) bool accessoryViewsDisabled;
@property (nonatomic, readonly, retain) UIButton *actionButton;
@property (nonatomic, readonly, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double bottomPadding;
@property (nonatomic, readonly, retain) UIImageView *checkmarkView;
@property (nonatomic) double extraTextPadding;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool shouldResizeImageToFit;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly, retain) UILabel *subtitleLabel;
@property (nonatomic, readonly, retain) UILabel *titleLabel;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeThatFitsExcludingImage:(struct CGSize { double x1; double x2; })arg1;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (bool)accessoryViewsDisabled;
- (id)actionButton;
- (id)activityIndicator;
- (double)bottomPadding;
- (id)checkmarkView;
- (void)dealloc;
- (double)extraTextPadding;
- (id)imageView;
- (void)layoutSubviews;
- (void)setAccessoryViewsDisabled:(bool)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setExtraTextPadding:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setShouldResizeImageToFit:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSubtitleBody:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (bool)shouldResizeImageToFit;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)subtitleLabel;
- (void)tintColorDidChange;
- (id)titleLabel;
- (double)topPadding;

@end
