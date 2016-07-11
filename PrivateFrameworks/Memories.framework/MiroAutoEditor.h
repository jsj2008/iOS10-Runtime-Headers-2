/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditor : NSObject {
    bool  _didJustSubmitAJob;
    float  _downloadProgress;
    MiroMemory * _memory;
    MovieController * _movieController;
    id  _observer;
    NSOperationQueue * _operationQueue;
    float  _progress;
    Project * _project;
    long long  _remainingAssetsToDownload;
    bool  _shouldBuildMovieController;
    bool  _topLevelCancel;
}

@property bool didJustSubmitAJob;
@property float downloadProgress;
@property (nonatomic, retain) MiroMemory *memory;
@property (retain) MovieController *movieController;
@property (nonatomic, retain) id observer;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) float progress;
@property (retain) Project *project;
@property long long remainingAssetsToDownload;
@property (retain) <MiroSequence> *sequence;
@property bool shouldBuildMovieController;
@property bool topLevelCancel;

- (void).cxx_destruct;
- (void)_autoEditWithCompletionHandler:(id /* block */)arg1;
- (void)_cancel;
- (id)_printDataForAssetAsString:(id)arg1 andPickInfo:(id)arg2;
- (id)_returnTextDebugAsString;
- (id)assetMediaType:(id)arg1 itemStart:(double)arg2 itemDuration:(double)arg3;
- (void)cancelAutoEdit;
- (void)dealloc;
- (bool)didJustSubmitAJob;
- (float)downloadProgress;
- (id)durationsForAsset:(id)arg1 itemDuration:(double)arg2;
- (id)initWithMemory:(id)arg1 shouldBuildMovieController:(bool)arg2;
- (bool)isBusy;
- (id)memory;
- (id)movieController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (id)operationQueue;
- (void)performAutoEdit;
- (void)pregenerateMovieWithCompletionHandler:(id /* block */)arg1;
- (float)progress;
- (id)project;
- (long long)remainingAssetsToDownload;
- (id)sequence;
- (void)setDidJustSubmitAJob:(bool)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setMemory:(id)arg1;
- (void)setMovieController:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProject:(id)arg1;
- (void)setRemainingAssetsToDownload:(long long)arg1;
- (void)setSequence:(id)arg1;
- (void)setShouldBuildMovieController:(bool)arg1;
- (void)setTopLevelCancel:(bool)arg1;
- (bool)shouldBuildMovieController;
- (bool)topLevelCancel;
- (void)updateDownloadProgress:(float)arg1;
- (void)updateMovieController:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)updateProject:(id)arg1;
- (void)updateRemainingAssetsToDownload:(long long)arg1;

@end
