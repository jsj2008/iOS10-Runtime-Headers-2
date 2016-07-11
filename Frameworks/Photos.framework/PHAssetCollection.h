/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCollection : PHCollection <PUDisplayAssetCollection, PXDisplayAssetCollection> {
    unsigned long long  _approximateCount;
    CLLocation * _approximateLocation;
    unsigned long long  _approximatePhotosCount;
    unsigned long long  _approximateVideosCount;
    long long  _assetCollectionSubtype;
    long long  _assetCollectionType;
    NSArray * _assetOids;
    NSArray * _assets;
    bool  _canContributeToCloudSharedAlbum;
    bool  _canShowCloudComments;
    NSString * _cloudGUID;
    NSDate * _endDate;
    NSURL * _groupURL;
    bool  _hasUnseenContentBoolValue;
    NSString * _importSessionID;
    bool  _isCameraRoll;
    bool  _isCloudSharedAlbum;
    bool  _isLibrary;
    bool  _isMultipleContributorCloudSharedAlbum;
    bool  _isOwnedCloudSharedAlbum;
    bool  _isPanoramasCollection;
    bool  _isPendingPhotoStreamAlbum;
    bool  _isPhotoStreamCollection;
    bool  _isSmartCollection;
    bool  _isStandInCollection;
    bool  _isWallpaperCollection;
    NSArray * _localizedLocationNames;
    NSString * _localizedTitle;
    int  _pendingItemsCount;
    int  _pendingItemsType;
    int  _plAlbumKind;
    PHQuery * _query;
    bool  _shouldDeleteWhenEmpty;
    id /* block */  _sortingComparator;
    NSDate * _startDate;
    NSString * _title;
    NSString * _titleFontName;
    NSString * _transientIdentifier;
    NSString * _transientSubtitle;
}

@property (getter=_canShowCloudComments, setter=_setCanShowCloudComments:, nonatomic) bool _canShowCloudComments;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) CLLocation *approximateLocation;
@property (nonatomic, readonly) unsigned long long approximatePhotosCount;
@property (nonatomic, readonly) unsigned long long approximateVideosCount;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly) NSArray *assetOids;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) bool canContainCustomKeyAssets;
@property (nonatomic, readonly) bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDateComponents *endDateComponents;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) NSURL *groupURL;
@property (nonatomic, readonly) bool hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *importSessionID;
@property (nonatomic, readonly) bool isCameraRoll;
@property (nonatomic, readonly) bool isCloudSharedAlbum;
@property (nonatomic, readonly) bool isLastImportedAlbum;
@property (nonatomic, readonly) bool isLibrary;
@property (nonatomic, readonly) bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) bool isPanoramasCollection;
@property (nonatomic, readonly) bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) bool isPhotoStreamCollection;
@property (nonatomic, readonly) bool isSmartCollection;
@property (nonatomic, readonly) bool isStandInCollection;
@property (nonatomic, readonly) bool isTrashBin;
@property (nonatomic, readonly) bool isWallpaperCollection;
@property (nonatomic, readonly) bool keyAssetsAtEnd;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) int pendingItemsCount;
@property (nonatomic, readonly) int pendingItemsType;
@property (nonatomic, readonly) int plAlbumKind;
@property (nonatomic, readonly) bool px_supportsFastCuration;
@property (nonatomic, readonly) PHQuery *query;
@property (nonatomic, readonly) bool shouldDeleteWhenEmpty;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDateComponents *startDateComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long titleCategory;
@property (nonatomic, readonly) NSString *titleFontName;
@property (nonatomic, readonly) unsigned long long titleFontNameHash;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) NSString *transientSubtitle;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)corePropertiesToFetch;
+ (id)defaultTitleFontNames;
+ (id)descriptionOfTitleCategory:(long long)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)fetchUserLibraryAlbumWithOptions:(id)arg1;
+ (id)graphOptionsForTransientAssetCollection:(id)arg1 needsCompleteMomentsInfo:(bool)arg2;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 includeTrash:(bool)arg2;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (long long)titleCategoryForTitleFontName:(id)arg1;
+ (id)titleFontNameForTitleCategory:(long long)arg1;
+ (unsigned long long)titleFontNameHashFromDate:(id)arg1;
+ (unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2;
+ (unsigned long long)titleFontNameHashFromString:(id)arg1;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (bool)_canShowCloudComments;
- (void)_setCanShowCloudComments:(bool)arg1;
- (unsigned long long)approximateCount;
- (id)approximateLocation;
- (unsigned long long)approximatePhotosCount;
- (unsigned long long)approximateVideosCount;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)assetOids;
- (id)assets;
- (bool)canContainAssets;
- (bool)canContainCustomKeyAssets;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(long long)arg8;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCameraRoll;
- (bool)isCloudSharedAlbum;
- (bool)isLastImportedAlbum;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasCollection;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamCollection;
- (bool)isSmartCollection;
- (bool)isStandInCollection;
- (bool)isTrashBin;
- (bool)isWallpaperCollection;
- (bool)keyAssetsAtEnd;
- (id)localizedLocationNames;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (int)plAlbumKind;
- (id)pl_assetContainer;
- (bool)pl_isWallpaperAlbum;
- (id)query;
- (bool)shouldDeleteWhenEmpty;
- (id /* block */)sortingComparator;
- (id)startDate;
- (id)title;
- (long long)titleCategory;
- (id)titleFontName;
- (unsigned long long)titleFontNameHash;
- (id)transientIdentifier;
- (id)transientSubtitle;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)_getLocation;
- (id)endDateComponents;
- (id)localEndDate;
- (id)localStartDate;
- (id)startDateComponents;
- (id)universalEndDate;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)px_supportsFastCuration;

@end
