/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _busUniqueID;
    <CoreRCDeviceDelegate> * _delegate;
    bool  _isLocalDevice;
    CoreRCManager * _manager;
    unsigned long long  _owningClients;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) NSUUID *busUniqueID;
@property (nonatomic, readonly) bool isLocalDevice;
@property (nonatomic, copy) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (unsigned long long)addOwningClient:(id)arg1;
- (id)bus;
- (id)busUniqueID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didAddToBus:(id)arg1;
- (void)didRemoveFromBus:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedPropertyForKey:(id)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBus:(id)arg1 local:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalDevice;
- (id)manager;
- (id)mergeProperties;
- (void)mergePropertiesFromDevice:(id)arg1;
- (void)readyToSend;
- (void)receivedHIDEvent:(id)arg1 fromDevice:(id)arg2;
- (unsigned long long)removeOwningClient:(id)arg1;
- (bool)sendCommand:(unsigned long long)arg1 target:(id)arg2 withDuration:(unsigned long long)arg3 error:(id*)arg4;
- (bool)sendHIDEvent:(id)arg1 error:(id*)arg2;
- (bool)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setManager:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)willAddToBus:(id)arg1;
- (void)willRemoveFromBus:(id)arg1;

@end
