/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationSectionListViewController : NCNotificationListViewController <NCNotificationListSectionHeaderViewDelegate, NCNotificationSectionListDelegate, UIGestureRecognizerDelegate> {
    NCNotificationListSectionHeaderView * _headerViewInClearState;
    NCNotificationListSectionHeaderView * _headerViewInForceTouchState;
    NSMutableSet * _hiddenMessagePreviewSections;
    <NCNotificationSectionList> * _sectionList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState;
@property (nonatomic, retain) NSMutableSet *hiddenMessagePreviewSections;
@property (nonatomic, retain) <NCNotificationSectionList> *sectionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearCachedSizesForNotificationSectionIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (bool)dismissModalFullScreenIfNeeded;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (bool)hasContent;
- (id)headerViewInClearState;
- (id)headerViewInForceTouchState;
- (id)hiddenMessagePreviewSections;
- (void)hideMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
- (void)notificationSectionListNeedsReload:(id)arg1;
- (long long)notificationViewControllerDateFormatStyle:(id)arg1;
- (bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;
- (id)sectionList;
- (void)setHeaderViewInClearState:(id)arg1;
- (void)setHeaderViewInForceTouchState:(id)arg1;
- (void)setHiddenMessagePreviewSections:(id)arg1;
- (void)setSectionList:(id)arg1;
- (bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)showMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
