/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    float  _currentVolume;
    NSString * _identifier;
    CKMessagePartChatItem * _triggeringChatItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKMessagePartChatItem *triggeringChatItem;

+ (id)_monochromeDimmingFilterWithType:(int)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_ensureAudioPlayer;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(bool*)arg2 orientation:(BOOL*)arg3;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)backgroundColor;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)dealloc;
- (double)duration;
- (bool)effectIsDark;
- (Class)effectViewClass;
- (id)identifier;
- (unsigned long long)layerCount;
- (id)messageFilters;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)setIdentifier:(id)arg1;
- (void)setTriggeringChatItem:(id)arg1;
- (bool)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (void)stopSoundEffect;
- (id)triggeringChatItem;

@end
