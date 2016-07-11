/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityHorizontalLockupTableViewCell : UITableViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityHorizontalLockupViewDelegate, MusicEntityViewDownloadInformationObserving, MusicEntityViewPlaybackStatusObserving> {
    bool  _entityDisabled;
    MusicEntityHorizontalLockupView * _lockupView;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntityDisabled, nonatomic) bool entityDisabled;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicEntityHorizontalLockupView *lockupView;
@property (readonly) Class superclass;

+ (Class)horizontalLockupViewClass;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_updateDisclosureIndicator;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(bool)arg2;
- (void)_updateHighlightStateAnimated:(bool)arg1;
- (void)_updateLockupViewBackgroundColor;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)horizontalLockupViewDidLayoutSubviews:(id)arg1;
- (void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (bool)horizontalLockupViewShouldLayoutAsEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEntityDisabled;
- (void)layoutSubviews;
- (id)lockupView;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setDownloadInformation:(struct MusicEntityDownloadInformation { long long x1; double x2; })arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaybackStatus:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)updateForAsynchronousPropertyLoadCompleted;

@end
