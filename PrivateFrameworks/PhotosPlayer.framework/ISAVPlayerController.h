/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAVPlayerController : NSObject <ISWrappedAVPlayerDelegate> {
    AVPlayerItem * __currentVideoPlayerItem;
    id  __didBeginPlaybackObserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __forwardPlaybackEndTime;
    float  __hintPlayRate;
    bool  __isPerfomingChanges;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __lastResetTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __lastSetForwardPlaybackEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __observedPlaybackNearEndTime;
    bool  __pendingReset;
    AVPlayerItem * __playerItemToObservePlaybackEnd;
    bool  __playersNeedUpdate;
    long long  __seekRequestID;
    bool  __seekingVideo;
    bool  __shouldPlayAudio;
    bool  __shouldPreroll;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedDuration;
    AVPlayerItem * _cachedDurationPlayerItem;
    <ISAVPlayerControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginPlaying; 
        bool respondsToWillEndPlaying; 
        bool respondsToDidEndPlaying; 
        bool respondsToDidEndSeeking; 
        bool respondsToPlayerDidChangeToStatus; 
    }  _delegateFlags;
    float  _playRate;
    float  _playVolume;
    id  _playbackNearEndTimeObserver;
    double  _prePhotoGapTime;
    long long  _state;
    ISWrappedAVPlayer * _videoPlayer;
}

@property (setter=_setCurrentVideoPlayerItem:, nonatomic, retain) AVPlayerItem *_currentVideoPlayerItem;
@property (setter=_setDidBeginPlaybackObserver:, nonatomic, retain) id _didBeginPlaybackObserver;
@property (setter=_setForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _forwardPlaybackEndTime;
@property (setter=_setHintPlayRate:, nonatomic) float _hintPlayRate;
@property (setter=_setPerformingChanges:, nonatomic) bool _isPerfomingChanges;
@property (setter=_setLastResetTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _lastResetTime;
@property (setter=_setLastSetForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _lastSetForwardPlaybackEndTime;
@property (setter=_setObservedPlaybackNearEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _observedPlaybackNearEndTime;
@property (getter=_hasPendingReset, setter=_setPendingReset:, nonatomic) bool _pendingReset;
@property (setter=_setPlayerItemToObservePlaybackEnd:, nonatomic, retain) AVPlayerItem *_playerItemToObservePlaybackEnd;
@property (nonatomic, readonly) bool _playersNeedUpdate;
@property (setter=_setSeekRequestID:, nonatomic) long long _seekRequestID;
@property (getter=_isSeekingVideo, setter=_setSeekingVideo:, nonatomic) bool _seekingVideo;
@property (setter=_setShouldPlayAudio:, nonatomic) bool _shouldPlayAudio;
@property (setter=_setShouldPreroll:, nonatomic) bool _shouldPreroll;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISAVPlayerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSeeking;
@property (nonatomic) float playRate;
@property (nonatomic) float playVolume;
@property (nonatomic) double prePhotoGapTime;
@property (setter=_setState:, nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (id)_currentVideoPlayerItem;
- (id)_didBeginPlaybackObserver;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (void)_handleSeekingRequest:(long long)arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 didFinish:(bool)arg3 startedTimestamp:(double)arg4;
- (bool)_hasPendingReset;
- (float)_hintPlayRate;
- (void)_invalidatePlayers;
- (bool)_isPerfomingChanges;
- (bool)_isSeekingVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_lastResetTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_lastSetForwardPlaybackEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_observedPlaybackNearEndTime;
- (void)_pauseVideo;
- (void)_playVideoWithAudioIfReady;
- (void)_playerItemDidFinishPlaying:(id)arg1;
- (id)_playerItemToObservePlaybackEnd;
- (void)_playerItemWillFinishPlaying;
- (bool)_playersNeedUpdate;
- (void)_safelyUpdateRateForPlayers;
- (long long)_seekRequestID;
- (void)_seekToDesiredTimeIfReady;
- (void)_setCurrentVideoPlayerItem:(id)arg1;
- (void)_setDidBeginPlaybackObserver:(id)arg1;
- (void)_setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setHintPlayRate:(float)arg1;
- (void)_setLastResetTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setLastSetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setObservedPlaybackNearEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setPendingReset:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setPlayerItemToObservePlaybackEnd:(id)arg1;
- (void)_setSeekRequestID:(long long)arg1;
- (void)_setSeekingVideo:(bool)arg1;
- (void)_setShouldPlayAudio:(bool)arg1;
- (void)_setShouldPreroll:(bool)arg1;
- (void)_setState:(long long)arg1;
- (bool)_shouldPlayAudio;
- (bool)_shouldPreroll;
- (void)_startPlayingFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRate:(float)arg3 shouldPlayAudio:(bool)arg4;
- (void)_updatePlayersIfNeeded;
- (void)_videoPlayerDidBeginPlaybackWithObserver:(id)arg1;
- (void)avPlayer:(id)arg1 didChangeToItem:(id)arg2;
- (void)avPlayer:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)avPlayer:(id)arg1 item:(id)arg2 didChangeToStatus:(long long)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (bool)isSeeking;
- (void)pause;
- (void)performChanges:(id /* block */)arg1;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRate:(float)arg3 shouldPlayAudio:(bool)arg4;
- (float)playRate;
- (float)playVolume;
- (double)prePhotoGapTime;
- (void)resetToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 hintEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 hintPlayRate:(float)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)setPlayVolume:(float)arg1;
- (void)setPrePhotoGapTime:(double)arg1;
- (long long)state;
- (id)videoPlayer;

@end
