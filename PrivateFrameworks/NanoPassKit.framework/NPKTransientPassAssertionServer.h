/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransientPassAssertionServer : NSObject <NPKTransientPassAssertionConnectionDelegate, NSXPCListenerDelegate> {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _transientPaymentRequests;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) BKSApplicationStateMonitor *appStateMonitor;
@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transientPaymentRequests;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)_bundleIDForXPCConnection:(id)arg1;
- (void)_handleAppStateChangeWithStateDictionary:(id)arg1;
- (void)_updateAppStateMonitor;
- (id)appStateMonitor;
- (void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2;
- (void)connectionDied:(id)arg1;
- (id)connections;
- (void)handleNewConnection:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)setAppStateMonitor:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTransientPaymentRequests:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)transientPassUniqueID;
- (id)transientPaymentRequests;
- (id)xpcListener;

@end
