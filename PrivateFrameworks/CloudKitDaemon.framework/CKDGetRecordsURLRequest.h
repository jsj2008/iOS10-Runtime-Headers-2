/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetRecordsURLRequest : CKDURLRequest {
    unsigned long long  _URLOptions;
    NSSet * _assetFieldNamesToPublishURLs;
    NSSet * _desiredKeys;
    unsigned long long  _recordCount;
    id /* block */  _recordFetchedBlock;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSDictionary * _recordIDsToVersionETags;
    unsigned long long  _requestedTTL;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, retain) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic) unsigned long long recordCount;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) bool shouldFetchAssetContent;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (bool)allowsAnonymousAccount;
- (id)assetFieldNamesToPublishURLs;
- (id)desiredKeys;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;
- (int)operationType;
- (unsigned long long)recordCount;
- (id /* block */)recordFetchedBlock;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToVersionETags;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (unsigned long long)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setRecordCount:(unsigned long long)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setURLOptions:(unsigned long long)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneIDsToLock;

@end