/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLNetworkStateObserver : NSObject <QLNetworkStateListener, RadiosPreferencesDelegate> {
    NSMutableArray * _completionBlocks;
    unsigned long long  _networkState;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radiosPreferences;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
    <QLNetworkStateListener> * _remoteObserver;
    unsigned long long  _stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long networkState;
@property (nonatomic, retain) <QLNetworkStateListener> *remoteObserver;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (bool)usingRemoteNetworkObserver;

- (void).cxx_destruct;
- (void)_setNetworkState:(unsigned long long)arg1;
- (void)_update;
- (void)_updateCompletionBlocks;
- (void)_updateNetworkActivityIndicator;
- (void)_updateNetworkStateWithFlags:(unsigned int)arg1;
- (void)_updateRemoteObserver;
- (void)airplaneModeChanged;
- (id)init;
- (bool)isConnected;
- (bool)isWifiCapable;
- (unsigned long long)networkState;
- (void)networkStateWithCompletionBlock:(id /* block */)arg1;
- (void)popOperation;
- (void)pushOperation;
- (id)remoteObserver;
- (void)setNetworkState:(unsigned long long)arg1;
- (void)setRemoteObserver:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)updateState:(unsigned long long)arg1;

@end
