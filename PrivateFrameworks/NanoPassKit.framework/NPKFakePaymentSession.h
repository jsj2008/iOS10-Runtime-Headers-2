/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver> {
    unsigned long long  _changeCardToken;
    PKFieldDetector * _fieldDetector;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _ourCallbackQueue;
    PKPass * _ourCurrentPass;
    NSObject<OS_dispatch_queue> * _ourInternalQueue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic) unsigned long long changeCardToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFieldDetector *fieldDetector;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ourCallbackQueue;
@property (nonatomic, retain) PKPass *ourCurrentPass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ourInternalQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (void)_handleTimeoutTimer;
- (void)_scheduleDidActivateEventForPass:(id)arg1;
- (void)_setTimeoutTimer;
- (unsigned long long)changeCardToken;
- (void)confirmSession;
- (id)currentPass;
- (void)deactivateSessionWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (bool)deferAuthorization;
- (id)fieldDetector;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (bool)invalidated;
- (id)ourCallbackQueue;
- (id)ourCurrentPass;
- (id)ourInternalQueue;
- (void)renewSession;
- (void)setChangeCardToken:(unsigned long long)arg1;
- (void)setCurrentPass:(id)arg1;
- (void)setDeferAuthorization:(bool)arg1;
- (void)setFieldDetector:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setOurCallbackQueue:(id)arg1;
- (void)setOurCurrentPass:(id)arg1;
- (void)setOurInternalQueue:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (bool)startSession;
- (id)timeoutTimer;

@end
