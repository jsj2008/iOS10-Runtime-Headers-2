/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMovie : NSObject <MemoryOwner> {
    bool  _allowNonPHMemoryForUnitTesting;
    MiroAutoEditor * _autoEditor;
    <MiroMovieDelegate> * _delegate;
    MiroMemory * _memory;
    NSString * _outputString;
    AVPlayerItem * _playerItem;
}

@property (nonatomic) bool allowNonPHMemoryForUnitTesting;
@property (retain) MiroAutoEditor *autoEditor;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *defaultAssets;
@property (nonatomic) <MiroMovieDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCompelling;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, retain) NSString *outputString;
@property (retain) AVPlayerItem *playerItem;
@property (nonatomic, readonly) UIViewController *playerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getMiroTapToRadarFilePath;
- (id)_tapToRadarBlueprint;
- (id)_tapToRadarDebug;
- (id)_tapToRadarMediaanalysis_db;
- (id)_tapToRadarMediaanalysis_db_shm;
- (id)_tapToRadarMediaanalysis_db_wal;
- (id)_tapToRadarMemory;
- (id)_tapToRadarPicklist;
- (id)_tapToRadarRanges;
- (bool)allowNonPHMemoryForUnitTesting;
- (id)autoEditor;
- (void)cancelPregenerateMovie;
- (id)collection;
- (id)createPHMemory;
- (id)defaultAssets;
- (id)delegate;
- (id)diagnosticItemProvider;
- (id)exportSessionWithPresetName:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (bool)isCompelling;
- (id)memory;
- (id)outputString;
- (id)playerItem;
- (id)playerViewController;
- (void)pregenerateMovieWithCompletionHandler:(id /* block */)arg1;
- (void)setAllowNonPHMemoryForUnitTesting:(bool)arg1;
- (void)setAutoEditor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setOutputString:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)tapToRadar;

@end
