/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appAdamID;
    NSURL * _appStoreRoomURL;
    NSURL * _authenticationURL;
    NSURL * _certificateURL;
    bool  _developer;
    NSString * _nameForSorting;
    NSString * _providerID;
    bool  _supported;
    NSString * _uniqueID;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSURL *authenticationURL;
@property (nonatomic, copy) NSURL *certificateURL;
@property (getter=isDeveloper, nonatomic) bool developer;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSString *nameForSorting;
@property (nonatomic, copy) NSString *providerID;
@property (getter=isSupported, nonatomic) bool supported;
@property (nonatomic, copy) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)appStoreRoomURL;
- (id)authenticationURL;
- (id)certificateURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeveloper;
- (bool)isEqual:(id)arg1;
- (bool)isSupported;
- (id)nameForSorting;
- (id)providerID;
- (void)setAppAdamID:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setDeveloper:(bool)arg1;
- (void)setNameForSorting:(id)arg1;
- (void)setProviderID:(id)arg1;
- (void)setSupported:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end
