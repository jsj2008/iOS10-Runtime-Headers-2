/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCDefaultDateLabel : UILabel <NCNotificationDateLabel> {
    bool  _allDay;
    <SBDateLabelDelegate> * _delegate;
    bool  _effectiveAllDay;
    NSDate * _effectiveAllDayEndDate;
    NSDate * _effectiveAllDayLastValidDate;
    NSDate * _effectiveAllDayStartDate;
    bool  _isCoalescingUpdates;
    bool  _isTimestamp;
    int  _labelType;
    bool  _needsUpdateFromCoalesce;
    NSDate * _timeZoneRelativeEndDate;
    NSDate * _timeZoneRelativeStartDate;
    NSTimer * _updateTimer;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDateLabelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTimestamp;
@property (nonatomic) int labelType;
@property (readonly) Class superclass;

+ (id)_currentCalendar;

- (void).cxx_destruct;
- (void)_configureTimer;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(bool)arg3 sameDayDates:(bool)arg4 eventOngoing:(bool)arg5 withCurrentDate:(id)arg6 forStartLabel:(bool)arg7;
- (void)_forceUpdate;
- (void)_invalidateTimer;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_resetEffectiveAllDayState:(bool)arg1;
- (void)_updateEffectiveAllDayTimes;
- (void)_updateTimerFired:(id)arg1;
- (id)constructLabelString;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isAllDay;
- (bool)isDateWithinEffectiveAllDayRange:(id)arg1;
- (bool)isEffectiveAllDay;
- (bool)isTimestamp;
- (int)labelType;
- (void)prepareForReuse;
- (void)setAllDay:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setIsTimestamp:(bool)arg1;
- (void)setLabelType:(int)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
- (void)update;
- (void)updateTextIfNecessary;
- (void)updateTextIfNecessary:(bool)arg1;

@end
