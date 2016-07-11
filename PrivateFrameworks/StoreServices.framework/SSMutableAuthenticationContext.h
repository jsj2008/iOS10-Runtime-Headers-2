/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying, SSXPCCoding>

@property (nonatomic, copy) NSDictionary *HTTPHeaders;
@property (nonatomic, copy) NSString *accountName;
@property (getter=isAccountNameEditable, nonatomic) bool accountNameEditable;
@property long long accountScope;
@property (nonatomic) bool allowsBioAuthentication;
@property (nonatomic) bool allowsBootstrapCellularData;
@property (nonatomic) bool allowsRetry;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) bool canCreateNewAccount;
@property (nonatomic) bool canSetActiveAccount;
@property (nonatomic, copy) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDemoAccount, nonatomic) bool demoAccount;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysOnLockScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialPassword;
@property (nonatomic) bool persistsAcrossDeviceLock;
@property (nonatomic) bool persistsPasswordFallback;
@property (nonatomic, copy) NSString *preferredITunesStoreClient;
@property (nonatomic) long long promptStyle;
@property (nonatomic, copy) NSString *reasonDescription;
@property (nonatomic, copy) NSDictionary *requestParameters;
@property (nonatomic, retain) NSNumber *requiredUniqueIdentifier;
@property (nonatomic) bool shouldCreateNewSession;
@property (nonatomic) bool shouldFollowAccountButtons;
@property (nonatomic) bool shouldIgnoreProtocol;
@property (nonatomic) bool shouldSuppressDialogs;
@property (nonatomic, copy) NSDictionary *signupRequestParameters;
@property (readonly) Class superclass;
@property (nonatomic) long long tokenType;
@property (nonatomic, copy) NSArray *userAgentComponents;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(bool)arg1;
- (void)setAccountScope:(long long)arg1;
- (void)setAllowsBioAuthentication:(bool)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setAllowsRetry:(bool)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setCanCreateNewAccount:(bool)arg1;
- (void)setCanSetActiveAccount:(bool)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(bool)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setPersistsAcrossDeviceLock:(bool)arg1;
- (void)setPersistsPasswordFallback:(bool)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(long long)arg1;
- (void)setReasonDescription:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldCreateNewSession:(bool)arg1;
- (void)setShouldFollowAccountButtons:(bool)arg1;
- (void)setShouldIgnoreProtocol:(bool)arg1;
- (void)setShouldSuppressDialogs:(bool)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(long long)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesWithAccount:(id)arg1;

@end
