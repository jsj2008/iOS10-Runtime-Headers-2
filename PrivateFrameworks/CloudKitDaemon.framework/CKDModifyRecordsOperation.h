/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {
    bool  _atomic;
    CKDRecordCache * _cache;
    bool  _canSetPreviousProtectionEtag;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    CKDDecryptRecordsOperation * _decryptOperation;
    id /* block */  _deleteCompletionBlock;
    NSDictionary * _handlersByRecordID;
    bool  _haveOutstandingHandlers;
    NSMutableDictionary * _modifyHandlersByZoneID;
    NSObject<OS_dispatch_queue> * _modifyRecordsQueue;
    NSDictionary * _parentsByRecordID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    id /* block */  _recordsInFlightBlock;
    NSArray * _recordsToSave;
    bool  _retriedRecords;
    bool  _retryPCSFailures;
    int  _saveAttempts;
    id /* block */  _saveCompletionBlock;
    long long  _savePolicy;
    id /* block */  _saveProgressBlock;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
    CKDProtocolTranslator * _translator;
    bool  _trustProtectionData;
    id /* block */  _uploadCompletionBlock;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) CKDRecordCache *cache;
@property (nonatomic) bool canSetPreviousProtectionEtag;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic, retain) NSDictionary *handlersByRecordID;
@property (nonatomic, readonly) bool hasDecryptOperation;
@property (nonatomic) bool haveOutstandingHandlers;
@property (nonatomic, retain) NSMutableDictionary *modifyHandlersByZoneID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modifyRecordsQueue;
@property (nonatomic, retain) NSDictionary *parentsByRecordID;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, copy) id /* block */ recordsInFlightBlock;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) bool retriedRecords;
@property (nonatomic) bool retryPCSFailures;
@property (nonatomic) int saveAttempts;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;
@property (nonatomic) long long savePolicy;
@property (nonatomic, copy) id /* block */ saveProgressBlock;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;
@property (nonatomic, readonly) CKDProtocolTranslator *translator;
@property (nonatomic) bool trustProtectionData;
@property (nonatomic, copy) id /* block */ uploadCompletionBlock;

+ (bool)_claimPackagesInRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_applySideEffects;
- (void)_clearProtectionDataIfNotEntitled;
- (id)_containerIDsNotToTopoSort;
- (void)_continueRecordsModify;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 handlersByRecordID:(id)arg4;
- (void)_determineEnvironment;
- (void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)_fetchContainerScopedUserID;
- (void)_fetchRecordPCSData;
- (void)_fetchSharePCSData;
- (void)_fetchShareParticipants;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (bool)_hasHandlerInState:(unsigned long long)arg1;
- (void)_markRecordHandlersAsUploaded;
- (void)_performCallbacksForAtomicZoneHandlers:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1;
- (void)_performHandlerCallbacks;
- (id)_prepareAssetsForUpload;
- (void)_prepareParentPCS;
- (bool)_prepareRecordsForSave;
- (void)_reportRecordsInFlight;
- (bool)_topoSortRecords;
- (id)_topoSortRecordsForHandlers:(id)arg1;
- (void)_uploadAssets;
- (void)_verifyRecordEncryption;
- (id)activityCreate;
- (bool)atomic;
- (id)cache;
- (bool)canSetPreviousProtectionEtag;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id /* block */)deleteCompletionBlock;
- (void)finishWithError:(id)arg1;
- (id)handlersByRecordID;
- (bool)hasDecryptOperation;
- (bool)haveOutstandingHandlers;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)modifyHandlersByZoneID;
- (id)modifyRecordsQueue;
- (id)nameForState:(unsigned long long)arg1;
- (id)parentsByRecordID;
- (id)recordDecryptOperation;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id /* block */)recordsInFlightBlock;
- (id)recordsToSave;
- (bool)retriedRecords;
- (bool)retryPCSFailures;
- (int)saveAttempts;
- (void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id /* block */)saveCompletionBlock;
- (long long)savePolicy;
- (id /* block */)saveProgressBlock;
- (void)setAtomic:(bool)arg1;
- (void)setCache:(id)arg1;
- (void)setCanSetPreviousProtectionEtag:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setHandlersByRecordID:(id)arg1;
- (void)setHaveOutstandingHandlers:(bool)arg1;
- (void)setModifyHandlersByZoneID:(id)arg1;
- (void)setModifyRecordsQueue:(id)arg1;
- (void)setParentsByRecordID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsInFlightBlock:(id /* block */)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setRetriedRecords:(bool)arg1;
- (void)setRetryPCSFailures:(bool)arg1;
- (void)setSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSaveProgressBlock:(id /* block */)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (void)setTrustProtectionData:(bool)arg1;
- (void)setUploadCompletionBlock:(id /* block */)arg1;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;
- (id)translator;
- (bool)trustProtectionData;
- (id /* block */)uploadCompletionBlock;

@end
