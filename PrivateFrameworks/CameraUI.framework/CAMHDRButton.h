/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMHDRButton : CAMExpandableMenuButton {
    NSArray * __allowedModes;
    UIImageView * __glyphView;
    bool  _allowsAutomaticHDR;
    bool  _allowsHDROn;
}

@property (nonatomic) long long HDRMode;
@property (setter=_setAllowedModes:, nonatomic, copy) NSArray *_allowedModes;
@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic) bool allowsAutomaticHDR;
@property (nonatomic) bool allowsHDROn;

- (void).cxx_destruct;
- (long long)HDRMode;
- (id)_allowedModes;
- (void)_commonCAMHDRButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_setAllowedModes:(id)arg1;
- (void)_updateAllowedModes;
- (void)_updateCurrentGlyphImage;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1;
- (bool)allowsAutomaticHDR;
- (bool)allowsHDROn;
- (id)headerView;
- (unsigned long long)indexForMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticHDR:(bool)arg1;
- (void)setAllowsHDROn:(bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (bool)shouldAllowExpansion;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end
