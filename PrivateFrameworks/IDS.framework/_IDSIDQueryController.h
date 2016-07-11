/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    NSMutableDictionary * _idStatusCache;
    NSMutableDictionary * _listenerIDToServicesMap;
    NSMutableDictionary * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _rerouteService;
    NSString * _serviceToken;
    NSMutableDictionary * _transactionIDToBlockMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(bool)arg4 error:(id)arg5;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3 failBlock:(id /* block */)arg4 waitForReply:(bool)arg5;
- (id)_cacheForService:(id)arg1;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 delegateMap:(id)arg2;
- (void)_connect;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_disconnectFromQueryService;
- (bool)_flushQueryCacheForService:(id)arg1;
- (bool)_hasCacheForService:(id)arg1;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(bool)arg4 completionBlock:(id /* block */)arg5;
- (bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(bool)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)_requestCacheForService:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_reroutedPrototypeService:(id)arg1;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (bool)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)init;
- (id)initWithDelegateContext:(id)arg1 queue:(id)arg2;
- (bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (bool)removeListenerID:(id)arg1 forService:(id)arg2;

@end
