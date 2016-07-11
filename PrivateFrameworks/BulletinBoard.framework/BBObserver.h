/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserver : NSObject <BBAssertionDelegate> {
    NSMutableDictionary * _attachmentUUIDsForBulletinID;
    NSMapTable * _bulletinLifeAssertions;
    BBGuaranteedOnceCache * _cachedComposedImageForAttachmentUUID;
    BBGuaranteedOnceCache * _cachedComposedImageSizeForAttachmentUUID;
    BBGuaranteedOnceCache * _cachedDataForAttachmentUUID;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <BBObserverDelegate> * _delegate;
    NSString * _gatewayName;
    unsigned long long  _gatewayPriority;
    bool  _isGateway;
    unsigned long long  _observerFeed;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remainingFeedsByBulletinID;
    NSMutableDictionary * _sectionParametersBySectionID;
    BBObserverServerProxy * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BBObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *gatewayName;
@property (nonatomic, readonly) unsigned long long gatewayPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long observerFeed;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (void)initialize;
+ (id)observerGlobalQueue;

- (void).cxx_destruct;
- (void)_getComposedImageIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_getComposedImageSizeIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_getDataIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)_initWithCalloutQueue:(id)arg1 gatewayName:(id)arg2 gatewayPriority:(unsigned long long)arg3 isGateway:(bool)arg4;
- (void)_prewarmSectionParametersAndAttachmentsForBulletin:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_queue_associateAttachment:(id)arg1 withBulletin:(id)arg2;
- (id)_queue_cachedComposedImageForAttachment:(id)arg1;
- (id)_queue_cachedComposedImageSizeForAttachment:(id)arg1;
- (id)_queue_cachedDataForAttachment:(id)arg1;
- (void)_queue_cleanupAttachmentCacheForBulletinID:(id)arg1;
- (bool)_queue_hasCachedComposedImageForAttachment:(id)arg1;
- (bool)_queue_hasCachedComposedImageSizeForAttachment:(id)arg1;
- (bool)_queue_hasCachedDataForAttachment:(id)arg1;
- (void)_queue_invalidate;
- (void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2;
- (void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(bool)arg2;
- (void)_queue_setCachedComposedImage:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (void)_queue_setCachedComposedImageSize:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (void)_queue_setCachedData:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (void)_queue_updateAddBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateModifyBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateRemoveBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2;
- (id)cachedComposedImageForBulletin:(id)arg1 attachment:(id)arg2;
- (struct CGSize { double x1; double x2; })cachedComposedImageSizeForBulletin:(id)arg1 attachment:(id)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)gatewayName;
- (unsigned long long)gatewayPriority;
- (void)getAlertBehaviorOverridesWithCompletion:(id /* block */)arg1;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getBulletinsPublishedAfterDate:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getBulletinsWithCompletion:(id /* block */)arg1;
- (void)getComposedImageForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getDataForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getPrimaryAttachmentDataForBulletin:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getPrivilegedSenderTypesWithCompletion:(id /* block */)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (void)getSectionOrderRuleWithCompletion:(id /* block */)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (unsigned long long)observerFeed;
- (id)parametersForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3;
- (void)removeSection:(id)arg1;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1;
- (void)updateBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)getPrimaryAttachmentInfoForBulletin:(id)arg1 withCompletion:(id /* block */)arg2;

@end
