/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLTextItemViewController : QLItemViewController <QLPrintingProtocol, UITextViewDelegate> {
    NSAttributedString * _content;
    UIPrintPageRenderer * _pageRenderer;
    UISimpleTextPrintFormatter * _printFormatter;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIPrintPageRenderer *pageRenderer;
@property (readonly) UISimpleTextPrintFormatter *printFormatter;
@property (readonly) Class superclass;

+ (void)stringFromPreviewItem:(id)arg1 withAttributes:(id*)arg2 error:(id*)arg3 completionBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadView;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)pageRenderer;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)printFormatter;
- (id)printer;
- (id)registeredKeyCommands;
- (id)scrollView;
- (bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
