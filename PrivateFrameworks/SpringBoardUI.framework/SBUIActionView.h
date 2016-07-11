/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIActionView : UIView {
    SBUIAction * _action;
    bool  _highlighted;
    long long  _imagePosition;
    UIImageView * _imageView;
    NSArray * _imageViewLayoutConstraints;
    bool  _interfaceOrientationIsPortrait;
    SBUIActionViewLabel * _subtitleLabel;
    UIView * _textContainer;
    SBUIActionViewLabel * _titleLabel;
}

@property (nonatomic, readonly) SBUIAction *action;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long imagePosition;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateImageViewLayoutConstraints;
- (id)action;
- (void)didMoveToSuperview;
- (long long)imagePosition;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setImagePosition:(long long)arg1;

@end
