/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoPlaybackManager : NSObject {
    NSHashTable * _videoViews;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)_muteAllPlayingVideoViewsExcept:(id)arg1;
- (bool)_sharedSessionHasPlayingAudio;
- (void)_updateAudioSessionCategory;
- (void)addVideoView:(id)arg1;
- (id)audioSession;
- (id)init;
- (void)removeVideoView:(id)arg1;
- (void)videoView:(id)arg1 didChangeMutedState:(bool)arg2;
- (void)videoView:(id)arg1 didChangePlayingState:(bool)arg2;

@end
