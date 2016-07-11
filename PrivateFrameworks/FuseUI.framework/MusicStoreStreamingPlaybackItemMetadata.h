/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasLoadedMediaItem;
    bool  _isLoadingMediaItem;
    NSMutableArray * _mediaItemLoadCompletionHandlers;
    MPStoreItemMetadata * _storeItemMetadata;
    MusicStoreItemMetadataContext * _storeItemMetadataContext;
}

@property (nonatomic, retain) MusicStoreItemMetadataContext *storeItemMetadataContext;

+ (bool)_shouldRespectMusicCellularDataSetting;
+ (bool)_shouldRespectStoreCellularDataSetting;

- (void).cxx_destruct;
- (void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1;
- (id)_storeItemMetadata;
- (void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1;
- (void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (bool)allowsAssetCaching;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (void)dealloc;
- (long long)endpointType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStoreItemMetadataContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)setStoreItemMetadataContext:(id)arg1;
- (bool)shouldReportPlayEventsToStore;
- (bool)showComposer;
- (long long)storeAdamID;
- (id)storeItemMetadataContext;
- (long long)storeSubscriptionAdamID;

@end
