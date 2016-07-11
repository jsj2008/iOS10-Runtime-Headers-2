/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewController : UIViewController <SFBrowserRemoveViewControllerDelegate, SFInteractiveDismissControllerDelegate, _SFQueueingBrowserServiceViewControllerProxyDelegate> {
    _WKActivatedElementInfo * _activatedElementInfo;
    NSMutableDictionary * _activitiesMap;
    _UIAsyncInvocation * _cancelViewServiceRequest;
    SFSafariViewControllerConfiguration * _configuration;
    NSArray * _customActivities;
    <SFSafariViewControllerDelegate> * _delegate;
    NSURL * _initialURL;
    SFInteractiveDismissController * _interactiveDismissController;
    long long  _preferredStatusBarStyle;
    NSArray * _previewActions;
    SFBrowserRemoteViewController * _remoteViewController;
    _SFQueueingBrowserServiceViewControllerProxy * _serviceProxy;
    bool  _showingLinkPreview;
    bool  _swipeGestureEnabled;
}

@property (setter=_setActivatedElementInfo:, nonatomic, retain) _WKActivatedElementInfo *_activatedElementInfo;
@property (setter=_setPreferredBarTintColor:, nonatomic, retain) UIColor *_preferredBarTintColor;
@property (setter=_setPreviewActions:, nonatomic, retain) NSArray *_previewActions;
@property (setter=_setShowingLinkPreview:, nonatomic) bool _showingLinkPreview;
@property (nonatomic, readonly, copy) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSafariViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *initialURL;
@property (nonatomic, readonly) _SFQueueingBrowserServiceViewControllerProxy *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activatedElementInfo;
- (void)_addRemoteView;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (void)_connectToService;
- (void)_forwardNotificationToViewService:(id)arg1;
- (id)_preferredBarTintColor;
- (id)_previewActions;
- (void)_removeRemoteView;
- (void)_setActivatedElementInfo:(id)arg1;
- (void)_setEdgeSwipeDismissalEnabled:(bool)arg1;
- (void)_setPreferredBarTintColor:(id)arg1;
- (void)_setPreviewActions:(id)arg1;
- (void)_setShowingLinkPreview:(bool)arg1;
- (bool)_showingLinkPreview;
- (id)configuration;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(bool)arg2;
- (id)initialURL;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (id)previewActions;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchHostAppCustomActivitiesForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(bool)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(long long)arg2;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (id)serviceProxy;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
