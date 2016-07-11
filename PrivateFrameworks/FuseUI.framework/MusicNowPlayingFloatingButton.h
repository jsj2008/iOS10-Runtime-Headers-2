/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingFloatingButton : UIButton {
    MusicNowPlayingAtmosphericEffectView * _effectView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _glyphImageOffset;
    UIImageView * _glyphImageView;
    bool  _hideShadow;
    UIImageView * _shadowView;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic) long long effect;
@property (nonatomic, retain) MusicNowPlayingAtmosphericEffectView *effectView;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic) struct UIOffset { double x1; double x2; } glyphImageOffset;
@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic) bool hideShadow;
@property (nonatomic, retain) UIImageView *shadowView;

- (void).cxx_destruct;
- (id)backdropGroupName;
- (long long)effect;
- (id)effectView;
- (id)glyphImage;
- (struct UIOffset { double x1; double x2; })glyphImageOffset;
- (id)glyphImageView;
- (bool)hideShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackdropGroupName:(id)arg1;
- (void)setEffect:(long long)arg1;
- (void)setEffectView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImageOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setHideShadow:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
