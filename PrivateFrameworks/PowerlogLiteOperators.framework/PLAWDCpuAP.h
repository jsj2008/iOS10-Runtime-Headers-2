/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDCpuAP : PLAWDAuxMetrics {
    long long  _apSubmitCnt;
    long long  _cpuLoadSubmitCnt;
    PLEntryNotificationOperatorComposition * _ioreportEnergyEventCallback;
    bool  _isIoreportEnergy;
    PLEntryNotificationOperatorComposition * _monitorEventCallback;
    NSDate * _sleepStartTime;
    PLEntryNotificationOperatorComposition * _wakeEventCallback;
}

@property long long apSubmitCnt;
@property long long cpuLoadSubmitCnt;
@property (retain) PLEntryNotificationOperatorComposition *ioreportEnergyEventCallback;
@property bool isIoreportEnergy;
@property (retain) PLEntryNotificationOperatorComposition *monitorEventCallback;
@property (retain) NSDate *sleepStartTime;
@property (retain) PLEntryNotificationOperatorComposition *wakeEventCallback;

+ (id)entryAggregateDefinitionAwdAp;
+ (id)entryAggregateDefinitionAwdCpu;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToApMetricsTable:(id)arg1 withValue:(double)arg2;
- (long long)apSubmitCnt;
- (long long)cpuLoadSubmitCnt;
- (void)handleIOReportEnergyCallback:(id)arg1;
- (void)handleMonitorCallback:(id)arg1;
- (void)handleWakeCallback:(id)arg1;
- (id)ioreportEnergyEventCallback;
- (bool)isIoreportEnergy;
- (id)monitorEventCallback;
- (void)resetApTable;
- (void)setApSubmitCnt:(long long)arg1;
- (void)setCpuLoadSubmitCnt:(long long)arg1;
- (void)setIoreportEnergyEventCallback:(id)arg1;
- (void)setIsIoreportEnergy:(bool)arg1;
- (void)setMonitorEventCallback:(id)arg1;
- (void)setSleepStartTime:(id)arg1;
- (void)setWakeEventCallback:(id)arg1;
- (id)sleepStartTime;
- (void)startApMetricCollection:(id)arg1;
- (void)startCpuMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (bool)submitApDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (bool)submitCpuDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (id)wakeEventCallback;

@end
