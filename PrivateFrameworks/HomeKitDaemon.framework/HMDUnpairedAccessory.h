/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnpairedAccessory : NSObject <HMFMessageReceiver> {
    HMAccessoryCategory * _category;
    HMDHome * _home;
    NSString * _identifier;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_source> * _pairingRetryTimer;
    NSMutableArray * _servers;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMAccessoryCategory *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (getter=getName, nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *pairingRetryTimer;
@property (nonatomic, retain) NSMutableArray *servers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transportTypes;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (void)_updateCategory:(id)arg1 notifyClients:(bool)arg2;
- (void)_updateName:(id)arg1;
- (id)accessoryServer;
- (id)accessoryServers;
- (void)addAccessoryServer:(id)arg1;
- (id)category;
- (id)description;
- (id)descriptionForTransportTypes;
- (id)descriptionNonBlocking;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)getName;
- (bool)hasBTLELink;
- (id)home;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)pairingRetryTimer;
- (bool)removeAccessoryServer:(id)arg1;
- (id)servers;
- (void)setCategory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairingRetryTimer:(id)arg1;
- (void)setServers:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (unsigned long long)transportTypes;
- (void)updateCategory:(id)arg1;
- (void)updateName:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
