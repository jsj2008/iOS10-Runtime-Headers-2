/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    NSMutableArray * _changes;
    struct { 
        unsigned int sessionStartDate : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    HDCodableError * _sessionError;
    double  _sessionStartDate;
    NSData * _sessionUUID;
    int  _statusCode;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSessionError;
@property (nonatomic) bool hasSessionStartDate;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatusCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableError *sessionError;
@property (nonatomic) double sessionStartDate;
@property (nonatomic, retain) NSData *sessionUUID;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;

+ (id)changeSetWithChanges:(id)arg1 sessionUUID:(id)arg2 startDate:(id)arg3 sessionError:(id)arg4 statusCode:(int)arg5;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_addChanges:(id)arg1;
- (void)addChanges:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedSessionError;
- (id)decodedSessionStartDate;
- (id)decodedSessionUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionError;
- (bool)hasSessionStartDate;
- (bool)hasSessionUUID;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (bool)readFrom:(id)arg1;
- (id)sessionError;
- (double)sessionStartDate;
- (id)sessionUUID;
- (void)setChanges:(id)arg1;
- (void)setHasSessionStartDate:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setSessionError:(id)arg1;
- (void)setSessionStartDate:(double)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
