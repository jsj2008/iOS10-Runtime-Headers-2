/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingArtworkView : UIView {
    bool  _activated;
    UIView * _artworkContainerView;
    UIView * _artworkHighlightOverlay;
    UIImageView * _artworkImageView;
    UIButton * _button;
    UIImage * _placeholderImage;
}

@property (nonatomic) bool activated;
@property (nonatomic, retain) UIImage *artworkImage;

- (void).cxx_destruct;
- (void)_init;
- (void)_touchControlActivate:(id)arg1;
- (void)_touchControlDeactivate:(id)arg1;
- (bool)activated;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)artworkImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setActivated:(bool)arg1;
- (void)setActivated:(bool)arg1 animated:(bool)arg2;
- (void)setArtworkImage:(id)arg1;

@end
