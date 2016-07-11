/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZone : NSObject <BRCZone> {
    BRCServerChangeState * _changeState;
    BRCClientZone * _clientZone;
    BRCPQLConnection * _db;
    BRCZoneRowID * _dbRowID;
    BRCSyncContext * _metadataSyncContext;
    bool  _needsSave;
    BRCAccountSession * _session;
    unsigned int  _state;
    BRCSyncContext * _syncContext;
    NSString * _zoneName;
}

@property (readonly) BRCServerChangeState *changeState;
@property (nonatomic, retain) BRCClientZone *clientZone;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCZoneRowID *dbRowID;
@property (readonly) bool isCloudDocsZone;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, readonly) BRCSyncContext *metadataSyncContext;
@property (nonatomic) bool needsSave;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedNormalRecordIDs;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedShareRecordIDs;
- (bool)_markItemIDDead:(id)arg1 recordID:(id)arg2;
- (bool)_markShareIDDead:(id)arg1;
- (bool)_saveEditedAliasRecord:(id)arg1;
- (bool)_saveEditedContentRecords:(id)arg1 syncStatus:(long long)arg2;
- (bool)_saveEditedDirOrDocStructureRecord:(id)arg1;
- (bool)_saveEditedDocumentContentRecord:(id)arg1;
- (bool)_saveEditedFinderBookmarkRecord:(id)arg1;
- (bool)_saveEditedRecord:(id)arg1 syncStatus:(long long)arg2;
- (bool)_saveEditedShareRecord:(id)arg1;
- (bool)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2 syncStatus:(long long)arg3;
- (bool)_saveEditedStructureRecords:(id)arg1 deletedRecordIDs:(id)arg2 syncStatus:(long long)arg3;
- (bool)_saveEditedSymlinkRecord:(id)arg1;
- (bool)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3;
- (bool)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7;
- (bool)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned long long)arg4;
- (id)_structurePrefixForType:(BOOL)arg1;
- (void)addForegroundClient:(id)arg1;
- (bool)allocateRanks;
- (id)asPrivateZone;
- (id)asSharedZone;
- (id)changeState;
- (void)clearStateBits:(unsigned int)arg1;
- (id)clientZone;
- (void)collectTombstoneRanks:(id)arg1;
- (id)db;
- (id)dbRowID;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)arg1;
- (id)deleteAllContentsOperation;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 movedZoneNames:(id)arg6 syncStatus:(long long)arg7;
- (bool)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (bool)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (void)forceMoveToCloudDocs;
- (void)handleBrokenStructure;
- (bool)hasXattrWithSignature:(id)arg1;
- (unsigned long long)hash;
- (id)initWithZoneName:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (bool)isCloudDocsZone;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateZone;
- (bool)isSharedZone;
- (id)itemByItemID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (id)metadataSyncContext;
- (bool)needsSave;
- (id)ownerName;
- (unsigned long long)pendingFetchDeletedRecordsCount;
- (unsigned long long)pendingFetchRecordsCount;
- (struct PQLResultSet { Class x1; }*)pendingFetchRecordsEnumerator;
- (id)plist;
- (void)removeForegroundClient:(id)arg1;
- (bool)resetServerTruth;
- (bool)resetServerTruthAndDestroyZone:(bool)arg1;
- (void)scheduleMoveToCloudDocs;
- (bool)serverZoneIsCreated;
- (id)session;
- (void)setClientZone:(id)arg1;
- (void)setDbRowID:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setSession:(id)arg1;
- (bool)setStateBits:(unsigned int)arg1;
- (bool)shouldRecreateServerZoneAfterError:(id)arg1;
- (unsigned int)state;
- (bool)storeXattr:(id)arg1;
- (id)syncContext;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)zoneID;
- (id)zoneName;

@end
