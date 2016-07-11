/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate> {
    AKAnnotation<AKTextAnnotationProtocol> * _annotation;
    AKController * _controller;
    bool  _inEndEditing;
    AKPageController * _pageController;
    double  _renderingTextStorageScaleFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingContentInset;
    NSTextStorage * _textStorage;
    UITextView * _textView;
    NSUndoManager * _textViewUndoManager;
}

@property AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInEndEditing) bool inEndEditing;
@property (nonatomic, readonly) bool isEditing;
@property AKPageController *pageController;
@property double renderingTextStorageScaleFactor;
@property struct CGPoint { double x1; double x2; } startingContentInset;
@property (readonly) Class superclass;
@property (retain) NSTextStorage *textStorage;
@property (retain) UITextView *textView;
@property (retain) NSUndoManager *textViewUndoManager;

- (void).cxx_destruct;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustScrollViewForShownKeyboardRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(bool)arg3;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_endEditing;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_performBlockOnMainThread:(id /* block */)arg1;
- (void)_registerForKeyboardNotifications;
- (void)_returnScrollViewAfterShownKeyboard;
- (void)_unregisterForKeyboardNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (id)annotation;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(bool)arg3;
- (void)commitToModelWithoutEndingEditing;
- (id)controller;
- (void)dealloc;
- (void)endEditing;
- (id)initWithController:(id)arg1;
- (bool)isEditing;
- (bool)isInEndEditing;
- (id)pageController;
- (double)renderingTextStorageScaleFactor;
- (void)setAnnotation:(id)arg1;
- (void)setController:(id)arg1;
- (void)setInEndEditing:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)setRenderingTextStorageScaleFactor:(double)arg1;
- (void)setStartingContentInset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTextViewUndoManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })startingContentInset;
- (id)textStorage;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)textViewUndoManager;
- (void)updateForTextAttributeChange;

@end
