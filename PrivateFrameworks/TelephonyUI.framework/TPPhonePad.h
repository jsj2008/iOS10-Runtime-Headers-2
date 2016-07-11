/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol> {
    double  _bottomHeight;
    <TPDialerKeypadDelegate> * _delegate;
    unsigned int  _delegateSoundCallbacks;
    long long  _downKey;
    long long  _highlightKey;
    unsigned int  _incompleteSounds;
    struct __CFSet { } * _inflightSounds;
    struct __CFDictionary { } * _keyToButtonMap;
    double  _leftWidth;
    double  _midHeight;
    double  _midWidth;
    bool  _playsSounds;
    double  _rightWidth;
    unsigned int  _soundsActivated;
    double  _topHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_delayedDeactivate;
+ (bool)launchFieldTestIfNeeded:(id)arg1;
+ (bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_activateSounds:(bool)arg1;
- (void)_appResumed;
- (void)_appSuspended;
- (id)_buttonForKeyAtIndex:(unsigned long long)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;
- (void)_handleKeyPressAndHoldForKey:(long long)arg1;
- (id)_highlightedImage;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)_keyForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_keypadImage;
- (struct CGPoint { double x1; double x2; })_keypadOrigin;
- (void)_notifySoundCompletionIfNecessary:(unsigned int)arg1;
- (void)_playSoundForKey:(unsigned long long)arg1;
- (id)_pressedImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForKey:(unsigned long long)arg1;
- (void)_stopAllSoundsForcingCallbacks:(bool)arg1;
- (void)_stopSoundForKey:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withScale:(double)arg2;
- (double)_yFudge;
- (bool)cancelTouchTracking;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)highlightKeyAtIndex:(long long)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)indexForHighlightedKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)movedFromWindow:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeedsDisplayForKey:(int)arg1;
- (void)setPlaysSounds:(bool)arg1;

@end
