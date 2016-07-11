/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPSecuritySessionDelegate> {
    CBService * _accessoryInfoService;
    NSMutableArray * _addRemovePairingOperationsQueue;
    unsigned long long  _availableInstanceID;
    NSMapTable * _btleCharacteristicToHAPCharacteristicMap;
    NSMapTable * _btleServiceToHAPServiceMap;
    unsigned long long  _characteristicDiscoveryRequestCount;
    unsigned long long  _characteristicValueReadCount;
    NSObject<OS_dispatch_source> * _connectionLifetimeTimer;
    unsigned long long  _connectionRetryCount;
    NSString * _controllerUsername;
    bool  _disconnecting;
    NSMapTable * _hapCharacteristicEnableEventCompletionQueues;
    NSMapTable * _hapCharacteristicReadCompletionQueues;
    NSMapTable * _hapCharacteristicWriteCompletionQueues;
    CBCharacteristic * _identifyCharacteristic;
    double  _idleConnectionTimeoutInSec;
    CBCharacteristic * _manufacturerCharacteristic;
    unsigned long long  _metadataDiscoveryRequestCount;
    unsigned long long  _metadataValueReadCount;
    CBCharacteristic * _modelCharacteristic;
    CBCharacteristic * _pairSetupCharacteristic;
    CBCharacteristic * _pairVerifyCharacteristic;
    id /* block */  _pairVerifyCompletionBlock;
    unsigned long long  _pairingFeatureFlags;
    CBCharacteristic * _pairingFeaturesCharacteristic;
    bool  _pairingFeaturesRead;
    CBService * _pairingService;
    struct PairingSessionPrivate { } * _pairingSession;
    CBCharacteristic * _pairingsCharacteristic;
    bool  _removeOnDisconnect;
    HAPSecuritySession * _securitySession;
    bool  _securitySessionOpen;
    bool  _securitySessionOpening;
    CBCharacteristic * _serialNumberCharacteristic;
    bool  _startPairingRequested;
    unsigned long long  _state;
    id /* block */  _unpairedIdentifyCompletionBlock;
    bool  _unpairedIdentifyRequested;
}

@property (nonatomic, retain) CBService *accessoryInfoService;
@property (nonatomic, retain) NSMutableArray *addRemovePairingOperationsQueue;
@property (nonatomic) unsigned long long availableInstanceID;
@property (nonatomic, retain) NSMapTable *btleCharacteristicToHAPCharacteristicMap;
@property (nonatomic, retain) NSMapTable *btleServiceToHAPServiceMap;
@property (nonatomic) unsigned long long characteristicDiscoveryRequestCount;
@property (nonatomic) unsigned long long characteristicValueReadCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectionLifetimeTimer;
@property (nonatomic) unsigned long long connectionRetryCount;
@property (nonatomic, retain) NSString *controllerUsername;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisconnecting, nonatomic) bool disconnecting;
@property (nonatomic, retain) NSMapTable *hapCharacteristicEnableEventCompletionQueues;
@property (nonatomic, retain) NSMapTable *hapCharacteristicReadCompletionQueues;
@property (nonatomic, retain) NSMapTable *hapCharacteristicWriteCompletionQueues;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CBCharacteristic *identifyCharacteristic;
@property (nonatomic) double idleConnectionTimeoutInSec;
@property (nonatomic, retain) CBCharacteristic *manufacturerCharacteristic;
@property (nonatomic) unsigned long long metadataDiscoveryRequestCount;
@property (nonatomic) unsigned long long metadataValueReadCount;
@property (nonatomic, retain) CBCharacteristic *modelCharacteristic;
@property (nonatomic, retain) CBCharacteristic *pairSetupCharacteristic;
@property (nonatomic, retain) CBCharacteristic *pairVerifyCharacteristic;
@property (nonatomic, copy) id /* block */ pairVerifyCompletionBlock;
@property (nonatomic) unsigned long long pairingFeatureFlags;
@property (nonatomic, retain) CBCharacteristic *pairingFeaturesCharacteristic;
@property (nonatomic) bool pairingFeaturesRead;
@property (nonatomic, retain) CBService *pairingService;
@property (nonatomic, retain) CBCharacteristic *pairingsCharacteristic;
@property (nonatomic) bool removeOnDisconnect;
@property (nonatomic, retain) HAPSecuritySession *securitySession;
@property (getter=isSecuritySessionOpen, nonatomic) bool securitySessionOpen;
@property (getter=isSecuritySessionOpening, nonatomic) bool securitySessionOpening;
@property (nonatomic, retain) CBCharacteristic *serialNumberCharacteristic;
@property (nonatomic) bool startPairingRequested;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unpairedIdentifyCompletionBlock;
@property (nonatomic) bool unpairedIdentifyRequested;

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;
+ (id)deserializeCharacteristicReadData:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(bool)arg3 error:(id*)arg4;
+ (id)serializeCharacteristicWriteValue:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(bool)arg3 authenticationData:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (void)_cancelConnectionLifetimeTimer;
- (void)_checkForAuthPrompt;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_dequeueAndContinueOperation;
- (id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (id /* block */)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (void)_enableEvent:(bool)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)_enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2;
- (void)_enqueueEnableEventCompletionHandler:(id /* block */)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueOperation:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(bool)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)_enqueueReadCompletionHandler:(id /* block */)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueWriteCompletionHandler:(id /* block */)arg1 forCharacteristic:(id)arg2;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_establishSecureSession;
- (void)_getAttributeDatabase;
- (void)_handleConnectionLifetimeTimeout;
- (void)_handleDescriptorDiscovery;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_handleHAPServiceDiscovery;
- (void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (int)_handlePairSetupExchangeWithData:(id)arg1;
- (void)_handlePairingStateMachine;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_handleReadDescriptorValues;
- (void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg1;
- (void)_handleSuccessfulBTLEConnection;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (id)_nextInstanceID;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (id)_pairSetupHAPCharacteristic;
- (int)_pairSetupStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (id)_pairVerifyHAPCharacteristic;
- (bool)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3;
- (id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(id /* block */)arg2 queue:(id)arg3;
- (void)_reallyEstablishSecureSession;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_resetState;
- (void)_setupBTLEConnectionToPeripheral;
- (bool)_shouldEnableSessionSecurity;
- (void)_updateConnectionLifetimeTimer;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(id /* block */)arg4 queue:(id)arg5;
- (id)accessoryInfoService;
- (bool)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)addRemovePairingOperationsQueue;
- (unsigned long long)availableInstanceID;
- (id)btleCharacteristicToHAPCharacteristicMap;
- (id)btleServiceToHAPServiceMap;
- (unsigned long long)characteristicDiscoveryRequestCount;
- (unsigned long long)characteristicValueReadCount;
- (id)connectionLifetimeTimer;
- (unsigned long long)connectionRetryCount;
- (void)continuePairingAfterAuthPrompt;
- (id)controllerUsername;
- (void)dealloc;
- (id)description;
- (void)discoverAccessories;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)getLocalPairingIdentityAndAllowCreation:(bool)arg1 error:(id*)arg2;
- (void)handleConnectionWithError:(id)arg1;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (id)hapCharacteristicEnableEventCompletionQueues;
- (id)hapCharacteristicReadCompletionQueues;
- (id)hapCharacteristicWriteCompletionQueues;
- (id)identifyCharacteristic;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (double)idleConnectionTimeoutInSec;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 connectionIdleTime:(unsigned char)arg7 browser:(id)arg8 keyStore:(id)arg9;
- (bool)isDisconnecting;
- (bool)isSecuritySessionOpen;
- (bool)isSecuritySessionOpening;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)manufacturerCharacteristic;
- (unsigned long long)metadataDiscoveryRequestCount;
- (unsigned long long)metadataValueReadCount;
- (id)modelCharacteristic;
- (id)pairSetupCharacteristic;
- (id)pairVerifyCharacteristic;
- (id /* block */)pairVerifyCompletionBlock;
- (unsigned long long)pairingFeatureFlags;
- (id)pairingFeaturesCharacteristic;
- (bool)pairingFeaturesRead;
- (id)pairingService;
- (id)pairingsCharacteristic;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removeOnDisconnect;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)securitySession;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (id)serialNumberCharacteristic;
- (void)setAccessoryInfoService:(id)arg1;
- (void)setAddRemovePairingOperationsQueue:(id)arg1;
- (void)setAvailableInstanceID:(unsigned long long)arg1;
- (void)setBtleCharacteristicToHAPCharacteristicMap:(id)arg1;
- (void)setBtleServiceToHAPServiceMap:(id)arg1;
- (void)setCharacteristicDiscoveryRequestCount:(unsigned long long)arg1;
- (void)setCharacteristicValueReadCount:(unsigned long long)arg1;
- (void)setConnectionLifetimeTimer:(id)arg1;
- (void)setConnectionRetryCount:(unsigned long long)arg1;
- (void)setControllerUsername:(id)arg1;
- (void)setDisconnecting:(bool)arg1;
- (void)setHapCharacteristicEnableEventCompletionQueues:(id)arg1;
- (void)setHapCharacteristicReadCompletionQueues:(id)arg1;
- (void)setHapCharacteristicWriteCompletionQueues:(id)arg1;
- (void)setIdentifyCharacteristic:(id)arg1;
- (void)setIdleConnectionTimeoutInSec:(double)arg1;
- (void)setManufacturerCharacteristic:(id)arg1;
- (void)setMetadataDiscoveryRequestCount:(unsigned long long)arg1;
- (void)setMetadataValueReadCount:(unsigned long long)arg1;
- (void)setModelCharacteristic:(id)arg1;
- (void)setPairSetupCharacteristic:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairVerifyCompletionBlock:(id /* block */)arg1;
- (void)setPairingFeatureFlags:(unsigned long long)arg1;
- (void)setPairingFeaturesCharacteristic:(id)arg1;
- (void)setPairingFeaturesRead:(bool)arg1;
- (void)setPairingService:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setRemoveOnDisconnect:(bool)arg1;
- (void)setSecuritySession:(id)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSecuritySessionOpening:(bool)arg1;
- (void)setSerialNumberCharacteristic:(id)arg1;
- (void)setStartPairingRequested:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnpairedIdentifyCompletionBlock:(id /* block */)arg1;
- (void)setUnpairedIdentifyRequested:(bool)arg1;
- (void)startPairing;
- (bool)startPairingRequested;
- (unsigned long long)state;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (id /* block */)unpairedIdentifyCompletionBlock;
- (bool)unpairedIdentifyRequested;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
