/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISBasePlayerUIView : UIView <ISBasePlayerOutput> {
    UIView * __containerView;
    ISCrossfadeUIView * __crossfadeView;
    UIImageView * __photoView;
    ISVideoPlayerUIView * __videoView;
    UIView * _customPhotoView;
    ISBasePlayer * _player;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scaleAnchorOffset;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) ISCrossfadeUIView *_crossfadeView;
@property (nonatomic, readonly) UIImageView *_photoView;
@property (nonatomic, readonly) ISVideoPlayerUIView *_videoView;
@property (nonatomic, retain) UIView *customPhotoView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x1; double x2; } scaleAnchorOffset;
@property (readonly) Class superclass;

+ (Class)playerClass;

- (void).cxx_destruct;
- (id)_containerView;
- (id)_crossfadeView;
- (void)_performCommonInitialization;
- (id)_photoView;
- (id)_videoView;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)customPhotoView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)player;
- (void)playerDidChange;
- (struct CGPoint { double x1; double x2; })scaleAnchorOffset;
- (void)setContent:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCustomPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
