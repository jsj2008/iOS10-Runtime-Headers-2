/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventOrganizerDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    <EKIdentityProtocol> * _organizerOverride;
}

@property (retain) <EKIdentityProtocol> *organizerOverride;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)organizerOverride;
- (void)reset;
- (void)setOrganizerOverride:(id)arg1;

@end
