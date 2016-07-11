/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationControllerPalette : UIView {
    NSArray * __backgroundConstraints;
    NSArray * __constraints;
    bool  __paletteOverridesPinningBar;
    bool  __palettePinningBarHidden;
    id  __pinningBar;
    struct CGSize { 
        double width; 
        double height; 
    }  __size;
    UIViewController * __unpinnedController;
    _UIBarBackground * _backgroundView;
    unsigned long long  _boundaryEdge;
    UINavigationController * _navController;
    struct { 
        unsigned int isAttached : 1; 
        unsigned int attachmentIsChanging : 1; 
        unsigned int restartPaletteTransitionIfNecessary : 1; 
        unsigned int pinned : 1; 
        unsigned int pinningBarShadowIsHidden : 1; 
        unsigned int paletteShadowIsHidden : 1; 
    }  _paletteFlags;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredContentInsets;
    bool  _visibleWhenPinningBarIsHidden;
}

@property (getter=_attachmentIsChanging, nonatomic, readonly) bool _attachmentIsChanging;
@property (setter=_setBackgroundConstraints:, nonatomic, retain) NSArray *_backgroundConstraints;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (setter=_setPaletteOverridesPinningBar:, nonatomic) bool _paletteOverridesPinningBar;
@property (getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:, nonatomic) bool _palettePinningBarHidden;
@property (setter=_setPinningBar:, nonatomic) id _pinningBar;
@property (setter=_setRestartPaletteTransitionIfNecessary:, nonatomic) bool _restartPaletteTransitionIfNecessary;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } _size;
@property (nonatomic) UIViewController *_unpinnedController;
@property (nonatomic, readonly) unsigned long long boundaryEdge;
@property (nonatomic, readonly) UINavigationController *navController;
@property (nonatomic) bool paletteShadowIsHidden;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic) bool pinningBarShadowIsHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentInsets;
@property (getter=isVisibleWhenPinningBarIsHidden, nonatomic) bool visibleWhenPinningBarIsHidden;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_attachmentIsChanging;
- (id)_backgroundConstraints;
- (id)_backgroundView;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_configurePaletteConstraintsForBoundary;
- (id)_constraints;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (bool)_isPalettePinningBarHidden;
- (bool)_paletteOverridesPinningBar;
- (id)_pinningBar;
- (void)_resetConstraintConstants:(double)arg1;
- (void)_resetHeightConstraintConstant;
- (bool)_restartPaletteTransitionIfNecessary;
- (void)_setAttached:(bool)arg1 didComplete:(bool)arg2;
- (void)_setAttachmentIsChanging:(bool)arg1;
- (void)_setBackgroundConstraints:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setConstraints:(id)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setPaletteOverridesPinningBar:(bool)arg1;
- (void)_setPalettePinningBarHidden:(bool)arg1;
- (void)_setPinningBar:(id)arg1;
- (void)_setRestartPaletteTransitionIfNecessary:(bool)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupBackgroundViewIfNecessary;
- (struct CGSize { double x1; double x2; })_size;
- (id)_unpinnedController;
- (void)_updateBackgroundView;
- (unsigned long long)boundaryEdge;
- (void)dealloc;
- (void)didMoveToSuperview;
- (bool)isAttached;
- (bool)isPinned;
- (bool)isVisibleWhenPinningBarIsHidden;
- (id)navController;
- (bool)paletteIsHidden;
- (bool)paletteShadowIsHidden;
- (bool)pinningBarShadowIsHidden;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAnimating:(bool)arg2;
- (void)setPaletteShadowIsHidden:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPinningBarShadowIsHidden:(bool)arg1;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleWhenPinningBarIsHidden:(bool)arg1;
- (void)set_unpinnedController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)__ck_setPaletteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (void)SKUI_beginHidingPaletteShadow;
- (void)SKUI_endHidingPaletteShadow;

@end
