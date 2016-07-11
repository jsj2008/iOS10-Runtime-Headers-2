/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainer : NSObject <NSSecureCoding> {
    NSDictionary * _bundleIDVersions;
    NSSet * _bundleIDs;
    NSString * _containerID;
    unsigned int  _currentStatus;
    NSData * _dataRepresentation;
    NSSet * _documentsTypes;
    NSSet * _exportedTypes;
    NSNumber * _iconGeneratorVersion;
    NSDictionary * _iconMetadata;
    NSDictionary * _iconURLs;
    NSData * _imageSandboxExtension;
    NSSet * _importedTypes;
    bool  _isCloudSyncTCCDisabled;
    NSNumber * _isDocumentScopePublicAsNumber;
    bool  _isInCloudDocsZone;
    bool  _isInInitialState;
    bool  _isObservingCurrentStatus;
    bool  _isObservingLastServerUpdate;
    bool  _isObservingOverQuota;
    bool  _isOverQuota;
    NSDate * _lastServerUpdate;
    NSString * _localizedName;
    NSPurgeableData * _purgeableDataRepresentation;
    bool  _shouldUsePurgeableData;
    NSString * _supportedFolderLevels;
}

@property (nonatomic, readonly, copy) NSSet *bundleIdentifiers;
@property (nonatomic, readonly) NSSet *documentsTypes;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSSet *exportedTypes;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *importedTypes;
@property (nonatomic) bool isCloudSyncTCCDisabled;
@property (nonatomic, readonly) bool isDocumentScopePublic;
@property (nonatomic) bool isInCloudDocsZone;
@property (nonatomic) bool isInInitialState;
@property (nonatomic, readonly) NSString *localizedName;
@property (getter=isOverQuota, nonatomic) bool overQuota;
@property (getter=isOverQuota, nonatomic, readonly) bool overQuota;
@property (nonatomic, readonly) NSString *supportedFolderLevels;
@property (nonatomic, readonly) NSURL *trashURL;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)_URLForPlistOfContainerID:(id)arg1;
+ (id)_bundleIDVersionsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_bundleIDsWithProperties:(id)arg1;
+ (id)_containerRepositoryURLForContainerID:(id)arg1;
+ (id)_documentsTypesWithProperties:(id)arg1;
+ (id)_exportedTypesWithProperties:(id)arg1;
+ (void)_generateiOSIconsForContainerID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 generatedIcons:(id)arg3;
+ (id)_iconGeneratorVersionWithProperties:(id)arg1;
+ (id)_iconMetadataWithProperties:(id)arg1;
+ (id)_iconURLsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_importedTypesWithProperties:(id)arg1;
+ (id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 preferredLanguages:(id)arg3;
+ (id)_pathForIconName:(id)arg1 containerID:(id)arg2;
+ (id)_sanitizedContainerFallbackNameForContainerID:(id)arg1;
+ (id)_supportedFolderLevelsWithProperties:(id)arg1;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)bundleIdentifiersEnumeratorForProperties:(id)arg1;
+ (id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3;
+ (bool)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2;
+ (id)classesForDecoding;
+ (id)containerForContainerID:(id)arg1;
+ (id)containerForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)containerIDFromSharedContainerID:(id)arg1;
+ (id)containerIDFromSharedMangledID:(id)arg1;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(bool)arg2 error:(id*)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id*)arg2;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id*)arg2;
+ (void)forceRefreshAllContainersWithCompletion:(id /* block */)arg1;
+ (void)forceRefreshContainers:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (bool)isDocumentScopePublicWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)ownerNameFromSharedMangledID:(id)arg1;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)privateMangledContainerID:(id)arg1;
+ (id)privateUnmangledContainerID:(id)arg1;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4;
+ (id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2;
+ (bool)supportsSecureCoding;
+ (void)unregisterCurrentProcessAsPriorityHint;
+ (bool)validateContainerID:(id)arg1;
+ (bool)validateOwnerName:(id)arg1;
+ (bool)validateSharedMangledID:(id)arg1;
+ (bool)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;

- (void).cxx_destruct;
- (id)_containerRepositoryURL;
- (id)_imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 isiOSIcon:(bool*)arg3 shouldTransformToAppIcon:(bool*)arg4;
- (id)_mangledID;
- (id)_pathForIconName:(id)arg1;
- (id)_pathForPlist;
- (void)_performWhileAccessingSecurityScopedContainer:(id /* block */)arg1;
- (void)_replaceDataRepresentationWithData:(id)arg1;
- (bool)_updateMetadataOnDiskWithProperties:(id)arg1;
- (void)accessDataRepresentationInBlock:(id /* block */)arg1;
- (void)accessPropertiesInBlock:(id /* block */)arg1;
- (id)bundleIDVersions;
- (id)bundleIdentifiers;
- (id)computedProperties;
- (bool)containsExcludedDocumentsOnTheFS;
- (id)copyDataRepresentation;
- (unsigned int)currentStatus;
- (bool)deleteAllContentsOnClientAndServer:(id*)arg1;
- (id)description;
- (id)documentsTypes;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)exportedTypes;
- (void)forceRefreshWithCompletion:(id /* block */)arg1;
- (bool)hasIconWithName:(id)arg1;
- (id)iconGeneratorVersion;
- (id)iconMetadata;
- (id)iconURLs;
- (id)identifier;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 isiOSIcon:(bool*)arg3;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 shouldTransformToAppIcon:(bool*)arg3;
- (id)imageRepresentationsAvailable;
- (id)importedTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 dataRepresentation:(id)arg2;
- (id)initWithDocsOrDesktopContainerID:(id)arg1;
- (bool)isCloudSyncTCCDisabled;
- (bool)isDocumentScopePublic;
- (bool)isInCloudDocsZone;
- (bool)isInInitialState;
- (bool)isOverQuota;
- (id)lastServerUpdate;
- (id)localizedName;
- (id)localizedNameWithPreferredLanguages:(id)arg1;
- (bool)registerCurrentProcessAsPriorityHintWithError:(id*)arg1;
- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setIsCloudSyncTCCDisabled:(bool)arg1;
- (void)setIsInCloudDocsZone:(bool)arg1;
- (void)setIsInInitialState:(bool)arg1;
- (void)setLastServerUpdate:(id)arg1;
- (void)setOverQuota:(bool)arg1;
- (id)shortDescription;
- (id)supportedFolderLevels;
- (id)trashRestoreStringForURL:(id)arg1;
- (id)trashURL;
- (bool)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3;
- (bool)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2;
- (id)url;
- (id)versionNumberForBundleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (unsigned int)currentStatus;
- (bool)isOverQuota;
- (id)lastServerUpdate;

@end
