/* Generated by RuntimeBrowser.
 */

@protocol VCTransportSessionProtocol <NSObject>

@required

- (unsigned int)basebandNotificationRegistrationToken;
- (VCConnectionManager *)connectionManager;
- (NSObject *)connectionSetupPiggybackBlob;
- (unsigned int)connectionSetupRTTEstimate;
- (int)detailedErrorCode;
- (id /* block */)eventHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned int, id, id, SEL
- (int)flushBasebandQueueWithPayloads:(NSArray *)arg1;
- (bool)getConnectionSetupData:(id*)arg1 withOptions:(NSDictionary *)arg2 error:(id*)arg3;
- (int)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3;
- (void)handleMediaReceivedOverPeerToPeerLink;
- (void)handleMediaReceivedOverRelayLink;
- (bool)isHandoverSupported;
- (bool)isRemoteOSPreLion;
- (TimingCollection *)perfTimings;
- (void)reportNetworkConditionsDegraded;
- (bool)requiresWiFi;
- (void)setConnectionSetupPiggybackBlob:(NSObject *)arg1;
- (void)setEventHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, id
- (void)setPerfTimings:(TimingCollection *)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)setUseCompressedConnectionData:(bool)arg1;
- (void)start;
- (void)stop;
- (int)updateBasebandForConnection:(id <VCConnectionProtocol>)arg1;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;
- (bool)useCompressedConnectionData;

@end
