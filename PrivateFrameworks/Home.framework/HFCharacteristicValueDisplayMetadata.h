/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueDisplayMetadata : NSObject {
    HFCharacteristicValueDisplayError * _error;
    long long  _primaryState;
    long long  _priority;
    NSString * _sortKey;
    long long  _transitioningPrimaryState;
}

@property (nonatomic, retain) HFCharacteristicValueDisplayError *error;
@property (nonatomic) long long primaryState;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSString *sortKey;
@property (nonatomic) long long transitioningPrimaryState;

+ (id)displayMetadataForServiceType:(id)arg1 characteristicReadResponse:(id)arg2;

- (void).cxx_destruct;
- (id)error;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;
- (long long)primaryState;
- (long long)priority;
- (void)setError:(id)arg1;
- (void)setPrimaryState:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSortKey:(id)arg1;
- (void)setTransitioningPrimaryState:(long long)arg1;
- (id)sortKey;
- (long long)transitioningPrimaryState;

@end
