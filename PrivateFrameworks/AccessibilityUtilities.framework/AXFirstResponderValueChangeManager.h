/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXFirstResponderValueChangeManager : NSObject

+ (id)sharedInstance;

- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(bool)arg3 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 shouldEchoDeletion:(bool)arg5 optionalValueChangeType:(unsigned long long)arg6 derivedValueChangeType:(unsigned long long*)arg7 didHitBorder:(bool*)arg8 isBreakSpaceCharacter:(bool*)arg9 isSingleInsert:(bool)arg10 selectionDeleted:(bool)arg11 feedbackType:(unsigned long long)arg12 textOperationOccurred:(bool*)arg13 lastKeyboardKeyPress:(double)arg14 isSingleCharacterInsertOrDelete:(bool*)arg15 singleInsertDeleteAttString:(id*)arg16 singleInsertDeleteString:(id*)arg17 isSingleCharacterUpdate:(bool*)arg18 wordRangeToFindMisspelled:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg19 pasteOperationSucceeded:(bool*)arg20;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldEchoDeletion:(bool)arg4 isSingleInsert:(bool)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7;

@end
