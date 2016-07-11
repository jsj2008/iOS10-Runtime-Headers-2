/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHRelationshipChangeRequestHelper * _curatedAssetsHelper;
    PHChangeRequestHelper * _helper;
    PHRelationshipChangeRequestHelper * _keyAssetHelper;
    NSDictionary * _movieAssetState;
    PHRelationshipChangeRequestHelper * _movieCuratedAssetsHelper;
    PHRelationshipChangeRequestHelper * _representativeAssetsHelper;
}

@property (nonatomic) long long category;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *curatedAssetsHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (nonatomic, retain) NSDate *lastMoviePlayedDate;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSDictionary *movieAssetState;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *movieCuratedAssetsHelper;
@property (nonatomic, retain) NSData *movieData;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic, retain) NSData *photosGraphData;
@property (nonatomic) long long photosGraphVersion;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMemory;
@property (getter=isRejected, nonatomic) bool rejected;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (getter=isUserCreated, nonatomic) bool userCreated;
@property (nonatomic, readonly) NSString *uuid;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(bool)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5;
+ (id)changeRequestForMemory:(id)arg1;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(long long)arg4 assets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(long long)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(long long)arg4 subcategory:(long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8;
+ (void)deleteMemories:(id)arg1;
+ (id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1;
+ (id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1;
+ (id)preferredAttributesForMemoryCreationFromPeople:(id)arg1;
+ (id)validateMemoryTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_mutableCuratedAssetObjectIDsAndUUIDs;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (id)_mutableRepresentativeAssetObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (bool)canGenerateUUIDLocally;
- (long long)category;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)creationDate;
- (id)curatedAssetsHelper;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitled:(bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isFavorite;
- (bool)isMutated;
- (bool)isNew;
- (bool)isPending;
- (bool)isRejected;
- (bool)isUserCreated;
- (id)keyAssetHelper;
- (id)lastMoviePlayedDate;
- (id)lastViewedDate;
- (id)managedEntityName;
- (id)movieAssetState;
- (id)movieCuratedAssetsHelper;
- (id)movieData;
- (id)mutations;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)photosGraphData;
- (long long)photosGraphVersion;
- (id)placeholderForCreatedMemory;
- (id)representativeAssetsHelper;
- (double)score;
- (void)setCategory:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setLastMoviePlayedDate:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setMovieCuratedAssets:(id)arg1;
- (void)setMovieData:(id)arg1;
- (void)setMovieStateData:(id)arg1 forAsset:(id)arg2;
- (void)setPending:(bool)arg1;
- (void)setPhotosGraphData:(id)arg1;
- (void)setPhotosGraphVersion:(long long)arg1;
- (void)setQueryHintObject:(id)arg1;
- (void)setQueryHintObjects:(id)arg1;
- (void)setRejected:(bool)arg1;
- (void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3;
- (void)setScore:(double)arg1;
- (void)setSubcategory:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserCreated:(bool)arg1;
- (long long)subcategory;
- (id)subtitle;
- (id)title;
- (id)uuid;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_creationRequestForAssetCollection:(id)arg1;
+ (id)px_creationRequestForAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 people:(id)arg3;

@end
