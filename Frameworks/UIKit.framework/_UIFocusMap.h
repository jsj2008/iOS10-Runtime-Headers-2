/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusMap : NSObject {
    _UIFocusMapSearchInfo * _defaultItemSearchInfo;
    <_UIFocusMapDelegate> * _delegate;
    _UIFocusMapSearchInfo * _focusMovementSearchInfo;
    long long  _focusMovementStyle;
    _UIFocusedItemRegion * _focusedRegion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _minimumSearchArea;
    bool  _minimumSearchAreaIsEmpty;
    bool  _needsSearchInfo;
    <_UIFocusRegionContainer> * _rootContainer;
    UIScreen * _screen;
    bool  _trackingSearchInfo;
}

@property (getter=_defaultItemSearchContext, nonatomic, readonly) _UIFocusMapSearchInfo *defaultItemSearchInfo;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <_UIFocusMapDelegate> *delegate;
@property (getter=_focusMovementSearchContext, nonatomic, readonly) _UIFocusMapSearchInfo *focusMovementSearchInfo;
@property (nonatomic) long long focusMovementStyle;
@property (nonatomic, readonly, copy) _UIFocusedItemRegion *focusedRegion;
@property (getter=_minimumSearchArea, setter=_setMinimumSearchArea:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } minimumSearchArea;
@property (getter=_rootContainer, setter=_setRootContainer:, nonatomic) <_UIFocusRegionContainer> *rootContainer;
@property (getter=_screen, nonatomic, readonly) UIScreen *screen;

- (void).cxx_destruct;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingSearches;
- (id)_defaultFocusItemInEnvironment:(id)arg1;
- (id)_defaultItemSearchContext;
- (id)_defaultMapSnapshotOptions;
- (id)_delegate;
- (id)_destinationItemForFocusMovement:(id)arg1;
- (id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2;
- (id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_findAllDefaultFocusableRegionsWithOptions:(id)arg1;
- (id)_focusMovementSearchContext;
- (id)_initWithScreen:(id)arg1;
- (id)_initWithScreen:(id)arg1 focusedItem:(id)arg2;
- (id)_initWithScreen:(id)arg1 focusedRegion:(id)arg2;
- (bool)_isValidFocusMap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimumSearchArea;
- (id)_rootContainer;
- (id)_screen;
- (void)_setDelegate:(id)arg1;
- (void)_setMinimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRootContainer:(id)arg1;
- (id)_stopTrackingSearches;
- (void)_trackExternalSnapshot:(id)arg1;
- (long long)focusMovementStyle;
- (id)focusedRegion;
- (id)init;
- (void)setFocusMovementStyle:(long long)arg1;

@end
