/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation {
    NSMutableArray * _MMCSItemsToDownload;
    NSArray * _assetsToDownload;
    CKDCancelTokenGroup * _cancelTokens;
    id /* block */  _downloadCommandBlock;
    id /* block */  _downloadCompletionBlock;
    id /* block */  _downloadPreparationBlock;
    id /* block */  _downloadProgressBlock;
    NSMapTable * _downloadTasksByPackages;
    unsigned long long  _maxPackageDownloadsPerBatch;
    NSArray * _packageIndexSets;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldFetchAssetContentInMemory;
}

@property (nonatomic, retain) NSMutableArray *MMCSItemsToDownload;
@property (nonatomic, retain) NSArray *assetsToDownload;
@property (nonatomic, retain) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic, copy) id /* block */ downloadCommandBlock;
@property (nonatomic, copy) id /* block */ downloadCompletionBlock;
@property (nonatomic, copy) id /* block */ downloadPreparationBlock;
@property (nonatomic, copy) id /* block */ downloadProgressBlock;
@property (nonatomic, retain) NSMapTable *downloadTasksByPackages;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (nonatomic, retain) NSArray *packageIndexSets;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldFetchAssetContentInMemory;

- (void).cxx_destruct;
- (id)CKStatusReportLogGroups;
- (id)MMCSItemsToDownload;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (bool)_download;
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (bool)_prepareForDownload;
- (void)_removeUntrackedMMCSItems:(id)arg1;
- (id)activityCreate;
- (id)assetsToDownload;
- (void)cancel;
- (id)cancelTokens;
- (id /* block */)downloadCommandBlock;
- (id /* block */)downloadCompletionBlock;
- (id /* block */)downloadPreparationBlock;
- (id /* block */)downloadProgressBlock;
- (id)downloadTasksByPackages;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToDownload:(id)arg3 packageIndexSets:(id)arg4;
- (void)main;
- (bool)makeStateTransition;
- (unsigned long long)maxPackageDownloadsPerBatch;
- (id)nameForState:(unsigned long long)arg1;
- (id)packageIndexSets;
- (id)queue;
- (void)setAssetsToDownload:(id)arg1;
- (void)setCancelTokens:(id)arg1;
- (void)setDownloadCommandBlock:(id /* block */)arg1;
- (void)setDownloadCompletionBlock:(id /* block */)arg1;
- (void)setDownloadPreparationBlock:(id /* block */)arg1;
- (void)setDownloadProgressBlock:(id /* block */)arg1;
- (void)setDownloadTasksByPackages:(id)arg1;
- (void)setMMCSItemsToDownload:(id)arg1;
- (void)setMaxPackageDownloadsPerBatch:(unsigned long long)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (bool)shouldFetchAssetContentInMemory;

@end
