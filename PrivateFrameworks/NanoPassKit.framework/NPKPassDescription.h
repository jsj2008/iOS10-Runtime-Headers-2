/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassDescription : NSObject <NSCopying, NSSecureCoding> {
    PKColor * _backgroundColor;
    PKImage * _backgroundImage;
    NSData * _backgroundImageEncoded;
    bool  _cobranded;
    NSData * _completeHash;
    bool  _deletePending;
    NSSet * _devicePaymentApplications;
    PKPaymentApplication * _devicePrimaryPaymentApplication;
    long long  _effectivePaymentApplicationState;
    PKColor * _foregroundColor;
    NSNumber * _groupID;
    bool  _hasStoredValue;
    bool  _hasUserSelectablePaymentApplications;
    NSDate * _ingestionDate;
    PKColor * _labelColor;
    PKImage * _logoImage;
    NSData * _logoImageEncoded;
    NSString * _logoText;
    NSData * _manifestHash;
    PKNFCPayload * _nfcPayload;
    NSString * _passTypeIdentifier;
    PKPaymentApplication * _preferredPaymentApplication;
    bool  _privateLabel;
    NSDate * _relevantDate;
    unsigned long long  _settings;
    long long  _style;
    NSString * _uniqueID;
}

@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) PKImage *backgroundImage;
@property (nonatomic, retain) NSData *backgroundImageEncoded;
@property (getter=isCobranded, nonatomic) bool cobranded;
@property (nonatomic, retain) NSData *completeHash;
@property (nonatomic) bool deletePending;
@property (nonatomic, retain) NSSet *devicePaymentApplications;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic) long long effectivePaymentApplicationState;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic) bool hasStoredValue;
@property (nonatomic) bool hasUserSelectablePaymentApplications;
@property (nonatomic, retain) NSDate *ingestionDate;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, retain) PKImage *logoImage;
@property (nonatomic, retain) NSData *logoImageEncoded;
@property (nonatomic, retain) NSString *logoText;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) PKNFCPayload *nfcPayload;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) PKPaymentApplication *preferredPaymentApplication;
@property (getter=isPrivateLabel, nonatomic) bool privateLabel;
@property (nonatomic, retain) NSDate *relevantDate;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)isCachingEnabled;
+ (void)setCachingEnabled:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundImageEncoded;
- (id)completeHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deletePending;
- (id)description;
- (id)devicePaymentApplications;
- (id)devicePrimaryPaymentApplication;
- (long long)effectivePaymentApplicationState;
- (id)encodeAsData:(id)arg1;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (id)groupID;
- (bool)hasStoredValue;
- (bool)hasUserSelectablePaymentApplications;
- (unsigned long long)hash;
- (id)ingestionDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;
- (bool)isCobranded;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateLabel;
- (id)labelColor;
- (id)logoImage;
- (id)logoImageEncoded;
- (id)logoText;
- (id)manifestHash;
- (id)nfcPayload;
- (id)passTypeIdentifier;
- (id)preferredPaymentApplication;
- (id)relevantDate;
- (id)safeUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageEncoded:(id)arg1;
- (void)setCobranded:(bool)arg1;
- (void)setCompleteHash:(id)arg1;
- (void)setDeletePending:(bool)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setEffectivePaymentApplicationState:(long long)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasStoredValue:(bool)arg1;
- (void)setHasUserSelectablePaymentApplications:(bool)arg1;
- (void)setIngestionDate:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setLogoImageEncoded:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setNfcPayload:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPreferredPaymentApplication:(id)arg1;
- (void)setPrivateLabel:(bool)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setSettings:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUniqueID:(id)arg1;
- (unsigned long long)settings;
- (long long)style;
- (bool)supportsInAppPaymentOnNetworks:(id)arg1;
- (bool)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
- (id)uniqueID;

@end
