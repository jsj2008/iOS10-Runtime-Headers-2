/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    NSMutableSet * _additionalQueryFilterPredicates;
    NSNumber * _parentFolderPersistentID;
    unsigned long long  _playlistsConfigurationOptions;
    NSString * _playlistsFilter;
    bool  _playlistsFilterIsCuratorID;
}

@property (nonatomic, readonly, copy) NSSet *additionalQueryFilterPredicates;
@property (nonatomic, retain) NSNumber *parentFolderPersistentID;
@property (nonatomic) unsigned long long playlistsConfigurationOptions;
@property (nonatomic, copy) NSString *playlistsFilter;

+ (void)getDetailViewController:(id*)arg1 playbackContext:(id*)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4;

- (void).cxx_destruct;
- (void)_handleDeletionOfEntityValueProvider:(id)arg1;
- (void)_updatePlaylistsFilterIsCuratorIDStatus;
- (void)addQueryFilterPredicate:(id)arg1;
- (id)additionalQueryFilterPredicates;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (bool)canDeleteEntityValueContext:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (id)folderDetailViewControllerWithEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionOfUnplayableEntityValueContext:(id)arg1 withPlayabilityResult:(unsigned long long)arg2 fromViewController:(id)arg3;
- (id)init;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)loadEntityViewDescriptor;
- (id)parentFolderPersistentID;
- (unsigned long long)playlistsConfigurationOptions;
- (id)playlistsFilter;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)setParentFolderPersistentID:(id)arg1;
- (void)setPlaylistsConfigurationOptions:(unsigned long long)arg1;
- (void)setPlaylistsFilter:(id)arg1;

@end
