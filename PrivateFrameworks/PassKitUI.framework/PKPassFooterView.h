/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate> {
    PKPassFooterContentView * _contentView;
    bool  _isBackgrounded;
    bool  _isVisible;
    PKPassView * _passView;
    long long  _paymentApplicationState;
    PKPaymentSessionHandle * _sessionHandle;
    NSObject<OS_dispatch_source> * _sessionStartTimer;
    unsigned long long  _sessionToken;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPassAuthorized;
@property (nonatomic, retain) PKPassView *passView;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canApplyContentViewForPersonalizedApplication;
- (bool)_canApplyContentViewForValueAddedService;
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1;
- (void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)_configureForValueAddedServiceWithContext:(id)arg1;
- (id)_contentViewForPaymentApplicationWithContext:(id)arg1;
- (void)_deleteButtonTapped;
- (void)_endSession;
- (void)_endSessionStartTimer;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)_lostModeButtonTapped;
- (void)_setContentView:(id)arg1;
- (void)_setContentView:(id)arg1 animated:(bool)arg2;
- (void)_startContactlessInterfaceSessionWithSessionAvailable:(id /* block */)arg1 sessionUnavailable:(id /* block */)arg2;
- (void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (id)initWithPassView:(id)arg1 context:(id)arg2;
- (bool)isPassAuthorized;
- (void)layoutSubviews;
- (void)passFooterContentViewDidBeginAuthenticating:(id)arg1;
- (void)passFooterContentViewDidEndAuthenticating:(id)arg1;
- (id)passView;
- (void)setPassView:(id)arg1;
- (long long)state;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
