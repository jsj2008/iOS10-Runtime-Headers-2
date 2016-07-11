/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate> {
    NSString * _emptyPlaceholderText;
    PUSearchGridDataSource * _searchGridDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSearchGridDataSource *searchGridDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadVisibleSectionHeadersAnimated:(bool)arg1;
- (bool)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (id)emptyPlaceholderText;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)searchGridDataSource;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEmptyPlaceholderText:(id)arg1;
- (void)setSearchGridDataSource:(id)arg1;
- (void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4;
- (bool)showSectionHeaders;
- (void)viewDidLoad;

@end
