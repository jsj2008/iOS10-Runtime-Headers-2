/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeModuleView : NTKModuleView <NTKTimeView> {
    CLKUITimeLabelStyle * _defaultStyle;
    <NTKTimeModuleViewTapClient> * _tapDelegate;
    NTKDigitalTimeLabel * _timeLabel;
    CLKFont * _timeTravelFont;
    bool  _usesTimeTravelStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pausedForZooming;
@property (readonly) Class superclass;
@property (nonatomic) <NTKTimeModuleViewTapClient> *tapDelegate;
@property (readonly) NTKDigitalTimeLabel *timeLabel;

- (void).cxx_destruct;
- (id)_defaultStyle;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_idealTimeLabelFrame;
- (void)_layoutContentView;
- (id)_timeTravelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pausedForZooming;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setPausedForZooming:(bool)arg1;
- (void)setTapDelegate:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setUsesTimeTravelStyle:(bool)arg1;
- (id)tapDelegate;
- (id)timeLabel;

@end
