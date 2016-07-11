/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAudioRep : TSDMediaRep <TSDPlayableMediaRep> {
    AVAsset * mAssetForPlayabilityCheck;
    <TSDAudioHUDController> * mAudioHUDController;
    CALayer * mAudioImageLayer;
    bool  mDidCheckPlayability;
    float  mDynamicVolume;
    bool  mIsChangingDynamicVolume;
    bool  mIsPlayable;
    TSKAVPlayerController * mPlayerController;
    CALayer * mSpinnerLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (readonly) Class superclass;

- (bool)canResetMediaSize;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isPlayable;
- (Class)layerClass;
- (id)movieInfo;
- (bool)shouldAllowReplacementFromDrop;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldShowMediaReplaceUI;

@end
