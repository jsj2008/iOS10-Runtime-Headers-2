/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationDateLabel <NSObject>

@required

- (<SBDateLabelDelegate> *)delegate;
- (bool)isAllDay;
- (bool)isTimestamp;
- (int)labelType;
- (void)prepareForReuse;
- (void)setAllDay:(bool)arg1;
- (void)setDelegate:(id <SBDateLabelDelegate>)arg1;
- (void)setEndDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)setIsTimestamp:(bool)arg1;
- (void)setLabelType:(int)arg1;
- (void)setStartDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;

@end
