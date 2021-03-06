/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPassHeaderViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PSStateRestoration, UITableViewDataSource, UITableViewDelegate> {
    PKPaymentPassDetailActivationFooterView * _activationFooter;
    NSArray * _allPaymentApplications;
    PKSettingTableCell * _automaticPresentationSwitch;
    UIVisualEffectView * _blurView;
    NSArray * _contactlessPaymentApplications;
    bool  _deepLinkingEnabled;
    PKPaymentApplication * _defaultPaymentApplication;
    <PKPassDeleteHandler> * _deleteOverrider;
    UIColor * _detailTextColor;
    long long  _detailViewStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentInset;
    double  _headerHeight;
    UIView * _headerView;
    UIColor * _highlightColor;
    UIView * _keyLine;
    UIColor * _linkTextColor;
    PKLinkedApplication * _linkedApplication;
    PKSettingTableCell * _messagesSwitch;
    bool  _navigationControllerHidesShadow;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _pass;
    bool  _passDeletionInProgress;
    PKPassHeaderView * _passHeaderView;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    NSArray * _paymentApplications;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    NSNumber * _paymentTransactionCellHeightCache;
    NSMutableDictionary * _pendingTransactions;
    UIColor * _primaryTextColor;
    UISegmentedControl * _tabBar;
    double  _tabBarHeight;
    NSArray * _tabBarSegments;
    NSObject<OS_dispatch_source> * _transactionTimer;
    NSArray * _transactions;
    PKSettingTableCell * _transactionsSwitch;
    PKPaymentVerificationController * _verificationController;
    UIColor * _warningTextColor;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteHandler> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIColor *detailTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIColor *highlightColor;
@property (nonatomic) UIColor *linkTextColor;
@property (nonatomic) UIColor *primaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic) UIColor *warningTextColor;

- (void).cxx_destruct;
- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_billingAddressCellForTableView:(id)arg1;
- (void)_callIssuer;
- (bool)_canSelectTransaction;
- (void)_cancelPendingTransactionTimerClearingPending:(bool)arg1;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (unsigned long long)_deleteSectionCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectContactBankSection;
- (void)_didSelectDeleteCard;
- (void)_didSelectDeleteSectionAtRow:(long long)arg1;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (void)_done:(id)arg1;
- (void)_emailIssuer;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (id)_headerTitleForPassStateSection;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (void)_openIssuerWebsite;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (double)_paymentTransactionCellHeight;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_reloadPassAndView;
- (void)_reloadTransactionSection;
- (void)_reloadTransactionsWithCompletion:(id /* block */)arg1;
- (void)_reloadView;
- (bool)_shouldShowAutomaticPresentation;
- (bool)_shouldShowBillingAddressCell;
- (bool)_shouldShowContactCell;
- (bool)_shouldShowPrivacyPolicyCell;
- (bool)_shouldShowTermsCell;
- (id)_spinnerCellForTableView:(id)arg1;
- (void)_startPendingTransactionTimer;
- (id)_subtitleCellForTableView:(id)arg1;
- (void)_tabBarSegmentChanged:(id)arg1;
- (bool)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (bool)_updateHeaderHeight;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTransactionsWithPendingTransactions;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)deleteOverrider;
- (id)detailTextColor;
- (void)didChangeVerificationPresentation;
- (id)highlightColor;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5;
- (id)linkTextColor;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (id)primaryTextColor;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDeleteOverrider:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setWarningTextColor:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateActivationFooterViewContents;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)warningTextColor;

@end
