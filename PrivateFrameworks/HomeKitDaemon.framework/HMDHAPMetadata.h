/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadata : NSObject <NSSecureCoding> {
    NSArray * _assistantCharacteristics;
    NSDictionary * _assistantServices;
    NSDictionary * _assistantUnits;
    NSArray * _hapCharacteristics;
    HAPMetadata * _hapMetadata;
    NSArray * _hapProperties;
    NSArray * _hapServices;
    NSArray * _hapSupportsAuthDataTuples;
    NSArray * _hapValueUnits;
    NSArray * _hmAccessoryCategories;
    NSArray * _hmBlacklistedCharacteristics;
    NSArray * _hmBlacklistedServices;
    NSArray * _hmCharacteristicsBlacklistedFromApp;
    NSArray * _hmRequiresDeviceUnlockTuples;
    NSArray * _hmServicesBlacklistedFromApp;
    bool  _incomplete;
    NSNumber * _schemaVersion;
    NSNumber * _version;
}

@property (nonatomic, retain) NSArray *assistantCharacteristics;
@property (nonatomic, retain) NSDictionary *assistantServices;
@property (nonatomic, retain) NSDictionary *assistantUnits;
@property (nonatomic, retain) NSArray *hapCharacteristics;
@property (nonatomic, retain) HAPMetadata *hapMetadata;
@property (nonatomic, retain) NSArray *hapProperties;
@property (nonatomic, retain) NSArray *hapServices;
@property (nonatomic, retain) NSArray *hapSupportsAuthDataTuples;
@property (nonatomic, retain) NSArray *hapValueUnits;
@property (nonatomic, retain) NSArray *hmAccessoryCategories;
@property (nonatomic, retain) NSArray *hmBlacklistedCharacteristics;
@property (nonatomic, retain) NSArray *hmBlacklistedServices;
@property (nonatomic, retain) NSArray *hmCharacteristicsBlacklistedFromApp;
@property (nonatomic, retain) NSArray *hmRequiresDeviceUnlockTuples;
@property (nonatomic, retain) NSArray *hmServicesBlacklistedFromApp;
@property (nonatomic) bool incomplete;
@property (nonatomic, retain) NSNumber *schemaVersion;
@property (nonatomic, retain) NSNumber *version;

+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (id)initWithURL:(id)arg1 error:(id*)arg2;
+ (bool)setSharedInstance:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantCharacteristics;
- (id)assistantServices;
- (id)assistantUnits;
- (void)augmentMissingInformation:(id)arg1;
- (id)categoryForIdentifier:(id)arg1;
- (id)categoryForOther;
- (bool)checkTuples:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3;
- (id)createHAPMetadata:(id)arg1;
- (void)createHMDContainersForHAPMetadata;
- (id)descriptionForCharacteristicType:(id)arg1;
- (id)descriptionForServiceType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateAssistantDictionary;
- (id)generateBlacklistedCharacteristics:(id)arg1;
- (id)generateBlacklistedServices:(id)arg1;
- (id)generateCategoriesDictionary:(id)arg1;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)generateHMDictionary;
- (id)hapCharacteristics;
- (id)hapMetadata;
- (id)hapProperties;
- (id)hapServices;
- (id)hapSupportsAuthDataTuples;
- (id)hapValueUnits;
- (id)hmAccessoryCategories;
- (id)hmBlacklistedCharacteristics;
- (id)hmBlacklistedServices;
- (id)hmCharacteristicsBlacklistedFromApp;
- (id)hmRequiresDeviceUnlockTuples;
- (id)hmServicesBlacklistedFromApp;
- (bool)incomplete;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id*)arg3;
- (bool)isStandardCharacteristicType:(id)arg1;
- (bool)isStandardServiceType:(id)arg1;
- (id)parseAssistantCharacteristics:(id)arg1;
- (bool)parseAssistantMetadata:(id)arg1;
- (id)parseAssistantUnits:(id)arg1;
- (bool)parseBlacklistedServices:(id)arg1 fromApplication:(bool)arg2;
- (bool)parseCategories:(id)arg1;
- (id)parseHAPAssistantServices:(id)arg1;
- (bool)parseHMMetadata:(id)arg1;
- (bool)parseRequiresDeviceUnlockMetadata:(id)arg1;
- (bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;
- (id)schemaVersion;
- (void)setAssistantCharacteristics:(id)arg1;
- (void)setAssistantServices:(id)arg1;
- (void)setAssistantUnits:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapMetadata:(id)arg1;
- (void)setHapProperties:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapSupportsAuthDataTuples:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setHmAccessoryCategories:(id)arg1;
- (void)setHmBlacklistedCharacteristics:(id)arg1;
- (void)setHmBlacklistedServices:(id)arg1;
- (void)setHmCharacteristicsBlacklistedFromApp:(id)arg1;
- (void)setHmRequiresDeviceUnlockTuples:(id)arg1;
- (void)setHmServicesBlacklistedFromApp:(id)arg1;
- (void)setIncomplete:(bool)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldAllowHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (bool)shouldFilterCharacteristicOfType:(id)arg1;
- (bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;
- (bool)shouldFilterServiceOfType:(id)arg1;
- (bool)shouldFilterServiceOfTypeFromApp:(id)arg1;
- (bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;
- (id)version;

@end
