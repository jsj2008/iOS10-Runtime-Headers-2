/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScrollView : UIWebScrollView {
    WKScrollViewDelegateForwarder * _delegateForwarder;
    <UIScrollViewDelegate> * _externalDelegate;
    WKWebView<UIScrollViewDelegate> * _internalDelegate;
    double  _preferredScrollDecelerationFactor;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;
@property (nonatomic, readonly) double preferredScrollDecelerationFactor;

- (struct CGSize { double x1; double x2; })_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x1; double x2; })arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateDelegate;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalDelegate;
- (double)preferredScrollDecelerationFactor;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;

@end
