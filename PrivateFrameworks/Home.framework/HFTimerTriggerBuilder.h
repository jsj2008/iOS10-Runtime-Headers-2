/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTimerTriggerBuilder : HFTriggerBuilder {
    <HFTimerTriggerExecutionTime> * _executionTime;
    NSArray * _recurrences;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) <HFTimerTriggerExecutionTime> *executionTime;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_executionTime;
- (bool)_hasWeekdayRecurrence;
- (id)_performValidation;
- (id)_updateRecurrences;
- (id)_updateTimeZone;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)executionTime;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)recurrences;
- (void)setExecutionTime:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
