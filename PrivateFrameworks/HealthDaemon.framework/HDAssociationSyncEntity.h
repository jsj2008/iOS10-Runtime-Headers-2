/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationSyncEntity : NSObject <HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeSyncObjectWithData:(id)arg1;
+ (bool)generateSyncObjectsForStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (int)nanoSyncObjectType;
+ (id)nanoSyncPredicateForSession:(id)arg1;
+ (long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependencies;
+ (id)syncEntityDependenciesForNanoSyncProtocolVersion:(int)arg1;
+ (long long)syncEntityType;

@end
