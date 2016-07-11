/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider <EKDayViewControllerDataSource, EKDayViewControllerDelegate> {
    EKEvent * _event;
    NSArray * _events;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EKEvent *event;
@property (retain) NSArray *events;
@property (readonly) unsigned long long hash;
@property (retain) EKEventStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(bool)arg3;
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(bool)arg3;
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
- (void)dayViewControllerDidReloadData:(id)arg1;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (void)dayViewControllerDidTapEmptySpace:(id)arg1;
- (void)dayViewControllerIsPinchingDayView:(id)arg1;
- (bool)dayViewControllerShouldAllowLongPress:(id)arg1;
- (bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
- (bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
- (bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
- (id)event;
- (id)events;
- (void)setEvent:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)updateSelectedOccurrenceView;

@end
