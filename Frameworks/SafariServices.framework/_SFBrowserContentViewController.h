/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserContentViewController : UIViewController <SFReaderAppearanceViewControllerDelegate, SFReaderEnabledWebViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, _SFActivityViewControllerDelegate, _SFBrowserToolbarDataSource, _SFBrowserToolbarDelegate, _SFDownloadControllerDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFSafeBrowsingControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate> {
    NSString * _EVOrganizationName;
    bool  _EVOrganizationNameIsValid;
    _SFURLSpoofingMitigator * _URLSpoofingMitigator;
    _WKActivatedElementInfo * _activatedElementInfo;
    WebUIAuthenticationManager * _authenticationManager;
    _SFBrowserView * _browserView;
    SFSafariViewControllerConfiguration * _configuration;
    double  _crashBannerDraggingOffset;
    long long  _customPreferredStatusBarStyle;
    bool  _didNotifyInitialLoadFinish;
    bool  _didReceivePolicyForInitialLoad;
    long long  _displayMode;
    _SFDownloadController * _downloadController;
    _SFDynamicBarAnimator * _dynamicBarAnimator;
    bool  _entersReaderIfAvailable;
    _SFFindOnPageView * _findOnPageView;
    WBSFluidProgressController * _fluidProgressController;
    WBSFluidProgressState * _fluidProgressState;
    bool  _interfaceFillsScreen;
    bool  _isShowingSheetController;
    bool  _isSuppressingPreviewProgressAnimation;
    WKBackForwardListItem * _lastBackFowardListItemOnWhichReaderWasActivated;
    NSArray * _linkActions;
    _SFNavigationBarItem * _navigationBarItem;
    _SFPageLoadErrorController * _pageLoadErrorController;
    bool  _pageScrollsWithBottomBar;
    long long  _preferredWhitePointAdaptivityStyle;
    SFReaderViewController * _readerViewController;
    _SFReloadOptionsController * _reloadOptionsController;
    bool  _remoteSwipeGestureEnabled;
    _SFSafeBrowsingController * _safeBrowsingController;
    bool  _safeBrowsingEnabled;
    bool  _scrollViewIsDragging;
    _SFSafariSharingExtensionController * _sharingExtensionController;
    WBUSheetController * _sheetController;
    UITapGestureRecognizer * _showBarsFromBottomBarRecognizer;
    bool  _showingCrashBanner;
    bool  _showingReader;
    bool  _updatingGeometryFromDynamicBarAnimator;
    bool  _usesNarrowLayout;
    SFReaderEnabledWebViewController * _webViewController;
}

@property (nonatomic, retain) _WKActivatedElementInfo *activatedElementInfo;
@property (nonatomic, copy) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode;
@property (nonatomic) bool entersReaderIfAvailable;
@property (nonatomic, retain) _SFFindOnPageView *findOnPageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *linkActions;
@property (nonatomic) long long preferredWhitePointAdaptivityStyle;
@property (nonatomic, retain) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic) bool remoteSwipeGestureEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFReaderEnabledWebViewController *webViewController;

- (void).cxx_destruct;
- (id)_EVOrganizationName;
- (id)_activeToolbar;
- (void)_addAuthenticationChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)_buttonBarHeight;
- (bool)_canScrollToTopInView:(id)arg1;
- (void)_commitPreviewViewController:(id)arg1;
- (double)_crashBannerDraggingOffsetForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_currentWebView;
- (void)_didLoadWebView;
- (void)_dismiss;
- (void)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)_hideCrashBanner;
- (void)_initialLoadFinishedWithSuccess:(bool)arg1;
- (void)_invalidateEVOrganizationName;
- (bool)_isSecure;
- (bool)_isSplitScreen;
- (id)_linkPreviewActionsWithDefaultActions:(id)arg1;
- (void)_notifyInitialLoadDidFinish:(bool)arg1;
- (void)_performSafeBrowsingCheckForURL:(id)arg1;
- (id)_previewViewControllerForURL:(id)arg1 defaultActions:(id)arg2 elementInfo:(id)arg3;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(bool)arg3 userInitiated:(bool)arg4;
- (bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_scrollToTopFromScrollToTopView;
- (void)_setShowingCrashBanner:(bool)arg1 animated:(bool)arg2;
- (void)_setShowingReader:(bool)arg1 animated:(bool)arg2;
- (void)_setSuppressingPreviewProgressAnimation:(bool)arg1;
- (void)_setUpFindOnPageViewIfNeeded;
- (void)_setUpReloadOptionsControllerIfNeeded;
- (void)_setUpSafeBrowsingController;
- (void)_setUpToolbar;
- (void)_setUpTopBarAndBottomBar;
- (void)_setUpWebViewControllerIfNeeded;
- (void)_setWebView:(id)arg1;
- (void)_showBarsFromBottomBarTap:(id)arg1;
- (void)_showGenericDownloadAlert;
- (bool)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2;
- (void)_showPassBookControllerForPass:(id)arg1;
- (long long)_sizeClassForWidth:(double)arg1;
- (void)_updateContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forWebView:(id)arg2;
- (void)_updateCrashBannerOffset;
- (void)_updateCurrentScrollViewInsets;
- (void)_updateDoNotTrackPreference;
- (void)_updateDynamicBarGeometry;
- (void)_updateInterfaceFillsScreen;
- (void)_updateNavigationBar;
- (void)_updatePreviewLoadingUI;
- (void)_updateRemoteSwipeGestureState;
- (void)_updateScrollToTopView;
- (void)_updateStatusBarAppearance;
- (void)_updateStatusBarStyleForced:(bool)arg1;
- (void)_updateUI;
- (void)_updateUsesNarrowLayout;
- (void)_updateWebViewLayoutSize;
- (void)_updateWebViewShrinkToFit;
- (void)_updateWhitePointAdaptivityStyle;
- (id)activatedElementInfo;
- (void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(id /* block */)arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)browserToolbarCanGoBack:(id)arg1;
- (bool)browserToolbarCanGoForward:(id)arg1;
- (bool)browserToolbarCanOpenPageInSafari:(id)arg1;
- (bool)browserToolbarCanShowAction:(id)arg1;
- (void)browserToolbarGoBack:(id)arg1;
- (void)browserToolbarGoForward:(id)arg1;
- (void)browserToolbarOpenInSafari:(id)arg1;
- (void)browserToolbarShowActionSheet:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)clearFluidProgressState;
- (void)compressedNavigationBarWasTapped:(id)arg1;
- (id)configuration;
- (bool)createFluidProgressState;
- (id)currentFluidProgressStateSource;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (long long)displayMode;
- (id)downloadBackgroundTaskName;
- (bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (bool)entersReaderIfAvailable;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (void)fileDownloadDidFinish:(id)arg1 withPath:(id)arg2 withType:(long long)arg3 withSourceURL:(id)arg4;
- (id)findOnPageView;
- (void)fluidProgressRocketAnimationDidComplete;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasFailedURL;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)linkActions;
- (void)loadRequest:(id)arg1;
- (void)loadView;
- (void)navigationBar:(id)arg1 backDropWillApplySettings:(id)arg2;
- (void)navigationBarBackdropDidApplySettings:(id)arg1;
- (void)navigationBarCancelButtonWasTapped:(id)arg1;
- (void)navigationBarDoneButtonWasTapped:(id)arg1;
- (void)navigationBarReaderAppearanceButtonWasTapped:(id)arg1;
- (void)navigationBarReaderButtonWasTapped:(id)arg1;
- (void)navigationBarReloadButtonWasLongPressed:(id)arg1;
- (void)navigationBarReloadButtonWasTapped:(id)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
- (id)navigationBarURLForSharing:(id)arg1;
- (void)navigationBarURLWasTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2;
- (void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
- (void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
- (id)pageLoadErrorControllerApplicationDisplayName:(id)arg1;
- (void)pageLoadErrorControllerDidShowAlert:(id)arg1;
- (bool)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
- (void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentingViewControllerForAlertInAuthenticationManager:(id)arg1;
- (id)presentingViewControllerForWebViewController:(id)arg1;
- (id)previewActions;
- (id)progressState;
- (void)readerAppearanceViewControllerDidChangeFont:(id)arg1;
- (void)readerAppearanceViewControllerDidChangeTheme:(id)arg1;
- (void)readerAppearanceViewControllerDidDecreaseTextSize:(id)arg1;
- (void)readerAppearanceViewControllerDidIncreaseTextSize:(id)arg1;
- (id)reloadOptionsController;
- (void)reloadWithoutContentBlockers;
- (bool)remoteSwipeGestureEnabled;
- (void)safeBrowsingController:(id)arg1 didIgnoreWarningWithURL:(id)arg2;
- (void)safeBrowsingControllerClosePage:(id)arg1;
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(id)arg1;
- (void)safeBrowsingControllerGoBack:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActivatedElementInfo:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEntersReaderIfAvailable:(bool)arg1;
- (void)setFindOnPageView:(id)arg1;
- (void)setLinkActions:(id)arg1;
- (void)setPreferredWhitePointAdaptivityStyle:(long long)arg1;
- (void)setReloadOptionsController:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)setWebViewController:(id)arg1;
- (void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3;
- (id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2;
- (void)sheetControllerDidHideSheet:(id)arg1;
- (void)sheetControllerDidShowSheet:(id)arg1;
- (void)stopLoading;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)visibilityWillChangeForFindOnPageView:(id)arg1;
- (id)webViewController;
- (void)webViewController:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)webViewController:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)webViewController:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)webViewController:(id)arg1 setDownloadingFileType:(long long)arg2;
- (void)webViewControllerDidChangeEstimatedProgress:(id)arg1;
- (void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewControllerDidChangeURL:(id)arg1;
- (void)webViewControllerDidDetermineReaderAvailability:(id)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(id)arg1;
- (id)webViewForFindOnPageView:(id)arg1;

@end
