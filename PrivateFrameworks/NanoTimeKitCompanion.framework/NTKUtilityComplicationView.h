/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilityComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay> {
    UIColor * _accentColor;
    UIImageView * _backgroundPlatter;
    NTKFaceColorScheme * _colorScheme;
    CLKComplicationTemplate * _complicationTemplate;
    bool  _editing;
    CLKFont * _font;
    double  _foregroundAlpha;
    UIColor * _foregroundColor;
    double  _foregroundImageAlpha;
    UIView * _highlightView;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    double  _minimumWidth;
    UIColor * _overrideColor;
    unsigned long long  _placement;
    UIColor * _shadowColor;
    bool  _shouldUseBackgroundPlatter;
    bool  _suppressesInternalColorOverrides;
    NSDate * _timeTravelDate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchEdgeInsets;
    bool  _useRoundedFontDesign;
    bool  _usesLegibility;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (nonatomic, readonly) bool editing;
@property (nonatomic, retain) CLKFont *font;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) double foregroundImageAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double minimumWidth;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) unsigned long long placement;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) bool shouldUseBackgroundPlatter;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesInternalColorOverrides;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchEdgeInsets;
@property (nonatomic) bool useRoundedFontDesign;
@property (nonatomic) bool usesLegibility;

+ (id)_alarmImageProviderActive:(bool)arg1;
+ (id)_preferredAdditionalFontSettings;
+ (id)_stopwatchImageProvider;
+ (id)_timerImageProvider;
+ (id)_worldClockImageProvider;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(bool)arg2;
+ (id)smallComplicationViewForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_applyColorScheme:(id)arg1;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1;
- (id)_newImageViewSubview;
- (id)_newImageViewSubviewWithAlpha:(double)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newStandardLabelSubview;
- (id)_smallCapsFont;
- (id)_standardFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_touchEdgeInsetsForPlacement:(unsigned long long)arg1;
- (void)_updateContentForEditingChange;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewAlpha:(id)arg1;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (double)_widthThatFits;
- (id)accentColor;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (id)colorScheme;
- (id)complicationTemplate;
- (id)displayObserver;
- (bool)editing;
- (id)font;
- (double)foregroundAlpha;
- (id)foregroundColor;
- (double)foregroundImageAlpha;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutLabelVertically:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)minimumWidth;
- (id)overrideColor;
- (unsigned long long)placement;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAccentColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComplicationTemplate:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundImageAlpha:(double)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShouldUseBackgroundPlatter:(bool)arg1;
- (void)setSuppressesInternalColorOverrides:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseRoundedFontDesign:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (id)shadowColor;
- (bool)shouldUseBackgroundPlatter;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)suppressesInternalColorOverrides;
- (id)timeTravelDate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchEdgeInsets;
- (bool)useRoundedFontDesign;
- (bool)usesLegibility;

@end
