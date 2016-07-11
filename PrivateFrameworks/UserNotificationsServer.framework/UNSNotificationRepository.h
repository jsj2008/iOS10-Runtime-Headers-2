/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRepository : NSObject {
    <UNSNotificationRepositoryDelegate> * _delegate;
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDataStoreRepository * _repository;
}

@property (nonatomic) <UNSNotificationRepositoryDelegate> *delegate;

- (void).cxx_destruct;
- (id)_directory;
- (long long)_maxObjectsPerKey;
- (id)_notificationsForObjects:(id)arg1;
- (id)_pathExtension;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 removedNotifications:(id)arg3 forBundleIdentifier:(id)arg4;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_saveNotificationRecord:(id)arg1 withOptions:(unsigned long long)arg2 forBundleIdentifier:(id)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (void)notificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performMigration;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)removeNotificationRepository;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
