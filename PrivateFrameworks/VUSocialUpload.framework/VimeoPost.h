/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@interface VimeoPost : NSObject {
    unsigned long long  _accessType;
    ACAccount * _account;
    ALAsset * _asset;
    NSData * _assetData;
    NSURL * _assetURL;
    ALAssetsLibrary * _assetsLibrary;
    NSURL * _baseURL;
    bool  _canUploadOverCellular;
    bool  _continuingUpload;
    unsigned long long  _countOfBytesStored;
    VUDataReader * _dataReader;
    <VimeoPostDelegate> * _delegate;
    NSURL * _exportedVideoURL;
    NSString * _postDescription;
    long long  _privacySettings;
    int  _retryCount;
    NSArray * _tags;
    NSString * _ticketID;
    NSString * _title;
    NSURL * _uploadEndpoint;
    int  _uploadState;
    NSString * _videoID;
    long long  _videoSize;
}

@property (nonatomic) unsigned long long accessType;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ALAsset *asset;
@property (nonatomic, retain) NSData *assetData;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic, retain) VUDataReader *dataReader;
@property (nonatomic) <VimeoPostDelegate> *delegate;
@property (nonatomic, retain) NSURL *exportedVideoURL;
@property (nonatomic, retain) NSString *postDescription;
@property (nonatomic) long long privacySettings;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long videoSize;

+ (bool)_isUsingCellular;
+ (id)dictionaryWithResponseData:(id)arg1 error:(id*)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_checkQuota;
- (void)_cleanup;
- (void)_commit;
- (void)_getTicket;
- (void)_setDescription;
- (void)_setPrivacy;
- (void)_setTags;
- (void)_setTitle;
- (id)_tags;
- (void)_uploadData;
- (void)_verify;
- (void)_warningWithCode:(int)arg1;
- (unsigned long long)accessType;
- (id)account;
- (id)asset;
- (id)assetData;
- (id)assetURL;
- (id)assetsLibrary;
- (id)dataReader;
- (id)delegate;
- (id)exportedVideoURL;
- (void)failWithError:(id)arg1;
- (void)failWithErrorCode:(int)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)postDescription;
- (unsigned long long)postSize;
- (long long)privacySettings;
- (id)serializedDictionary;
- (void)setAccessType:(unsigned long long)arg1;
- (void)setAccount:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetData:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setDataReader:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportedVideoURL:(id)arg1;
- (void)setPostDescription:(id)arg1;
- (void)setPrivacySettings:(long long)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoSize:(long long)arg1;
- (id)tags;
- (id)title;
- (bool)uploadToAccount:(id)arg1 error:(id*)arg2;
- (long long)videoSize;

@end
