/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoUIView : ISBasePlayerUIView <ISChangeObserver, UIGestureRecognizerDelegate, UIInteractionProgressObserver> {
    AVAudioSession * __audioSession;
    UIPreviewForceInteractionProgress * __interactionProgress;
    long long  __overlayDismissalID;
    UILabel * __overlayLabel;
    ISLivePhotoPlaybackFilter * __playbackFilter;
    bool  __playingVitality;
    bool  __useForceTouch;
    NSObject<OS_dispatch_queue> * _audioSessionQueue;
    UIGestureRecognizer * _playbackGestureRecognizer;
}

@property (setter=_setAudioSession:, nonatomic, retain) AVAudioSession *_audioSession;
@property (nonatomic, readonly) UIPreviewForceInteractionProgress *_interactionProgress;
@property (setter=_setOverlayDismissalID:, nonatomic) long long _overlayDismissalID;
@property (nonatomic, readonly) UILabel *_overlayLabel;
@property (setter=_setPlaybackFilter:, nonatomic, retain) ISLivePhotoPlaybackFilter *_playbackFilter;
@property (setter=_setPlayingVitality:, nonatomic) bool _playingVitality;
@property (setter=_setUseForceTouch:, nonatomic) bool _useForceTouch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic, retain) ISLivePhotoPlayer *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (id)_audioSession;
- (void)_dismissOverlayLabel:(long long)arg1;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (id)_interactionProgress;
- (long long)_overlayDismissalID;
- (id)_overlayLabel;
- (id)_playbackFilter;
- (Class)_playbackFilterClass;
- (bool)_playingVitality;
- (void)_setAudioSession:(id)arg1;
- (void)_setOverlayDismissalID:(long long)arg1;
- (void)_setPlaybackFilter:(id)arg1;
- (void)_setPlayingVitality:(bool)arg1;
- (void)_setUseForceTouch:(bool)arg1;
- (void)_showOverlayLabel;
- (void)_updateForceInteractionProgress;
- (void)_updatePlaybackFilter;
- (void)_updatePlaybackFilterInput;
- (bool)_useForceTouch;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)livePhotoPlayer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playbackGestureRecognizer;
- (void)playerDidChange;
- (void)setPlayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
