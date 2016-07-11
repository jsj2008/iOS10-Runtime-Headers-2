/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreStreamProviderDelegate> {
    unsigned long long  _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> * _aceHeaderTimerSource;
    NSMutableData * _bufferedGeneralOutputData;
    NSMutableData * _bufferedInputData;
    NSMutableData * _bufferedProviderHeaderOutputData;
    SiriCoreSiriConnectionInfo * _connectionInfo;
    long long  _connectionMethod;
    unsigned int  _currentBarrierIndex;
    double  _currentOpenTime;
    unsigned int  _currentPingIndex;
    double  _currentStartTime;
    <SiriCoreSiriBackgroundConnectionDelegate> * _delegate;
    bool  _deviceIsInWalkaboutExperimentGroup;
    NSMutableDictionary * _errorsForConnectionMethods;
    double  _firstByteReadTime;
    double  _firstStartTime;
    bool  _hasFoundTrust;
    bool  _hasReportedError;
    struct __CFHTTPMessage { } * _httpResponseHeader;
    SiriCoreDataDecompressor * _inputDecompressor;
    bool  _isCanceled;
    bool  _isOpened;
    unsigned long long  _metricsCount;
    NSMutableArray * _outgoingCommandsWithSendCompletions;
    SiriCoreDataCompressor * _outputCompressor;
    NSMutableDictionary * _outstandingBarriers;
    Class  _peerProviderClass;
    NSString * _peerType;
    NSString * _peerVersion;
    SiriCorePingInfo * _pingInfo;
    NSObject<OS_dispatch_source> * _pingTimerSource;
    NSString * _productTypePrefix;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned char  _readBuffer;
    struct __CFReadStream { } * _readStream;
    NSMutableData * _safetyNetBuffer;
    bool  _siriConnectionUsesPeerManagedSync;
    unsigned long long  _startCount;
    <SiriCoreStreamProvider> * _streamProvider;
    bool  _usesProxyConnection;
    struct __CFWriteStream { } * _writeStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriCoreSiriBackgroundConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceIsInWalkaboutExperimentGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class peerProviderClass;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic) bool siriConnectionUsesPeerManagedSync;
@property (readonly) Class superclass;
@property (nonatomic) bool usesProxyConnection;

- (void).cxx_destruct;
- (void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2;
- (void)_acknowledgePing:(unsigned int)arg1;
- (id)_activeBufferedOutputData;
- (void)_addOutgoingCommandForSendCompletion:(id)arg1;
- (id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2;
- (bool)_canFallBackFromError:(id)arg1;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1;
- (void)_cancelOutstandingBarriers;
- (void)_closeConnection;
- (void)_closeConnectionAndPrepareForReconnect:(bool)arg1;
- (id)_connectionMethodDescription;
- (void)_connectionMetricsWithCompletion:(id /* block */)arg1;
- (id)_connectionType;
- (bool)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3;
- (void)_didEncounterError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(id /* block */)arg2;
- (void)_flushOutgoingCommandsAndDispatchSendCompletionWithResult:(long long)arg1 error:(id)arg2;
- (void)_handleAceEnd;
- (void)_handleAceNop;
- (void)_handleAceObject:(id)arg1;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleBarrierReply:(unsigned int)arg1;
- (void)_handlePacket:(struct { unsigned char x1; unsigned int x2; }*)arg1;
- (bool)_hasBufferedDataOrOutstandingPings;
- (bool)_hasReadACEHeader;
- (bool)_hasReadHTTPHeader;
- (id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4;
- (void)_initializeAndSendBufferedGeneralOutputData;
- (long long)_nextConnectionMethod;
- (void)_pingTimerFired;
- (id)_readDataFromReadStream:(struct __CFReadStream { }*)arg1 hasMore:(bool*)arg2;
- (void)_readStreamEndEncountered;
- (void)_readStreamErrorOccurred;
- (void)_readStreamHasBytesAvailable;
- (void)_resumePingTimer;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1;
- (void)_sendAcePingWithId:(unsigned int)arg1;
- (void)_sendAcePongWithId:(unsigned int)arg1;
- (void)_sendData:(id)arg1 bufferedOutputData:(id)arg2;
- (void)_sendGeneralData:(id)arg1;
- (void)_sendProviderHeader;
- (bool)_shouldDeferAcePingTimer;
- (bool)_shouldTrySameConnectionMethodForMethod:(long long)arg1 error:(id)arg2;
- (void)_startWithConnectionInfo:(id)arg1 allowFallbackToNewConnectionMethod:(bool)arg2;
- (bool)_tcpInfoIndicatesPoorLinkQuality;
- (bool)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(struct __CFHTTPMessage { }*)arg2 statusCode:(long long*)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(struct __CFHTTPMessage { }*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned long long)arg2 packet:(struct { unsigned char x1; unsigned int x2; }*)arg3 object:(id*)arg4 bytesParsed:(unsigned long long*)arg5 error:(id*)arg6;
- (void)_tryToWriteBufferedOutputData;
- (id)_userAgent;
- (bool)_usingFlorence;
- (bool)_usingNetwork;
- (bool)_usingPOP;
- (bool)_usingPOPOnPeer;
- (bool)_usingPeer;
- (void)_validateTrustForStream:(id)arg1;
- (void)_validateTrustInfo:(id)arg1;
- (bool)_wifiIsAvailable;
- (bool)_wifiMayBeBetterThanCurrentStream;
- (void)_writeStreamDidOpen;
- (void)_writeStreamEndEncountered;
- (void)_writeStreamErrorOccurred;
- (void)_writeStreamHasSpaceAvailable;
- (id)analysisInfo;
- (void)barrier:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (bool)deviceIsInWalkaboutExperimentGroup;
- (id)getConnectionMethodUsed;
- (void)getConnectionMetrics:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (Class)peerProviderClass;
- (id)peerType;
- (id)peerVersion;
- (id)productTypePrefix;
- (void)sendCommand:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(bool)arg1;
- (void)setPeerProviderClass:(Class)arg1;
- (void)setPeerType:(id)arg1;
- (void)setPeerVersion:(id)arg1;
- (void)setProductTypePrefix:(id)arg1;
- (void)setSendPings:(bool)arg1;
- (void)setSiriConnectionUsesPeerManagedSync:(bool)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (bool)siriConnectionUsesPeerManagedSync;
- (void)startWithConnectionInfo:(id)arg1;
- (void)streamProvider:(id)arg1 receivedError:(id)arg2;
- (bool)usesProxyConnection;

@end
