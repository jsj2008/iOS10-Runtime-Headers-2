/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPillButton : UIButton {
    UIView * _backgroundView;
    UILabel * _buttonLabel;
    unsigned long long  _style;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UILabel *buttonLabel;
@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)backgroundView;
- (id)buttonLabel;
- (id)buttonText;
- (void)didMoveToSuperview;
- (id)initWithBackgroundStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setButtonText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (unsigned long long)style;
- (void)tintColorDidChange;

@end
