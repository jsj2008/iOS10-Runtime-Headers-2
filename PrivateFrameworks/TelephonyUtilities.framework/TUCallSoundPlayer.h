/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallSoundPlayer : NSObject {
    long long  _currentlyPlayingSoundType;
    TUSoundPlayer * _player;
}

@property (nonatomic) long long currentlyPlayingSoundType;
@property (nonatomic, retain) TUSoundPlayer *player;
@property (getter=isPlaying, nonatomic, readonly) bool playing;

- (void).cxx_destruct;
- (bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(id /* block */)arg3;
- (long long)currentlyPlayingSoundType;
- (id)init;
- (bool)isPlaying;
- (id)player;
- (void)setCurrentlyPlayingSoundType:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)stopPlaying;

@end
