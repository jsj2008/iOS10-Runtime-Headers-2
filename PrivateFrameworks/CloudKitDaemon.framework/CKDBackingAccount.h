/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingAccount : NSObject

@property (nonatomic, readonly) NSString *cloudKitAuthToken;
@property (nonatomic, readonly) bool cloudKitIsEnabled;
@property (nonatomic, readonly) bool cloudPhotosIsEnabled;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) NSString *iCloudAuthToken;
@property (nonatomic, readonly) bool iCloudDriveAllowsCellularAccess;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isFakeAccount;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSString *username;

+ (Class)_platformBackingAccountClass;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (bool)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (id)primaryAccountInStore:(id)arg1;

- (id)_init;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)ckAccount;
- (id)cloudKitAuthToken;
- (bool)cloudKitIsEnabled;
- (bool)cloudPhotosIsEnabled;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthToken;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (id)init;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (id)primaryEmail;
- (id)privateCloudDBURL;
- (id)privateCodeServiceURL;
- (id)privateDeviceServiceURL;
- (id)privateShareServiceURL;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serverPreferredPushEnvironment;
- (void)updateAccountProperiesInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end
