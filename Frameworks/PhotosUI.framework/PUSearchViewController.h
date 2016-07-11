/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchViewController : UIViewController <PUSearchResultsDataSourceChangeObserver, PUSuggestedSearchResultsDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate> {
    id /* block */  __runImmediatelyAfterViewDidAppear;
    PHCachingImageManager * _cachingImageManager;
    UIBarButtonItem * _cancelButton;
    UIView * _cellSelectedBackgroundView;
    <UITableViewDataSource><UITableViewDelegate> * _dataSource;
    bool  _debug_showMatchScores;
    bool  _inCustomTransition;
    UIView * _recentHeaderView;
    UISearchBar * _searchBar;
    PSIDatabase * _searchIndex;
    PUSearchResultsDataSource * _searchResultsDataSource;
    PUPingTimer * _searchResultsPingTimer;
    UITableView * _searchResultsTableView;
    UITableView * _searchSuggestionsTableView;
    NSString * _searchText;
    NSString * _selectedDisplayTitle;
    bool  _shouldShowKeyboard;
    PUSuggestedSearchResultsDataSource * _suggestedSearchResultsDataSource;
    PUPingTimer * _suggestedSearchResultsPingTimer;
}

@property (setter=_setRunImmediatelyAfterViewDidAppear:, nonatomic, copy) id /* block */ _runImmediatelyAfterViewDidAppear;
@property (nonatomic, retain) PHCachingImageManager *cachingImageManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInCustomTransition, nonatomic) bool inCustomTransition;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) NSString *searchText;
@property (setter=_setSelectedDisplayTitle:, nonatomic, retain) NSString *selectedDisplayTitle;
@property (readonly) Class superclass;

+ (id)gridViewControllerSpec;
+ (id)newSearchBar;
+ (id)newSearchViewControllerWithLastYearPhotos;
+ (id)pushTransition;

- (void).cxx_destruct;
- (void)_DEBUG_rebuildSearchIndex:(id)arg1;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexAPath:(id)arg3;
- (void)_configureTableView:(id)arg1;
- (bool)_isSuggestionsSection:(unsigned long long)arg1;
- (void)_mergeSearchResults;
- (void)_mergeSuggestedSearchResultsAnimated:(bool)arg1;
- (void)_navigateToLastYearPhotoSearchWithoutAnimation;
- (unsigned long long)_numberOfTableViewSectionsOutSuggestionsSection:(unsigned long long*)arg1 outRecentsSection:(unsigned long long*)arg2;
- (void)_pingTimerFire:(id)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_pushGridForAlbumWithUUID:(id)arg1;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 additionalUUIDs:(id)arg2 title:(id)arg3 animated:(bool)arg4;
- (void)_pushViewForMemoryWithUUID:(id)arg1;
- (void)_resetPreheating;
- (double)_rowHeightForCurrentFont;
- (id /* block */)_runImmediatelyAfterViewDidAppear;
- (void)_scheduleUpdateTableFooterView;
- (void)_searchFieldTextDidChange:(id)arg1;
- (id)_searchResultsTableView;
- (void)_selectSearchResultAtIndexPath:(id)arg1;
- (void)_selectSuggestedSearchAtIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_separatorInsetsForTableView:(id)arg1;
- (void)_setCurrentTableViewDataSource:(id)arg1;
- (void)_setRunImmediatelyAfterViewDidAppear:(id /* block */)arg1;
- (void)_setSearchText:(id)arg1;
- (void)_setSelectedDisplayTitle:(id)arg1;
- (id)_thumbnailImageRequestOptions;
- (void)_updateForSearchTextDidChangeWithoutAnimation;
- (void)_updateNavigationBar;
- (void)_updateSearchWithText:(id)arg1;
- (void)_updateTableFooterViewWithProgress:(unsigned long long)arg1;
- (id)cachingImageManager;
- (void)cancelActiveSearches;
- (void)cancelButtonTapped:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)init;
- (bool)isInCustomTransition;
- (id)newSearchResultsControllerWithSpec:(id)arg1 searchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 title:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pu_debugRows;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchBar;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResultsValue:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)searchText;
- (id)selectedDisplayTitle;
- (void)setCachingImageManager:(id)arg1;
- (void)setInCustomTransition:(bool)arg1;
- (void)setSearchText:(id)arg1;
- (void)suggestedSearchResultsDataSourceHasPendingChanges:(id)arg1;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)thumbnailAssetsForIndexPaths:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
