/* Generated by RuntimeBrowser.
 */

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

@required

- (bool)hasContent;
- (bool)hasSelection;
- (UITextInteractionAssistant *)interactionAssistant;
- (void)selectAll;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional

- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (void)_didHideCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (SEL)_sendCurrentLocationAction;
- (bool)_shouldRepeatInsertText:(NSString *)arg1;
- (bool)_shouldSuppressSelectionCommands;
- (long long)_textInputSource;
- (void)_willShowCorrections;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (UIView *)automaticallySelectedOverlay;
- (UIFont *)fontForCaretSelection;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (void)handleKeyWebEvent:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: WebEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WebEvent *, bool, void*
- (void)insertDictationResult:(NSArray *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (bool)isAutoFillMode;
- (NSArray *)metadataDictionariesForDictationResults;
- (UITextRange *)rangeWithTextAlternatives:(id*)arg1 atPosition:(UITextPosition *)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (bool)requiresKeyEvents;
- (long long)selectionGranularity;
- (<UISelectionInteractionAssistant> *)selectionInteractionAssistant;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)set_textInputSource:(long long)arg1;
- (void)streamingDictationDidBegin;
- (void)streamingDictationDidEnd;
- (UIColor *)textColorForCaretSelection;
- (<UITextInputSuggestionDelegate> *)textInputSuggestionDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
