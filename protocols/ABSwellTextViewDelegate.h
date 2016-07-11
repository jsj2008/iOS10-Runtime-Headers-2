/* Generated by RuntimeBrowser.
 */

@protocol ABSwellTextViewDelegate <NSObject>

@required

- (void)swellTextView:(ABSwellTextView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)swellTextViewDidBeginEditing:(ABSwellTextView *)arg1;
- (void)swellTextViewDidEndEditing:(ABSwellTextView *)arg1;
- (bool)swellTextViewShouldBeginEditing:(ABSwellTextView *)arg1;
- (bool)swellTextViewShouldEndEditing:(ABSwellTextView *)arg1;
- (void)swellTextViewTextDidChange:(ABSwellTextView *)arg1;

@end
