/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate> {
    IKViewElement * _buttonLockupElement;
}

@property (nonatomic, retain) IKViewElement *buttonLockupElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;
- (id)_newViewModel;
- (bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1;
- (id)buttonLockupElement;
- (void)setButtonLockupElement:(id)arg1;

@end
