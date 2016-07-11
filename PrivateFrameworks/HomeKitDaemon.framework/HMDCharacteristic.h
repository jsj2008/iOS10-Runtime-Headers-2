/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristic : NSObject <HMDBulletinIdentifiers, HMFDumpState, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSData * _authorizationData;
    NSNumber * _characteristicInstanceID;
    HMDCharacteristicMetadata * _characteristicMetadata;
    long long  _characteristicProperties;
    NSString * _characteristicType;
    NSMutableSet * _hapCharacteristicTuples;
    id  _lastKnownValue;
    NSDate * _lastKnownValueUpdateTime;
    NSDate * _notificationEnabledTime;
    NSMutableSet * _notificationRegistrations;
    HMDService * _service;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, copy) NSData *authorizationData;
@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (nonatomic, retain) NSNumber *characteristicInstanceID;
@property (nonatomic, retain) HMDCharacteristicMetadata *characteristicMetadata;
@property (nonatomic) long long characteristicProperties;
@property (nonatomic, retain) NSString *characteristicType;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *hapCharacteristicTuples;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, retain) id lastKnownValue;
@property (nonatomic, retain) NSDate *lastKnownValueUpdateTime;
@property (nonatomic, readonly) HMDCharacteristicMetadata *metadata;
@property (nonatomic, retain) NSDate *notificationEnabledTime;
@property (nonatomic, retain) NSMutableSet *notificationRegistrations;
@property (nonatomic, readonly) long long properties;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (nonatomic, readonly) HMDService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)authorizationData;
- (struct NSDictionary { Class x1; }*)bulletinContext;
- (id)characteristicForHAPAccessory:(id)arg1;
- (id)characteristicForServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)characteristicInstanceID;
- (id)characteristicMetadata;
- (long long)characteristicProperties;
- (id)characteristicType;
- (id)characteristicTypeDescription;
- (void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (bool)deregisterNotificationForClientIdentifier:(id)arg1;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)hapCharacteristicTuples;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isClientNotificationEnabled;
- (bool)isNotificationEnabled;
- (bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (id)lastKnownValue;
- (id)lastKnownValueUpdateTime;
- (id)metadata;
- (id)notificationEnabledTime;
- (id)notificationRegistrations;
- (long long)properties;
- (id)serializedIdentifier;
- (id)service;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristicInstanceID:(id)arg1;
- (void)setCharacteristicMetadata:(id)arg1;
- (void)setCharacteristicProperties:(long long)arg1;
- (void)setCharacteristicType:(id)arg1;
- (void)setHapCharacteristicTuples:(id)arg1;
- (void)setLastKnownValue:(id)arg1;
- (void)setLastKnownValueUpdateTime:(id)arg1;
- (void)setNotificationEnabled:(bool)arg1 forClientIdentifier:(id)arg2;
- (void)setNotificationEnabledTime:(id)arg1;
- (void)setNotificationRegistrations:(id)arg1;
- (id)shortTypeDescription;
- (bool)supportsNotification;
- (id)type;
- (void)unconfigure;
- (void)unconfigureAll;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)updateLastKnownValue;
- (void)updateValue:(id)arg1;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)value;
- (bool)value:(id)arg1 differentThan:(id)arg2;

@end
