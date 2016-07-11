/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {
    UIButton * _labelButton;
    CNRepeatingGradientSeparatorView * _vseparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *labelButton;
@property (nonatomic, readonly) double leftValueMargin;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNRepeatingGradientSeparatorView *vseparator;

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;
+ (bool)wantsChevron;
+ (bool)wantsStandardConstraints;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)dealloc;
- (double)effectiveLabelWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelButton;
- (void)labelButtonClicked:(id)arg1;
- (id)labelView;
- (double)leftValueMargin;
- (double)minCellHeight;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)setVseparator:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)valueString;
- (id)vseparator;

@end
