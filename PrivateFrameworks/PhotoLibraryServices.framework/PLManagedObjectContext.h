/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObjectContext : NSManagedObjectContext {
    bool  __hiddenFaceStateChanged;
    NSMutableArray * _albumUuidForCloudDeletion;
    NSMutableSet * _avalancheUUIDsForUpdate;
    int  _changeSource;
    PLDelayedFiledSystemDeletions * _delayedDeletions;
    PLDelayedSaveActions * _delayedSaveActions;
    bool  _hasMetadataChanges;
    bool  _isBackingALAssetsLibrary;
    bool  _isConnectedToChangeHub;
    bool  _isInitializingSingletons;
    bool  _isLoadingPhotoLibrary;
    bool  _isObservingChangesForPTPNotificationDelegate;
    NSMutableArray * _memoryUUIDsForCloudDeletion;
    PLMergePolicy * _mergePolicy;
    bool  _mergingChanges;
    PLPhotoLibrary * _photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> * _ptpNotificationDelegate;
    bool  _regenerateVideoThumbnails;
    bool  _savingDuringMerge;
    bool  _syncChangeMarker;
    NSMutableDictionary * _updatedObjectsAttributes;
    NSMutableDictionary * _updatedObjectsRelationships;
    NSMutableArray * _uuidForCloudDeletion;
    NSMutableDictionary * _uuidsForCloudDeletion;
    NSObject<OS_xpc_object> * changeHubConnection;
}

@property (setter=_setHiddenFaceStateChanged:, nonatomic) bool _hiddenFaceStateChanged;
@property (nonatomic) NSObject<OS_xpc_object> *changeHubConnection;
@property (nonatomic) int changeSource;
@property (nonatomic, retain) PLDelayedFiledSystemDeletions *delayedDeletions;
@property (nonatomic, readonly, retain) PLDelayedSaveActions *delayedSaveActions;
@property (nonatomic) bool hasMetadataChanges;
@property (nonatomic) bool isBackingALAssetsLibrary;
@property (nonatomic) bool isInitializingSingletons;
@property (nonatomic) bool isLoadingPhotoLibrary;
@property (nonatomic, readonly) bool isUserInterfaceContext;
@property (nonatomic, readonly) bool mergingChanges;
@property (nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) <PLManagedObjectContextPTPNotificationDelegate> *ptpNotificationDelegate;
@property (nonatomic) bool regenerateVideoThumbnails;
@property (nonatomic, readonly) bool savingDuringMerge;

+ (void)__prepareEntityPropertyLookups;
+ (id)_attributeNamesByIndexByEntityNames;
+ (id)_changeNotificationKeys;
+ (void)_configurePersistentStoreCoordinator:(id)arg1;
+ (void)_configureXPCPersistentStoreCoordinator:(id)arg1;
+ (void)_getStoreURL:(id*)arg1 options:(id*)arg2 enableNotifications:(bool)arg3;
+ (void)_getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3 enableNotifications:(bool)arg4;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (bool)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (bool)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(bool)arg4;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (bool)_shouldRequestModelMigratorCreateDatabaseOnRebuildAndRetry;
+ (bool)_shouldUseXPCPhotoLibraryStore;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (bool)assetsLibraryLoggingEnabled;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (bool)canMergeRemoteChanges;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
+ (bool)databaseIsMissing;
+ (id)databasePath;
+ (void)getStoreURL:(id*)arg1;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (void)handleUnknownMergeEvent;
+ (bool)hasAtLeastOneAsset;
+ (bool)hasConfiguredPhotoLibrary;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)moveOldStoreAside;
+ (bool)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (id)sharedPersistentStoreCoordinator;
+ (bool)storeIsOldEnough;

- (void)_contextObjectsDidChange:(id)arg1;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
- (id)_deletionKeyForObjectWithID:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5;
- (bool)_hiddenFaceStateChanged;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_setHiddenFaceStateChanged:(bool)arg1;
- (bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (id)changeHubConnection;
- (int)changeSource;
- (void)connectToChangeHub;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (id)delayedSaveActions;
- (void)disconnectFromChangeHub;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (bool)getAndClearSyncChangeMarker;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (id)globalValueForKey:(id)arg1;
- (bool)hasMetadataChanges;
- (bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 useSharedPersistentStoreCoordinator:(bool)arg2;
- (bool)isBackingALAssetsLibrary;
- (bool)isInitializingSingletons;
- (bool)isLoadingPhotoLibrary;
- (bool)isReadOnly;
- (bool)isUserInterfaceContext;
- (bool)mergingChanges;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (id)ptpNotificationDelegate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordCloudDeletionForObjectWithID:(id)arg1 withCloudUUID:(id)arg2;
- (void)recordHiddenFaceStateChanged;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)recordSyncChangeMarker;
- (void)refreshHiddenFaceStatePersistence;
- (bool)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (bool)save:(id*)arg1;
- (bool)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (void)setChangeSource:(int)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setHasMetadataChanges:(bool)arg1;
- (void)setIsBackingALAssetsLibrary:(bool)arg1;
- (void)setIsInitializingSingletons:(bool)arg1;
- (void)setIsLoadingPhotoLibrary:(bool)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(bool)arg1;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;

@end
