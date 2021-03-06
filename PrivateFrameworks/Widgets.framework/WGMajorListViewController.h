/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate> {
    WGWidgetListFooterView * _footerView;
    WGSnapshotView * _snapshotView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WGWidgetListFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureStackView;
- (id)_group;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 forColumnMode:(long long)arg2;
- (id)footerView;
- (void)invalidateWidgetBackgroundViews;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)presentEditView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleWidgetIdentifiersForColumnMode:(long long)arg1;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (id)widgetListFooterView:(id)arg1 customBackgroundViewForItem:(id)arg2;

@end
