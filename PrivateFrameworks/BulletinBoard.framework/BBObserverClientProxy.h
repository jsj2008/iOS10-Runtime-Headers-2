/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverClientProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    NSMutableDictionary * _bulletinIDsToTransaction;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientBundleIdentifier;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    BBServer * _server;
}

@property (nonatomic, retain) NSMutableDictionary *bulletinIDsToTransaction;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BBServer *server;

+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)bulletinIDsToTransaction;
- (id)calloutQueue;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (id)clientBundleIdentifier;
- (id)connection;
- (id)currentTransactionForBulletinID:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id /* block */)arg1;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsPublishedAfterDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getBulletinsWithHandler:(id /* block */)arg1;
- (void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getObserverDebugInfo:(id /* block */)arg1;
- (void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 sizeConstraints:(id)arg4 withHandler:(id /* block */)arg5;
- (void)getPrivilegedSenderTypesWithHandler:(id /* block */)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoWithHandler:(id /* block */)arg1;
- (void)getSectionOrderRuleWithHandler:(id /* block */)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleResponse:(id)arg1;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1;
- (id)initWithServer:(id)arg1 connection:(id)arg2 calloutQueue:(id)arg3;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)queue;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)removeSection:(id)arg1;
- (void)removeTransaction:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (id)server;
- (void)setBulletinIDsToTransaction:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setServer:(id)arg1;
- (id)transactionBulletinIDs;
- (void)updateBulletin:(id)arg1;
- (void)updateBulletin:(id)arg1 withHandler:(id /* block */)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end
