/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.StackedAlarmCell : UIView {
    void bellImageView;
    void clockAppSectionURL;
    void containingVisualEffectView;
    void persistentConstraints;
    void rowSeparator;
    void showRowSeparator;
    void timeLabel;
    void titleLabel;
}

@property (nonatomic, retain) NSURL *clockAppSectionURL;
@property (nonatomic) bool showRowSeparator;

+ (bool)requiresConstraintBasedLayout;

- (id /* block */).cxx_destruct;
- (id)clockAppSectionURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClockAppSectionURL:(id)arg1;
- (void)setShowRowSeparator:(bool)arg1;
- (bool)showRowSeparator;
- (void)updateConstraints;
- (void)updateWithAlarmWithAlarm:(id)arg1;

@end
