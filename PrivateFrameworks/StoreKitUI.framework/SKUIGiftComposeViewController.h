/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    SKUIGiftAddressingSection * _addressingSection;
    SKUIGiftAmountSection * _amountSection;
    UIDatePicker * _datePicker;
    UIPopoverController * _datePickerPopover;
    UIImage * _itemImage;
    SKUIGiftItemView * _itemView;
    SKUIGiftValidationResponse * _lastValidationResponse;
    UIPopoverController * _peoplePickerPopover;
    UIPopoverController * _searchResultsPopover;
    UIView * _searchResultsView;
    NSMutableArray * _sections;
    SKUIGiftSendDateSection * _sendDateSection;
    NSIndexPath * _showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView * _tableView;
    bool  _tappedNextWhileValidating;
    SKUIGiftTermsAndConditionsSection * _termsSection;
    NSObject<OS_dispatch_source> * _validationTimer;
    SKUIGiftValidator * _validator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_amountControlAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_datePickerAction:(id)arg1;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (id)_headerView;
- (id)_itemImage;
- (id)_itemView;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)_nextAction:(id)arg1;
- (void)_pushThemePickerOrShowInvalidAlert;
- (void)_recipientsDidChangeNotification:(id)arg1;
- (void)_reloadSections;
- (void)_removeDatePickerIfPossible;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)_showDatePickerForRowAtIndexPath:(id)arg1;
- (void)_showDatePickerPopoverForRowAtIndexPath:(id)arg1;
- (void)_textFieldChangeNotification:(id)arg1;
- (void)_textViewChangeNotification:(id)arg1;
- (void)_textViewDidEndEditingNotification:(id)arg1;
- (void)_validateGift;
- (void)_validateGiftThrottled:(bool)arg1;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
