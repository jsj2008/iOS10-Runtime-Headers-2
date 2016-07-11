/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIForceTouchGestureRecognizer : SBUIForceTouchGestureRecognizer {
    SBFApplication * _application;
    bool  _canHaveSmallSpotlightIcons;
    SFSearchResult * _result;
    <SearchUIFeedbackDelegatePrivate> * _selectionDelegate;
    UIView * _thumbnailView;
}

@property (retain) SBFApplication *application;
@property bool canHaveSmallSpotlightIcons;
@property (retain) SFSearchResult *result;
@property <SearchUIFeedbackDelegatePrivate> *selectionDelegate;
@property (retain) UIView *thumbnailView;

- (void).cxx_destruct;
- (id)application;
- (id)bundleID;
- (id)bundleURL;
- (bool)canHaveSmallSpotlightIcons;
- (double)cornerRadius;
- (void)iconButtonPressed;
- (id)initWithView:(id)arg1 canHaveSmallSpotlightIcons:(bool)arg2 selectionDelegate:(id)arg3;
- (id)result;
- (id)selectionDelegate;
- (void)setApplication:(id)arg1;
- (void)setCanHaveSmallSpotlightIcons:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (id)shortcutItems;
- (id)thumbnailView;
- (id)thumbnailViewCopy;
- (void)updateApplicationIfNecessary;
- (void)updateWithResult:(id)arg1;
- (id)widgetBundleID;

@end
