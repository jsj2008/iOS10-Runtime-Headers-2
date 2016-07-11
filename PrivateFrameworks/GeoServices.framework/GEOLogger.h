/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogger : NSObject {
    GEOLogContext * _cachedLogContext;
    NSMutableArray * _logContextDelegates;
    NSObject<OS_dispatch_queue> * _loggerQueue;
    void * _loggerQueueIdentityKey;
    void * _loggerQueueIdentityValue;
}

+ (void)registerGEOLogFacility;
+ (id)sharedLogger;

- (void)_captureLogMsgEvent:(id)arg1 withMergedContext:(id)arg2;
- (void)captureLogMsgEvent:(id)arg1;
- (void)captureLogMsgEvent:(id)arg1 withLogContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)registerLogContextDelegate:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerLogMsgStatesInContext:(id)arg1;
- (id)sharedLogManagerInstance;
- (id)sharedLogMessageFactoryInstance;
- (void)unregisterAllLogContextDelegates;
- (void)unregisterLogContextDelegate:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;

@end
