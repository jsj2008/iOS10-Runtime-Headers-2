/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDService : NSObject <CDService> {
    NSString * _ID;
    bool  __inFlight;
    NSSet * _desiredNotifications;
    bool  _doNotQuery;
    bool  _doesPeriodic;
    bool  _doesPurge;
    bool  _multiUserOnly;
    bool  _noQuota;
    bool  _rootOnly;
    id /* block */  _serviceInvalidationHandler;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (nonatomic, retain) NSString *ID;
@property (nonatomic) bool _inFlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *desiredNotifications;
@property (nonatomic) bool doNotQuery;
@property (nonatomic) bool doesPeriodic;
@property (nonatomic) bool doesPurge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inFlight;
@property (nonatomic) bool multiUserOnly;
@property (nonatomic) bool noQuota;
@property (nonatomic) bool rootOnly;
@property (nonatomic, copy) id /* block */ serviceInvalidationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) Class superclass;

+ (id)serviceWithInfo:(id)arg1;
+ (id)serviceWithInfo:(id)arg1 endpoint:(id)arg2;
+ (id)serviceWithInfo:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)ID;
- (bool)_inFlight;
- (void)_serviceCallback:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)_serviceCancelPurge:(id /* block */)arg1;
- (void)_serviceNotify:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)_servicePing:(id /* block */)arg1;
- (void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (id)debugDescription;
- (id)description;
- (id)desiredNotifications;
- (bool)doNotQuery;
- (bool)doesPeriodic;
- (bool)doesPurge;
- (bool)inFlight;
- (id)initWithInfo:(id)arg1;
- (bool)multiUserOnly;
- (bool)noQuota;
- (bool)rootOnly;
- (void)serviceCallback:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)serviceCancelPurge:(id /* block */)arg1;
- (id /* block */)serviceInvalidationHandler;
- (void)serviceNotify:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)servicePing:(id /* block */)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (id)serviceQueue;
- (void)setDoNotQuery:(bool)arg1;
- (void)setDoesPeriodic:(bool)arg1;
- (void)setDoesPurge:(bool)arg1;
- (void)setID:(id)arg1;
- (void)setMultiUserOnly:(bool)arg1;
- (void)setNoQuota:(bool)arg1;
- (void)setRootOnly:(bool)arg1;
- (void)setServiceInvalidationHandler:(id /* block */)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)set_inFlight:(bool)arg1;

@end
