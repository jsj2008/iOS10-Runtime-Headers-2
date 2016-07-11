/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerView : UIView <ISGestureInputDelegate, ISLivePhotoPlayerSource, ISPlayerChangeObserver, ISPlayerChangeObserverPrivate, ISPlayerDelegate, ISPlayerOutput, UIGestureRecognizerDelegate> {
    NSMutableSet * __activeGestures;
    ISAudioVolumeInput * __audioVolumeInput;
    bool  __crossfadeEnabled;
    _ISCrossfadeView * __crossfadeView;
    _ISPlayerDebugView * __debugInfoView;
    id  __forceTouchStatusObserver;
    ISMutedAudioInput * __mutedAudioInput;
    bool  __needsNewDriver;
    bool  __needsUpdateDebugView;
    UIView * __photoContainerView;
    _ISTargetView * __photoView;
    ISGestureInput * __playbackInput;
    <NSObject> * __playerObservationToken;
    bool  __playerTransitioning;
    UIView * __videoContainerView;
    _ISTargetView * __videoMaskView;
    struct CGSize { 
        double width; 
        double height; 
    }  __videoSize;
    _ISAVPlayerView * __videoView;
    ISVitalityInput * __vitalityInput;
    bool  _allowReversePlayback;
    ISPlayerOutputContent * _content;
    <ISPlayerViewDelegate> * _delegate;
    struct { 
        unsigned int respondsToStateDidChange : 1; 
        unsigned int respondsToWillBeginVisualPlayback : 1; 
        unsigned int respondsToDidEndVisualPlayback : 1; 
        unsigned int respondsToDidPlaybackVideoAssetToEnd : 1; 
        unsigned int respondsToWillPlaybackVideoAssetToEnd : 1; 
        unsigned int respondsToDelegateForGestureReognizer : 1; 
        unsigned int respondsToViewHostingGestureRecognizer : 1; 
        unsigned int respondsToIsInteractingDidChange : 1; 
        unsigned int respondsToGestureRecognizerDidChange : 1; 
        unsigned int respondsToPlayerItemDidChange : 1; 
    }  _delegateFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensionsOfReservedVideoMemory;
    NSError * _error;
    bool  _interactivePlaybackAllowed;
    bool  _isInteracting;
    bool  _isReadyForDisplay;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    CALayer * _overridePhotoLayer;
    double  _photoScale;
    bool  _photoViewHidden;
    ISPlaybackSpec * _playbackSpec;
    long long  _playbackState;
    unsigned long long  _playbackStyle;
    ISPlayer * _player;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scaleAnchorOffset;
    double  _scrubOffset;
    long long  _scrubRegion;
    bool  _shouldManagePlayerItemLoading;
    bool  _showCrossfadeBorder;
    bool  _showDebugInfo;
    bool  _showVideoBorder;
    long long  _status;
    bool  _useSingletonPlayer;
    ISWrappedAVPlayer * _videoPlayer;
    bool  _vitalityAllowed;
    ISVitalityFilter * _vitalityFilter;
    UIScrollView * _vitalityScrollView;
}

@property (nonatomic, readonly) NSMutableSet *_activeGestures;
@property (setter=_setAudioVolumeInput:, nonatomic, retain) ISAudioVolumeInput *_audioVolumeInput;
@property (getter=_isCrossfadeEnabled, setter=_setCrossfadeEnabled:, nonatomic) bool _crossfadeEnabled;
@property (setter=_setCrossfadeView:, nonatomic, retain) _ISCrossfadeView *_crossfadeView;
@property (setter=_setDebugInfoView:, nonatomic, retain) _ISPlayerDebugView *_debugInfoView;
@property (setter=_setForceTouchStatusObserver:, nonatomic, retain) id _forceTouchStatusObserver;
@property (setter=_setMutedAudioInput:, nonatomic, retain) ISMutedAudioInput *_mutedAudioInput;
@property (setter=_setNeedsNewDriver:, nonatomic) bool _needsNewDriver;
@property (setter=_setNeedsUpdateDebugView:, nonatomic) bool _needsUpdateDebugView;
@property (setter=_setPhotoContainerView:, nonatomic, retain) UIView *_photoContainerView;
@property (setter=_setPhotoView:, nonatomic, retain) _ISTargetView *_photoView;
@property (setter=_setPlaybackInput:, nonatomic, retain) ISGestureInput *_playbackInput;
@property (setter=_setPlayerObservationToken:, nonatomic, retain) <NSObject> *_playerObservationToken;
@property (getter=_isPlayerTransitioning, setter=_setPlayerTransitioning:, nonatomic) bool _playerTransitioning;
@property (setter=_setVideoContainerView:, nonatomic, retain) UIView *_videoContainerView;
@property (nonatomic, readonly) _ISTargetView *_videoMaskView;
@property (setter=_setVideoSize:, nonatomic) struct CGSize { double x1; double x2; } _videoSize;
@property (setter=_setVideoView:, nonatomic, retain) _ISAVPlayerView *_videoView;
@property (setter=_setVitalityInput:, nonatomic, retain) ISVitalityInput *_vitalityInput;
@property (nonatomic) bool allowReversePlayback;
@property (nonatomic) bool audioMuted;
@property (nonatomic) float audioVolume;
@property (nonatomic, retain) ISPlayerOutputContent *content;
@property (nonatomic, readonly) CALayer *crossfadeLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISPlayerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } dimensionsOfReservedVideoMemory;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (getter=isInteractivePlaybackAllowed, nonatomic) bool interactivePlaybackAllowed;
@property (setter=_setInteracting:, nonatomic) bool isInteracting;
@property (nonatomic, readonly) bool isReadyForDisplay;
@property (nonatomic, readonly) ISLivePhotoPlayer *livePhotoPlayer;
@property (nonatomic, retain) CALayer *overridePhotoLayer;
@property (nonatomic, readonly) CALayer *photoLayer;
@property (nonatomic) double photoScale;
@property (getter=isPhotoViewHidden, nonatomic) bool photoViewHidden;
@property (nonatomic) double playThreshold;
@property (nonatomic, retain) ISPlaybackSpec *playbackSpec;
@property (setter=_setPlaybackState:, nonatomic) long long playbackState;
@property (nonatomic) unsigned long long playbackStyle;
@property (nonatomic, retain) ISPlayer *player;
@property (getter=isPlayingVitality, nonatomic, readonly) bool playingVitality;
@property (getter=isPlayingVitalityHint, nonatomic, readonly) bool playingVitalityHint;
@property (nonatomic) struct CGPoint { double x1; double x2; } scaleAnchorOffset;
@property (nonatomic) double scrubOffset;
@property (nonatomic) long long scrubRegion;
@property (nonatomic) double scrubThreshold;
@property (nonatomic) bool shouldManagePlayerItemLoading;
@property (nonatomic) bool showCrossfadeBorder;
@property (nonatomic) bool showDebugInfo;
@property (nonatomic) bool showVideoBorder;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;
@property (getter=isUsingSingletonPlayer, nonatomic) bool useSingletonPlayer;
@property (nonatomic, readonly) CALayer *videoLayer;
@property (getter=isVitalityAllowed, nonatomic) bool vitalityAllowed;
@property (nonatomic, retain) ISVitalityFilter *vitalityFilter;
@property (nonatomic) UIScrollView *vitalityScrollView;

+ (void)initialize;
+ (void)resetCaches;
+ (void)setAllowPlayerReuse:(bool)arg1;

- (void).cxx_destruct;
- (id)_activeGestures;
- (void)_addPlayerObservers;
- (id)_audioVolumeInput;
- (double)_backingScaleFactor;
- (void)_configureForPlaybackSpec:(id)arg1;
- (id)_crossfadeView;
- (id)_debugInfoView;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)_forceTouchStatusDidChange:(id)arg1;
- (id)_forceTouchStatusObserver;
- (void)_handleGesture:(id)arg1;
- (void)_invalidateDebugView;
- (bool)_isCrossfadeEnabled;
- (bool)_isPlayerTransitioning;
- (void)_layoutPhotoView;
- (id)_mutedAudioInput;
- (bool)_needsNewDriver;
- (bool)_needsUpdateDebugView;
- (id)_photoContainerView;
- (long long)_photoOrientation;
- (struct CGSize { double x1; double x2; })_photoSize;
- (id)_photoView;
- (id)_playbackInput;
- (Class)_playbackInputClass;
- (void)_playerDidChangePlayerItem;
- (id)_playerObservationToken;
- (void)_playerPlaybackStateDidChange;
- (void)_removePlayerObservers;
- (void)_setAudioVolumeInput:(id)arg1;
- (void)_setCrossfadeEnabled:(bool)arg1;
- (void)_setCrossfadeView:(id)arg1;
- (void)_setDebugInfoView:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setForceTouchStatusObserver:(id)arg1;
- (void)_setInteracting:(bool)arg1;
- (void)_setMutedAudioInput:(id)arg1;
- (void)_setNeedsNewDriver:(bool)arg1;
- (void)_setNeedsUpdateDebugView:(bool)arg1;
- (void)_setPhotoContainerView:(id)arg1;
- (void)_setPhotoView:(id)arg1;
- (void)_setPlaybackInput:(id)arg1;
- (void)_setPlaybackState:(long long)arg1;
- (void)_setPlayerObservationToken:(id)arg1;
- (void)_setPlayerTransitioning:(bool)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setVideoContainerView:(id)arg1;
- (void)_setVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVideoView:(id)arg1;
- (void)_setVitalityInput:(id)arg1;
- (void)_updateContainerViews;
- (void)_updateCrossfadeLayer;
- (void)_updateDebugViewIfNeeded;
- (void)_updatePhotoViewVisibility;
- (void)_updatePlaybackInput;
- (void)_updatePlayerParameters;
- (void)_updateStatus;
- (void)_updateSubviewOrdering;
- (void)_updateVideoBorder;
- (void)_updateVideoLayer;
- (void)_updateVitalityInput;
- (id)_videoContainerView;
- (id)_videoMaskView;
- (struct CGSize { double x1; double x2; })_videoSize;
- (id)_videoView;
- (id)_vitalityInput;
- (bool)allowReversePlayback;
- (bool)audioMuted;
- (float)audioVolume;
- (void)awakeFromNib;
- (void)cancelGestureRecognizers;
- (id)content;
- (id)contentLayer;
- (id)crossfadeLayer;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (struct CGSize { double x1; double x2; })dimensionsOfReservedVideoMemory;
- (id)error;
- (id)gestureInput:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)gestureInput:(id)arg1 viewHostingGestureRecognizer:(id)arg2;
- (void)gestureInputGestureRecognizerDidChange:(id)arg1;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateGestureRecognizers;
- (bool)isInteracting;
- (bool)isInteractivePlaybackAllowed;
- (bool)isPhotoViewHidden;
- (bool)isPlayingVitality;
- (bool)isPlayingVitalityHint;
- (bool)isReadyForDisplay;
- (bool)isSupportedContentMode:(long long)arg1;
- (bool)isUsingSingletonPlayer;
- (bool)isVitalityAllowed;
- (void)layoutSubviews;
- (id)livePhotoPlayer;
- (id)overridePhotoLayer;
- (id)photoLayer;
- (double)photoScale;
- (double)playThreshold;
- (void)playVitalityHint;
- (id)playbackSpec;
- (long long)playbackState;
- (unsigned long long)playbackStyle;
- (id)player;
- (void)player:(id)arg1 didChangePlaybackState:(long long)arg2;
- (void)player:(id)arg1 didChangePlayerItem:(id)arg2;
- (void)player:(id)arg1 didChangePlayerStatus:(long long)arg2;
- (void)playerDidEndTransitionToPlaybackState:(long long)arg1;
- (void)playerDidPlayVideoToEnd;
- (void)playerPlayingVitalityChanged:(id)arg1;
- (void)playerWillBeginTransitionToPlaybackState:(long long)arg1;
- (void)playerWillPlayVideoToEnd;
- (void)prepareWithBundleURL:(id)arg1;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPlayerItem:(id)arg1;
- (void)registerObserver:(id)arg1;
- (struct CGPoint { double x1; double x2; })scaleAnchorOffset;
- (double)scrubOffset;
- (long long)scrubRegion;
- (double)scrubThreshold;
- (void)seekForVitalityHintIfNeeded;
- (void)setAllowReversePlayback:(bool)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setContent:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (void)setInteractivePlaybackAllowed:(bool)arg1;
- (void)setOverridePhotoLayer:(id)arg1;
- (void)setPhotoScale:(double)arg1;
- (void)setPhotoViewHidden:(bool)arg1;
- (void)setPlayThreshold:(double)arg1;
- (void)setPlaybackSpec:(id)arg1;
- (void)setPlaybackStyle:(unsigned long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrubOffset:(double)arg1;
- (void)setScrubRegion:(long long)arg1;
- (void)setScrubThreshold:(double)arg1;
- (void)setShouldManagePlayerItemLoading:(bool)arg1;
- (void)setShowCrossfadeBorder:(bool)arg1;
- (void)setShowDebugInfo:(bool)arg1;
- (void)setShowVideoBorder:(bool)arg1;
- (void)setUseSingletonPlayer:(bool)arg1;
- (void)setVitalityAllowed:(bool)arg1;
- (void)setVitalityEnabled:(bool)arg1 inScrollView:(id)arg2;
- (void)setVitalityFilter:(id)arg1;
- (void)setVitalityScrollView:(id)arg1;
- (bool)shouldManagePlayerItemLoading;
- (bool)showCrossfadeBorder;
- (bool)showDebugInfo;
- (bool)showVideoBorder;
- (long long)state;
- (long long)status;
- (id)supportedContentModes;
- (void)unregisterObserver:(id)arg1;
- (id)videoLayer;
- (id)videoPlayerForPlayer:(id)arg1;
- (id)vitalityFilter;
- (id)vitalityScrollView;

@end
