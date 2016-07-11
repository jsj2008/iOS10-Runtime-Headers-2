/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCAppLibraryDelegate, BRCClientZoneDelegate> {
    BRCContainerMetadataSyncPersistedState * _containerMetadataPersistedState;
    struct _BRCOperation { Class x1; id x2; int x3; id x4; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x5; void*x6; unsigned char x7; void*x8; } * _containerMetadataSyncOperation;
    BRCDeadlineSource * _containerMetadataSyncSource;
    unsigned int  _containerMetadataSyncState;
    NSString * _environmentName;
    NSObject<OS_dispatch_group> * _initialSyncDownGroup;
    bool  _isInSyncBubble;
    NSDate * _lastPeriodicSyncDate;
    BRCMigrateZonePCSOperation * _migrateZonePCSOperation;
    BRCDeadlineSource * _migrateZonePCSSource;
    struct _BRCOperation { Class x1; id x2; int x3; id x4; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x5; void*x6; unsigned char x7; void*x8; } * _periodicSyncOperation;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_queue> * _pushQueue;
    NSObject<OS_dispatch_source> * _pushSource;
    NSData * _pushToken;
    BRCAccountSession * _session;
    unsigned int  _sharedDBSyncState;
    struct _BRCOperation { Class x1; id x2; int x3; id x4; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x5; void*x6; unsigned char x7; void*x8; } * _sharedDatabaseSyncOperation;
    BRCDeadlineSource * _sharedDatabaseSyncSource;
    NSObject<OS_dispatch_group> * _syncGroup;
    BRCDeadlineScheduler * _syncScheduler;
    BRCSyncBudgetThrottle * _syncUpBudget;
    BRCZoneHealthSyncPersistedState * _zoneHealthPersistedState;
    struct _BRCOperation { Class x1; id x2; int x3; id x4; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x5; void*x6; unsigned char x7; void*x8; } * _zoneHealthSyncOperation;
    BRCDeadlineSource * _zoneHealthSyncSource;
    unsigned int  _zoneHealthSyncState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *initialSyncDownGroup;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, readonly) BRCDeadlineScheduler *syncScheduler;
@property (nonatomic, readonly) BRCSyncBudgetThrottle *syncUpBudget;
@property (nonatomic, readonly) BRCZoneHealthSyncPersistedState *zoneHealthSyncPersistedState;

- (void).cxx_destruct;
- (id)_newSyncDeadlineSource;
- (void)_scheduleCrossZoneMovePCSPrep;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_syncScheduleForZoneHealth;
- (void)_unscheduleClientZone:(id)arg1;
- (void)_updatePushTopicsRegistration;
- (void)clientZoneDidBecomeBackground:(id)arg1;
- (void)clientZoneDidBecomeForeground:(id)arg1;
- (void)close;
- (void)closeContainers;
- (void)completedZoneHealthSyncDownWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 moreComing:(bool)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(id)arg1;
- (void)didInitialSyncDownForClientZone:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (id)initialSyncDownGroup;
- (void)redoZonePCSPreperation;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)resume;
- (void)schedulePeriodicSyncIfNecessary;
- (void)scheduleSyncDownForContainerMetadata;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(bool)arg1;
- (void)scheduleSyncDownForZoneHealth;
- (id)session;
- (void)setup;
- (id)syncGroup;
- (id)syncScheduler;
- (id)syncUpBudget;
- (void)willInitialSyncDownForClientZone:(id)arg1;
- (id)zoneHealthSyncPersistedState;

@end
