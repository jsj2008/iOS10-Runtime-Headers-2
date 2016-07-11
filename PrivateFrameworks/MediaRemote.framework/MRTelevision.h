/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevision : NSObject <MRDeviceInfoObserving, MRTelevisionClientConnectionDelegate> {
    unsigned int  _cachedServerDisconnectError;
    MRTelevisionClientConnection * _connection;
    unsigned int  _connectionState;
    id /* block */  _connectionStateCallback;
    NSObject<OS_dispatch_queue> * _connectionStateCallbackQueue;
    struct _MROrigin { } * _customOrigin;
    MRDeviceInfo * _deviceInfo;
    MRDeviceInfoObserver * _deviceInfoObserver;
    unsigned int  _gameControllerInputMode;
    id /* block */  _gameControllerInputModeCallback;
    NSObject<OS_dispatch_queue> * _gameControllerInputModeCallbackQueue;
    id /* block */  _gameControllerPropertiesCallback;
    NSObject<OS_dispatch_queue> * _gameControllerPropertiesCallbackQueue;
    bool  _isCallingClientCallback;
    bool  _isCoalescingClientStateUpdatesConfigMessages;
    id /* block */  _nameCallback;
    NSObject<OS_dispatch_queue> * _nameCallbackQueue;
    NSNetService * _netService;
    NSData * _nowPlayingArtwork;
    NSMutableDictionary * _nowPlayingInfo;
    id /* block */  _pairingAllowedCallback;
    NSObject<OS_dispatch_queue> * _pairingAllowedCallbackQueue;
    id /* block */  _pairingCallback;
    NSObject<OS_dispatch_queue> * _pairingCallbackQueue;
    void * _playbackQueue;
    id /* block */  _recordingStateCallback;
    NSObject<OS_dispatch_queue> * _recordingStateCallbackQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    id /* block */  _textInputCallback;
    NSObject<OS_dispatch_queue> * _textInputCallbackQueue;
    MSVDistributedNotificationObserver * _volumeControlNotificationObserver;
    bool  _wantsNowPlayingArtworkNotifications;
    bool  _wantsNowPlayingNotifications;
    bool  _wantsVolumeNotifications;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) MRTelevisionClientConnection *connection;
@property (nonatomic, readonly) unsigned int connectionState;
@property (nonatomic, copy) id /* block */ connectionStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (nonatomic) struct _MROrigin { }*customOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MRDeviceInfo *deviceInfo;
@property (nonatomic) unsigned int gameControllerInputMode;
@property (nonatomic, copy) id /* block */ gameControllerInputModeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue;
@property (nonatomic, copy) id /* block */ gameControllerPropertiesCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic) bool isCallingClientCallback;
@property (nonatomic) bool isCoalescingClientStateUpdatesConfigMessages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ nameCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (nonatomic, retain) NSNetService *netService;
@property (nonatomic, copy) NSData *nowPlayingArtwork;
@property (nonatomic, retain) NSMutableDictionary *nowPlayingInfo;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) void*pairedDevice;
@property (nonatomic, copy) id /* block */ pairingAllowedCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue;
@property (nonatomic, copy) id /* block */ pairingCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pairingCallbackQueue;
@property (nonatomic, readonly) long long port;
@property (nonatomic, copy) id /* block */ recordingStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ textInputCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *textInputCallbackQueue;
@property (nonatomic, retain) MSVDistributedNotificationObserver *volumeControlNotificationObserver;
@property (nonatomic) bool wantsNowPlayingArtworkNotifications;
@property (nonatomic) bool wantsNowPlayingNotifications;
@property (nonatomic) bool wantsVolumeNotifications;

+ (id)_deviceInfoFromTXTRecordData:(id)arg1;

- (void)_addArtwork:(id)arg1 toNowPlayingInfo:(id)arg2;
- (void)_callClientAllowsPairingCallback;
- (void)_callClientConnectionStateCallback:(id)arg1;
- (void)_callClientGameControllerInputModeCallback;
- (void)_callClientGameControllerPropertiesCallback:(void*)arg1 controller:(unsigned long long)arg2;
- (void)_callClientNameCallback;
- (void)_callClientPairingCallback:(id /* block */)arg1;
- (void)_callClientRecordingStateCallback;
- (void)_callClientTextInputCallback:(id)arg1 type:(unsigned int)arg2;
- (void)_cleanUp;
- (id)_errorForCurrentState;
- (void)_handleCryptoPairingMessage:(id)arg1;
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;
- (void)_handleKeyboardMessage:(id)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleSetConnectionStateMessage:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleSetVolumeControlAvailabilityMessage:(id)arg1;
- (void)_handleTransactionMessage:(id)arg1;
- (id)_initializeConnection;
- (id)_loadDeviceInfo;
- (id)_openSecuritySession;
- (void)_registerPlaybackQueueCallback;
- (void)_scheduleClientStateUpdatesConfigMessage;
- (void)_sendTextInputMessageWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (id)_setupCustomOrigin;
- (void)_setupCustomOriginWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_teardownCustomOrigin;
- (void)_updateNowPlayingInfo;
- (void)clearActiveTextEditingSessionData;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (void)connect;
- (id)connection;
- (unsigned int)connectionState;
- (id /* block */)connectionStateCallback;
- (id)connectionStateCallbackQueue;
- (struct _MROrigin { }*)customOrigin;
- (void)dealloc;
- (void)deleteBackwardInActiveTextEditingSession;
- (id)description;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (unsigned int)gameControllerInputMode;
- (id /* block */)gameControllerInputModeCallback;
- (id)gameControllerInputModeCallbackQueue;
- (id /* block */)gameControllerPropertiesCallback;
- (id)gameControllerPropertiesCallbackQueue;
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)hostName;
- (id)initWithNetService:(id)arg1;
- (id)inputStream;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;
- (bool)isCallingClientCallback;
- (bool)isCoalescingClientStateUpdatesConfigMessages;
- (bool)isPaired;
- (id)name;
- (id /* block */)nameCallback;
- (id)nameCallbackQueue;
- (id)netService;
- (id)nowPlayingArtwork;
- (id)nowPlayingInfo;
- (void)observer:(id)arg1 didObserveNewDeviceInfo:(id)arg2;
- (id)outputStream;
- (void*)pairedDevice;
- (id /* block */)pairingAllowedCallback;
- (id)pairingAllowedCallbackQueue;
- (id /* block */)pairingCallback;
- (id)pairingCallbackQueue;
- (long long)port;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(struct { double x1; double x2; })arg3 gain:(float)arg4;
- (id /* block */)recordingStateCallback;
- (id)recordingStateCallbackQueue;
- (void)registerGameControllerWithProperties:(void*)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendGameControllerEvent:(const struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; float x_3_2_6; float x_3_2_7; float x_3_2_8; float x_3_2_9; float x_3_2_10; float x_3_2_11; float x_3_2_12; float x_3_2_13; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; bool x_4_2_3; unsigned long long x_4_2_4; } x_2_1_4; } x2; }*)arg1 controllerID:(unsigned long long)arg2;
- (void)sendHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })arg1 toVirtualDeviceWithID:(unsigned long long)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallbackQueue:(id)arg1;
- (void)setCustomOrigin:(struct _MROrigin { }*)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setGameControllerInputMode:(unsigned int)arg1;
- (void)setGameControllerInputModeCallback:(id /* block */)arg1;
- (void)setGameControllerInputModeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setGameControllerInputModeCallbackQueue:(id)arg1;
- (void)setGameControllerPropertiesCallback:(id /* block */)arg1;
- (void)setGameControllerPropertiesCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setGameControllerPropertiesCallbackQueue:(id)arg1;
- (void)setIsCallingClientCallback:(bool)arg1;
- (void)setIsCoalescingClientStateUpdatesConfigMessages:(bool)arg1;
- (void)setNameCallback:(id /* block */)arg1;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallbackQueue:(id)arg1;
- (void)setNetService:(id)arg1;
- (void)setNowPlayingArtwork:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPairingAllowedCallback:(id /* block */)arg1;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallbackQueue:(id)arg1;
- (void)setPairingCallback:(id /* block */)arg1;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallbackQueue:(id)arg1;
- (void)setRecordingStateCallback:(id /* block */)arg1;
- (void)setRecordingStateCallbackQueue:(id)arg1;
- (void)setTextEditingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setTextInputCallback:(id /* block */)arg1;
- (void)setTextInputCallbackQueue:(id)arg1;
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)setVoiceRecordingStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setVolumeControlNotificationObserver:(id)arg1;
- (void)setWantsNowPlayingArtworkNotifications:(bool)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id /* block */)textInputCallback;
- (id)textInputCallbackQueue;
- (void)unpair;
- (void)unregisterGameController:(unsigned long long)arg1;
- (void)updateWithService:(id)arg1;
- (id)volumeControlNotificationObserver;
- (bool)wantsNowPlayingArtworkNotifications;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsVolumeNotifications;

@end
