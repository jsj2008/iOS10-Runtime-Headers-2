/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyTransferAgentServer : HMDKeyTransferAgent <HMFTimerDelegate> {
    bool  _broadcastFailure;
    NSObject<OS_dispatch_group> * _broadcastGroup;
    NSMutableSet * _broadcastNotifiedDevices;
    HMFExponentialBackoffTimer * _broadcastUUIDTimer;
    NSUUID * _currentKeyUUID;
    id /* block */  _finalCompletionHandler;
    bool  _inProgress;
}

@property (nonatomic) bool broadcastFailure;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *broadcastGroup;
@property (nonatomic, retain) NSMutableSet *broadcastNotifiedDevices;
@property (nonatomic, retain) HMFExponentialBackoffTimer *broadcastUUIDTimer;
@property (nonatomic, retain) NSUUID *currentKeyUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finalCompletionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inProgress;
@property (getter=isPeerAvailable, readonly) bool peerAvailable;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)__deviceUpdated:(id)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (bool)_endAdvertiseUUIDWithError:(id*)arg1;
- (void)_endPairingWithError:(id)arg1;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (id)_httpMessageTransport;
- (bool)_startAdvertiseUUIDWithError:(id*)arg1;
- (void)beginPairingWithCompletionHandler:(id /* block */)arg1;
- (bool)broadcastFailure;
- (id)broadcastGroup;
- (id)broadcastNotifiedDevices;
- (id)broadcastUUIDTimer;
- (id)currentKeyUUID;
- (void)dealloc;
- (id /* block */)finalCompletionHandler;
- (bool)inProgress;
- (id)initWithHomeManager:(id)arg1;
- (bool)isPeerAvailable;
- (id)logIdentifier;
- (void)setBroadcastFailure:(bool)arg1;
- (void)setBroadcastGroup:(id)arg1;
- (void)setBroadcastNotifiedDevices:(id)arg1;
- (void)setBroadcastUUIDTimer:(id)arg1;
- (void)setCurrentKeyUUID:(id)arg1;
- (void)setFinalCompletionHandler:(id /* block */)arg1;
- (void)setInProgress:(bool)arg1;
- (void)timerDidFire:(id)arg1;

@end
