/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookPageSelectionViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {
    MSCLAccountStore * _accountStore;
    bool  _didRequestImages;
    NSMapTable * _images;
    NSArray * _pages;
    UIImage * _placeholderImage;
    MSCLSettingsTableViewCell * _removeAccountButtonCell;
    NSString * _selectedPageIdentifier;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedExplanationString;
- (void)_cancelButtonAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (id)_facebookPageTableViewCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_imageDataConsumer;
- (void)_layoutTableHeaderView;
- (id)_newImageOperationWithObjectIdentifier:(id)arg1;
- (id)_removalConfirmationMessage;
- (void)_removeAccount;
- (void)_requestImagesIfNecessary;
- (void)_setImage:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)initWithAccountStore:(id)arg1 pages:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSelectedPage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
