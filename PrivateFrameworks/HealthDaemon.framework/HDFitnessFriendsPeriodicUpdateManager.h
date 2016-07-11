/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsPeriodicUpdateManager : NSObject <HDFitnessFriendsManagerReadyObserver> {
    HDFitnessFriendsActivityDataManager * _activityDataManager;
    HDFitnessFriendsCloudKitManager * _cloudKitManager;
    HDFitnessFriendsFriendListManager * _friendListManager;
    bool  _hasRegisteredForUpdates;
    bool  _isWatch;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRegisteredForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performUpdateWithCompletion:(id /* block */)arg1;
- (void)beginPeriodicUpdates;
- (void)endPeriodicUpdates;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (bool)hasRegisteredForUpdates;
- (id)init;
- (id)initWithIsWatch:(bool)arg1;
- (void)requestImmediateUpdate;

@end
