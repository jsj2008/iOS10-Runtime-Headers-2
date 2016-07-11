/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDExerciseAchievementState : _HDAchievementState {
    double  _bestBriskMinutes;
    bool  _briskMinutesGoalJustMetToday;
    double  _briskMinutesToday;
    double  _briskMinutesYesterday;
    long long  _consecutiveGoalsMet;
    NSDate * _lastPerfectWeekDate;
    long long  _lastResetSummaryIndexForStreaks;
    double  _previousBestBriskMinutes;
}

@property (nonatomic) double bestBriskMinutes;
@property (nonatomic) bool briskMinutesGoalJustMetToday;
@property (nonatomic) double briskMinutesToday;
@property (nonatomic) double briskMinutesYesterday;
@property (nonatomic) long long consecutiveGoalsMet;
@property (nonatomic, retain) NSDate *lastPerfectWeekDate;
@property (nonatomic) long long lastResetSummaryIndexForStreaks;
@property (nonatomic) double previousBestBriskMinutes;

- (void).cxx_destruct;
- (double)bestBriskMinutes;
- (bool)briskMinutesGoalJustMetToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (long long)consecutiveGoalsMet;
- (id)lastPerfectWeekDate;
- (long long)lastResetSummaryIndexForStreaks;
- (double)previousBestBriskMinutes;
- (void)setBestBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoalJustMetToday:(bool)arg1;
- (void)setBriskMinutesToday:(double)arg1;
- (void)setBriskMinutesYesterday:(double)arg1;
- (void)setConsecutiveGoalsMet:(long long)arg1;
- (void)setLastPerfectWeekDate:(id)arg1;
- (void)setLastResetSummaryIndexForStreaks:(long long)arg1;
- (void)setPreviousBestBriskMinutes:(double)arg1;

@end
