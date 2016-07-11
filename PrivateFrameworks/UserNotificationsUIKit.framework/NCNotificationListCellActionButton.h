/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCellActionButton : UIControl <NCContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _backgroundBlurred;
    UIView * _backgroundOverlayView;
    UIView * _backgroundView;
    NCLookViewFontProvider * _fontProvider;
    NCNotificationAction * _notificationAction;
    NSString * _preferredContentSizeCategory;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, retain) UIView *backgroundOverlayView;
@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) NCLookViewFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationAction *notificationAction;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_configureBackgroundOverlayViewIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (void)_highlightButton:(id)arg1;
- (void)_layoutBackgroundOverlayView;
- (void)_layoutBackgroundView;
- (void)_layoutTitleLabel;
- (void)_setFontProvider:(id)arg1;
- (void)_unHighlightButton:(id)arg1;
- (void)_updateTitleLabelFont;
- (long long)_wordCountForText:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundOverlayView;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundBlurred;
- (void)layoutSubviews;
- (id)notificationAction;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setBackgroundOverlayView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNotificationAction:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
