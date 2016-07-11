/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsContext : PXObservable <PXChangeObserver, PXHierarchicalContext, PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver> {
    PHFetchResult * _assetCollections;
    NSDictionary * _assetsByCollection;
    PXDisplayTitleInfo * _displayTitleInfo;
    PHFetchResult * _keyAssetsFetchResult;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    PXPhotosDetailsContext * _parentContext;
    PHFetchResult * _people;
    PXPhotosDataSource * _photosDataSource;
    bool  _shouldShowMovieHeader;
    NSString * _titleFontName;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly, copy) NSDictionary *assetsByCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) PXPhotosDetailsContext *parentContext;
@property (nonatomic, readonly) PHFetchResult *people;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) bool shouldShowHeaderTitle;
@property (nonatomic, readonly) bool shouldShowMovieHeader;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *titleFontName;

- (void).cxx_destruct;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (id)assetCollections;
- (id)assetsByCollection;
- (id)displayTitleInfo;
- (id)init;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)keyAssetsFetchResult;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)parentContext;
- (id)people;
- (void)performChanges:(id /* block */)arg1;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)setAssetCollections:(id)arg1;
- (void)setAssetsByCollection:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setShouldShowMovieHeader:(bool)arg1;
- (void)setTitleFontName:(id)arg1;
- (bool)shouldShowHeaderTitle;
- (bool)shouldShowMovieHeader;
- (id)titleFontName;

@end
