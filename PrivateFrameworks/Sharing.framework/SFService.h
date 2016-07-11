/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    long long  _advertiseRate;
    bool  _autoUnlockEnabled;
    bool  _autoUnlockWatch;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _eventMessageHandler;
    bool  _hasProblem;
    NSString * _identifier;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _needsKeyboard;
    bool  _needsSetup;
    id /* block */  _requestMessageHandler;
    struct NSMutableDictionary { Class x1; } * _requestQueue;
    id /* block */  _responseMessageInternalHandler;
    NSUUID * _serviceUUID;
    bool  _supportsAirPlayReceiver;
    bool  _wakeDevice;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) long long advertiseRate;
@property (nonatomic) bool autoUnlockEnabled;
@property (nonatomic) bool autoUnlockWatch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ eventMessageHandler;
@property (nonatomic) bool hasProblem;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool needsKeyboard;
@property (nonatomic) bool needsSetup;
@property (nonatomic, copy) id /* block */ requestMessageHandler;
@property (nonatomic, copy) id /* block */ responseMessageInternalHandler;
@property (nonatomic, copy) NSUUID *serviceUUID;
@property (nonatomic) bool supportsAirPlayReceiver;
@property (nonatomic) bool wakeDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_performActivateSafeChange:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (long long)advertiseRate;
- (bool)autoUnlockEnabled;
- (bool)autoUnlockWatch;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)eventMessageHandler;
- (bool)hasProblem;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)needsKeyboard;
- (bool)needsSetup;
- (id /* block */)requestMessageHandler;
- (id /* block */)responseMessageInternalHandler;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (id)serviceUUID;
- (void)setAdvertiseRate:(long long)arg1;
- (void)setAutoUnlockEnabled:(bool)arg1;
- (void)setAutoUnlockWatch:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setHasProblem:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setNeedsKeyboard:(bool)arg1;
- (void)setNeedsSetup:(bool)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;
- (void)setResponseMessageInternalHandler:(id /* block */)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSupportsAirPlayReceiver:(bool)arg1;
- (void)setWakeDevice:(bool)arg1;
- (bool)supportsAirPlayReceiver;
- (void)updateWithService:(id)arg1;
- (bool)wakeDevice;

@end
