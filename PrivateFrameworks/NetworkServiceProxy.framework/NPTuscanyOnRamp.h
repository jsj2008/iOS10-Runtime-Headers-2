/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTuscanyOnRamp : NSObject <NSPNetworkAgentDelegate, NSSecureCoding> {
    NSPKeyNetworkAgent * _agent;
    NWNetworkAgentRegistration * _agentRegistration;
    NSPNetworkAgent * _currentAgent;
    NSData * _dayPass;
    NSDate * _dayPassCreationDate;
    double  _dayPassHardExpiry;
    NSUUID * _dayPassUUID;
    NWHostEndpoint * _daypassEndpoint;
    NPKeyBag * _keybag;
    unsigned long long  _maxFrameSize;
    NSMutableDictionary * _outstandingAssertions;
    NPWaldo * _parentWaldo;
    unsigned long long  _receivedUsageUpdates;
    NSDate * _retryDate;
    NPTunnelTuscanyEndpoint * _tuscanyEndpoint;
}

@property (retain) NSPKeyNetworkAgent *agent;
@property (retain) NWNetworkAgentRegistration *agentRegistration;
@property (retain) NSPNetworkAgent *currentAgent;
@property (readonly) long long currentEdgeType;
@property (readonly) unsigned int currentFailureReason;
@property unsigned int currentTimestamp;
@property (retain) NSData *dayPass;
@property (retain) NSDate *dayPassCreationDate;
@property double dayPassHardExpiry;
@property unsigned int dayPassSessionCounter;
@property (retain) NSUUID *dayPassUUID;
@property (readonly) NWHostEndpoint *daypassEndpoint;
@property (readonly) bool isDayPassExpired;
@property (retain) NPKeyBag *keybag;
@property (readonly) unsigned long long maxFrameSize;
@property (retain) NSMutableDictionary *outstandingAssertions;
@property NPWaldo *parentWaldo;
@property unsigned long long receivedUsageUpdates;
@property (retain) NSDate *retryDate;
@property (readonly) NSString *shortDescription;
@property (retain) NPTunnelTuscanyEndpoint *tuscanyEndpoint;

+ (id)currentOnRamp;
+ (void)logKeybag:(id)arg1 message:(id)arg2;
+ (id)resetWithOnRamps:(id)arg1 currentTimestamp:(unsigned int)arg2 currentEdgeIndex:(long long)arg3 lastFailureReason:(unsigned int)arg4 generation:(unsigned int)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)agent;
- (id)agentRegistration;
- (id)copyCurrentDayPass;
- (unsigned int)copyValue:(void*)arg1 ofSize:(unsigned int)arg2 fromOffset:(unsigned int)arg3 base:(const char *)arg4 totalLength:(unsigned int)arg5;
- (id)currentAgent;
- (long long)currentEdgeType;
- (unsigned int)currentFailureReason;
- (unsigned int)currentTimestamp;
- (id)dayPass;
- (id)dayPassCreationDate;
- (double)dayPassHardExpiry;
- (unsigned int)dayPassSessionCounter;
- (id)dayPassUUID;
- (id)daypassEndpoint;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpointString:(id)arg1;
- (void)invalidateDayPass;
- (bool)isDayPassExpired;
- (bool)isDayPassPastExpiry:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)keybag;
- (unsigned long long)maxFrameSize;
- (id)outstandingAssertions;
- (id)parentWaldo;
- (void)receiveAssertionForUUID:(id)arg1;
- (void)receiveUnassertionForUUID:(id)arg1;
- (unsigned long long)receivedUsageUpdates;
- (void)refreshDayPassWithWaldoDelegate:(id)arg1 softExpiry:(double)arg2 retryInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (bool)registerAgent;
- (void)reportUsageWithResult:(bool)arg1 appData:(id)arg2;
- (bool)resetAgent:(id)arg1;
- (void)resetFromCurrentInfo;
- (id)retryDate;
- (void)setAgent:(id)arg1;
- (void)setAgentRegistration:(id)arg1;
- (void)setCurrentAgent:(id)arg1;
- (void)setCurrentTimestamp:(unsigned int)arg1;
- (void)setDayPass:(id)arg1;
- (void)setDayPassCreationDate:(id)arg1;
- (void)setDayPassHardExpiry:(double)arg1;
- (void)setDayPassSessionCounter:(unsigned int)arg1;
- (void)setDayPassUUID:(id)arg1;
- (void)setKeybag:(id)arg1;
- (void)setOutstandingAssertions:(id)arg1;
- (void)setParentWaldo:(id)arg1;
- (void)setReceivedUsageUpdates:(unsigned long long)arg1;
- (void)setRetryDate:(id)arg1;
- (void)setTuscanyEndpoint:(id)arg1;
- (id)shortDescription;
- (id)tuscanyEndpoint;
- (void)unregisterAgent;

@end
