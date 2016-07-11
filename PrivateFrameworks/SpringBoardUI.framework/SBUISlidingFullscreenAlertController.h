/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {
    bool  _animatingIn;
    bool  _animatingOut;
    UIView * _bottomBar;
    UIView * _topBar;
}

@property (nonatomic, readonly) UIView *bottomBar;
@property (nonatomic, readonly) UIView *topBar;

- (void).cxx_destruct;
- (bool)_animatingToHomescreenWallpaper;
- (double)_animationDelayForOthersActivation;
- (void)_performAnimateDisplayIn;
- (double)_slideOutAnimationDelay;
- (double)_slideOutAnimationDuration;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_viewAnimatedOut;
- (void)animateViewIn;
- (void)animateViewOut;
- (id)backgroundView;
- (id)bottomBar;
- (void)finishedAnimatingIn;
- (bool)hasTranslucentBackground;
- (bool)isShowingWallpaper;
- (bool)isSlidingViewController;
- (id)newBottomBar;
- (id)newTopBar;
- (bool)shouldShowBottomBar;
- (id)topBar;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewDidLoad;
- (bool)viewIsReadyToBeRemoved;
- (void)viewWillAnimateIn;
- (void)viewWillAnimateOut;

@end