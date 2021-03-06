/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationViewController : UIViewController <NCContentSizeCategoryAdjusting, NCNotificationCustomContentDelegate, UIScrollViewDelegate> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    bool  _canPan;
    NCAnimationCoordinator * _contentSizeChangeAnimationCoordinator;
    <NCNotificationCustomContentProviding> * _customContentProvider;
    UIViewController<NCNotificationCustomContent> * _customContentProvidingViewController;
    <NCNotificationViewControllerDelegate> * _delegate;
    bool  _didQueryCanPan;
    struct UIView { Class x1; } * _lookView;
    long long  _ncTransitionAnimationState;
    NCNotificationRequest * _notificationRequest;
    bool  _revealAdditionalContentOnPresentation;
    UIScrollView * _scrollView;
    <NCNotificationStaticContentProviding> * _staticContentProvider;
}

@property (getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:, nonatomic, retain) <UIViewControllerTransitionCoordinator> *activeTransitionCoordinator;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=hasCommittedToPresentingCustomContentProvidingViewController, nonatomic, readonly) bool committedToPresentingCustomContentProvidingViewController;
@property (getter=_contentSizeChangeAnimationCoordinator, setter=_setContentSizeChangeAnimationCoordinator:, nonatomic, retain) NCAnimationCoordinator *contentSizeChangeAnimationCoordinator;
@property (nonatomic, retain) <NCNotificationCustomContentProviding> *customContentProvider;
@property (getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:, nonatomic, retain) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (readonly) unsigned long long hash;
@property (getter=isLegacyShortLookContentRevealed, nonatomic, readonly) bool legacyShortLookContentRevealed;
@property (getter=isLookStyleLongLook, nonatomic, readonly) bool lookStyleLongLook;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (getter=_notificationViewControllerView, nonatomic, readonly) _NCNotificationViewControllerView *notificationViewControllerView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=_isPresentingCustomContentProvidingViewController, nonatomic, readonly) bool presentingCustomContentProvidingViewController;
@property (getter=isPresentingLongLook, nonatomic, readonly) bool presentingLongLook;
@property (nonatomic) bool revealAdditionalContentOnPresentation;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=isShortLook, nonatomic, readonly) bool shortLook;
@property (nonatomic, retain) <NCNotificationStaticContentProviding> *staticContentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeTransitionCoordinator;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(bool)arg3;
- (bool)_canPan;
- (void)_configureScrollViewIfNecessary;
- (id)_contentSizeChangeAnimationCoordinator;
- (id)_customContentProvidingViewController;
- (long long)_dateFormatStyle;
- (void)_executeDefaultAction:(bool)arg1;
- (void)_executeDismissAction:(bool)arg1;
- (id)_initForLongLookWithNotificationRequest:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1;
- (bool)_isPresentingCustomContentProvidingViewController;
- (void)_loadLookView;
- (struct UIView { Class x1; }*)_longLookView;
- (struct UIView { Class x1; }*)_longLookViewIfLoaded;
- (struct UIView { Class x1; }*)_longLookViewLoadingIfNecessary:(bool)arg1;
- (struct UIView { Class x1; }*)_lookView;
- (struct UIView { Class x1; }*)_lookViewIfLoaded;
- (struct UIView { Class x1; }*)_lookViewLoadingIfNecessary:(bool)arg1;
- (id)_notificationViewControllerView;
- (void)_performViewLayout;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForBounds;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_presentedLongLookViewController;
- (id)_scrollView;
- (void)_setActiveTransitionCoordinator:(id)arg1;
- (void)_setContentSizeChangeAnimationCoordinator:(id)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (bool)_setDelegate:(id)arg1;
- (bool)_setNotificationRequest:(id)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupCustomContentProvider;
- (void)_setupStaticContentProvider;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (bool)acknowledgeAndDismissCustomContentProvidingViewControllerIfNecessary:(bool)arg1;
- (bool)acknowledgeAndDismissLongLookIfNecessaryAnimated:(bool)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(bool)arg3;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (id)customContentProvider;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (void)expandAndPlayAudioMessage;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isDragging;
- (bool)isLegacyShortLookContentRevealed;
- (bool)isLookStyleLongLook;
- (bool)isPresentingLongLook;
- (bool)isShortLook;
- (void)loadView;
- (long long)ncTransitionAnimationState;
- (id)notificationRequest;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(id /* block */)arg1;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)reloadStaticContentProvider;
- (bool)revealAdditionalContentOnPresentation;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCustomContentProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasUpdatedContent;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setRevealAdditionalContentOnPresentation:(bool)arg1;
- (void)setStaticContentProvider:(id)arg1;
- (bool)shouldAutorotate;
- (id)staticContentProvider;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(id /* block */)arg2;
- (void)updateContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
