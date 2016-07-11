/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionView : UIView <UIGestureRecognizerDelegate> {
    NSObject<CNActionViewProtocol> * _actionDelegate;
    NSArray * _activatedContstrants;
    bool  _disabled;
    UILongPressGestureRecognizer * _highlightGestureRecognizer;
    bool  _highlighted;
    UIImage * _image;
    UIImageView * _imageView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIView * _platterView;
    long long  _style;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSString * _title;
    UILabel * _titleLabel;
    NSString * _type;
}

@property (nonatomic) NSObject<CNActionViewProtocol> *actionDelegate;
@property (nonatomic, retain) NSArray *activatedContstrants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *highlightGestureRecognizer;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *type;

+ (id)borderColorForDisabledBoldState;
+ (id)contentColorForDisabledBoldState;
+ (id)contentColorForDisabledVibrantDarkState;
+ (void)fadeInView:(id)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)activatedContstrants;
- (void)didMoveToWindow;
- (bool)disabled;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHighlightGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)highlightGestureRecognizer;
- (bool)highlighted;
- (id)image;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)intrinsicContentWidth;
- (id)longPressGestureRecognizer;
- (id)platterView;
- (void)setActionDelegate:(id)arg1;
- (void)setActivatedContstrants:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabled:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightGestureRecognizer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setType:(id)arg1;
- (long long)style;
- (id)tapGestureRecognizer;
- (id)title;
- (id)titleLabel;
- (id)type;
- (void)updateConstraints;
- (void)updateImageViewStateAnimated:(bool)arg1;
- (void)updateLabelStateAnimated:(bool)arg1;
- (void)updatePlatterViewStateAnimated:(bool)arg1;

@end
