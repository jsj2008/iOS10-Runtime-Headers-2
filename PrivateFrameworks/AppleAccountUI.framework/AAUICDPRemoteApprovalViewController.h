/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICDPRemoteApprovalViewController : UITableViewController <AAUICDPRemoteSecretChallengeHandler> {
    id /* block */  _challengeResponseHandler;
    NSArray * _devices;
    bool  _shouldShowCancelButton;
    CDPRemoteDeviceSecretValidator * _validator;
}

@property (nonatomic, copy) id /* block */ challengeResponseHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldShowCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id /* block */)challengeResponseHandler;
- (id)initWithDevices:(id)arg1 validator:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setChallengeResponseHandler:(id /* block */)arg1;
- (void)setShouldShowCancelButton:(bool)arg1;
- (bool)shouldShowCancelButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
