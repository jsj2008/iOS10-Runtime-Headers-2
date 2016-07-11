/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    PKAddPaymentPassRequest * _addRequest;
    PKAddPaymentPassRequestConfiguration * _configuration;
    NSObject<OS_dispatch_source> * _datasourceTimeout;
    <PKAddPaymentPassRequestViewControllerDelegate> * _delegate;
    long long  _headerState;
    PKTableHeaderView * _headerView;
    bool  _hidePrivacy;
    double  _maxHeaderWidth;
    bool  _maxHeaderWidthCalculated;
    <NSObject> * _notificationToken;
    CLInUseAssertion * _passbookForegroundAssertion;
    bool  _preconditionsValidated;
    PKPaymentSetupPrivacyFooterView * _privacyView;
    PKPaymentProvisioningController * _provisioningController;
    bool  _singleTarget;
    NSString * _subtitle;
    RemoteUIController * _termsController;
    NSString * _title;
    bool  _viewAppearing;
    PKPaymentWebService * _webService;
}

@property (nonatomic) <PKAddPaymentPassRequestViewControllerDelegate> *delegate;
@property (nonatomic) bool hidePrivacy;
@property (nonatomic) bool singleTarget;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (void)_applyHeaderState;
- (void)_cancelDatasourceTimeout;
- (void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1;
- (void)_fetchCertificates;
- (void)_handleAdd:(id)arg1;
- (void)_performEligibility;
- (void)_performMoreInfoItemPush;
- (void)_performNextProvisioningStep;
- (void)_performPreconditionValidation;
- (void)_performProvisioning:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_presentDisplayableError:(id)arg1;
- (void)_presentDisplayableError:(id)arg1 allowEarlyExit:(bool)arg2;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_setHeaderState:(long long)arg1;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(id /* block */)arg2;
- (void)_showEligibilityIssueForStatus:(long long)arg1 learnMoreURL:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)hidePrivacy;
- (id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)privacyFooterLinkTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidePrivacy:(bool)arg1;
- (void)setSingleTarget:(bool)arg1;
- (bool)singleTarget;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webService;

@end
