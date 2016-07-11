/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAssetMonitor : VTEventMonitor {
    int  _notifyToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveNewAssetAvailable;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)notifyNewAssetDownloaded;
- (void)removeObserver:(id)arg1;

@end
