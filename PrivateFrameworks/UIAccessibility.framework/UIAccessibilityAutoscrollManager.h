/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityAutoscrollManager : NSObject {
    double  _autoscrollSpeed;
    bool  _autoscrolling;
    int  _scrollDirection;
    UIScrollView * _scrollView;
}

@property (nonatomic) double autoscrollSpeed;
@property (getter=isAutoscrolling, nonatomic) bool autoscrolling;
@property (nonatomic) int scrollDirection;
@property (nonatomic, retain) UIScrollView *scrollView;

+ (id)sharedInstance;

- (void)_autoscroll;
- (void)autoscrollInDirection:(int)arg1;
- (double)autoscrollSpeed;
- (int)availableAutoscrollDirections;
- (void)dealloc;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (id)init;
- (bool)isAutoscrolling;
- (void)pause;
- (int)scrollDirection;
- (void)scrollToBottom;
- (void)scrollToTop;
- (id)scrollView;
- (void)setAutoscrollSpeed:(double)arg1;
- (void)setAutoscrolling:(bool)arg1;
- (void)setScrollDirection:(int)arg1;
- (void)setScrollView:(id)arg1;

@end
