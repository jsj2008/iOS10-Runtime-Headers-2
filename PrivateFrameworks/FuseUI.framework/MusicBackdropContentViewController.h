/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicBackdropContentViewController : UIViewController {
    _UIBackdropView * _backdropView;
    long long  _backdropViewPrivateStyle;
    UIView * _backgroundView;
    UIViewController * _contentViewController;
    MPUPinningView * _pinningView;
}

@property (nonatomic) long long backdropViewPrivateStyle;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)_embedBackgroundView;
- (long long)backdropViewPrivateStyle;
- (id)backgroundView;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setBackdropViewPrivateStyle:(long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
