/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditController : NSObject <MiroAutoEditDelegate> {
    MiroMemory * _activeMemory;
    MiroRandomNumberGenerator * _kenBurnsRandomNumberGenerator;
    MiroAutoEditLogger * _logger;
    MovieController * _movieController;
    MiroAutoEditProjectPolish * _polisher;
    Project * _project;
    bool  _shouldBuildMovieController;
    bool  _shouldSkipPolish;
    MiroAutoEdit_TrimController * _trimController;
}

@property (nonatomic, retain) MiroMemory *activeMemory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MiroRandomNumberGenerator *kenBurnsRandomNumberGenerator;
@property (nonatomic, retain) MiroAutoEditLogger *logger;
@property (nonatomic, retain) MovieController *movieController;
@property (nonatomic, retain) MiroAutoEditProjectPolish *polisher;
@property (nonatomic, retain) Project *project;
@property (nonatomic) bool shouldBuildMovieController;
@property (nonatomic) bool shouldSkipPolish;
@property (readonly) Class superclass;
@property (nonatomic, retain) MiroAutoEdit_TrimController *trimController;

+ (id)localImageRequestOptions;
+ (struct CGSize { double x1; double x2; })titleCardAssetSize;

- (void).cxx_destruct;
- (id)_addPhotoAsset:(id)arg1 assetRep:(id)arg2 project:(id)arg3;
- (id)_addProjectPlaceholderWithScenes:(id)arg1 name:(id)arg2 progressHandler:(id /* block */)arg3;
- (bool)_applyBackgroundMusicWithClip:(id)arg1;
- (void)_applySpeedRangesToClip:(id)arg1 asset:(id)arg2 previousClip:(id)arg3;
- (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
- (void)_incrementCountForKey:(id)arg1 inDictionary:(id)arg2;
- (id)_makePolisher;
- (void)_removeSpeedRampFromBeginningOfClip:(id)arg1;
- (void)_removeSpeedRampFromEndOfClip:(id)arg1;
- (void)_updateSelectedRangeOfClip:(id)arg1 withScene:(id)arg2;
- (id)activeMemory;
- (void)applyAutomaticThemeTitleToFirstClip;
- (bool)applyBackgroundMusicWithMediaItem:(id)arg1;
- (bool)applyBackgroundMusicWithSong:(id)arg1;
- (void)applyMusic:(id)arg1;
- (void)autoEditProjectFromMemory:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)autoEditToDuration:(int)arg1;
- (id)clipForAsset:(id)arg1 project:(id)arg2;
- (id)clipSavingQueue;
- (id)jpegURLFromAsset:(id)arg1;
- (id)kenBurnsClipsWithURL:(id)arg1;
- (id)kenBurnsRandomNumberGenerator;
- (id)logger;
- (id)movieController;
- (id)polisher;
- (id)project;
- (void)setActiveMemory:(id)arg1;
- (void)setKenBurnsRandomNumberGenerator:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMovieController:(id)arg1;
- (void)setPolisher:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setShouldBuildMovieController:(bool)arg1;
- (void)setShouldSkipPolish:(bool)arg1;
- (void)setTrimController:(id)arg1;
- (bool)shouldBuildMovieController;
- (bool)shouldSkipPolish;
- (bool)titleIsSupported;
- (id)trimController;

@end
