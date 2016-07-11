/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView <MPUContentSizeCategoryChanging> {
    NSString * _appDisplayName;
    <MPUMediaControlsTitlesViewDelegate> * _delegate;
    CALayer * _detailEdgesLayerMask;
    bool  _displayingAppName;
    bool  _highlighted;
    long long  _mediaControlsStyle;
    CALayer * _titleEdgesLayerMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUMediaControlsTitlesViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) long long mediaControlsStyle;
@property (readonly) Class superclass;

+ (bool)_isLockScreenMediaControlStyle:(long long)arg1;
+ (id)detailTextColorForMediaControlsStyle:(long long)arg1 highlighted:(bool)arg2;

- (void).cxx_destruct;
- (id)_createEdgesLayerMask;
- (id)_detailTextAttributes;
- (void)_setGlowEnabled:(bool)arg1 forLabel:(id)arg2;
- (id)_titleTextAttributes;
- (void)_touchControlActivate:(id)arg1;
- (void)_touchControlDeactivate:(id)arg1;
- (void)_touchControlTapped:(id)arg1;
- (id)delegate;
- (id)initWithMediaControlsStyle:(long long)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (long long)mediaControlsStyle;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)updateNowPlayingAppDisplayName:(id)arg1;
- (void)updateTextForContentSizeCategory:(id)arg1;
- (void)updateTrackInformationWithNowPlayingInfo:(id)arg1;

@end
