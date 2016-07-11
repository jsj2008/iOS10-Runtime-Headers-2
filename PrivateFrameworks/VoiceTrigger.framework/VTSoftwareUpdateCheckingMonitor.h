/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {
    bool  _isSoftwareUpdateCheckingRunning;
    int  _notifyToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(bool)arg1;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(bool)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isSoftwareUpdateCheckingRunning;
- (void)removeObserver:(id)arg1;
- (unsigned char)softwareUpdateCheckingState;

@end
