/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardsOnFileViewController : PKPaymentSetupTableViewController {
    bool  _allowsManualEntry;
    NSArray * _credentials;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentSetupCardDetailsFooterView * _tableFooter;
    PKTableHeaderView * _tableHeader;
}

@property (nonatomic) bool allowsManualEntry;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (void)_presentCardDetailsControllerForCredential:(id)arg1;
- (void)_presentManualAddController;
- (bool)allowsManualEntry;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)product;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setProduct:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
