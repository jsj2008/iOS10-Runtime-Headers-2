/* Generated by RuntimeBrowser.
 */

@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>

@required

- (UIViewController *)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;

@optional

- (void)_didBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_didBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_didEndSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 wasSuccessful:(bool)arg2;
- (bool)_shouldPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_willBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_willPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;

@end
