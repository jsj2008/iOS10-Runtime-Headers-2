/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingKey : NSObject <NSSecureCoding> {
    NSData * _data;
}

@property (nonatomic, readonly, copy) NSData *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingKeyData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;

@end
