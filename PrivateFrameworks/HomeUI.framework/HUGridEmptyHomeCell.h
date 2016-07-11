/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridEmptyHomeCell : UICollectionViewCell <HUGridCellProtocol> {
    HUColoredButton * _addAccessoryButton;
    bool  _cellContentsHidden;
    NSArray * _constraints;
    <HUGridEmptyHomeCellDelegate> * _delegate;
    UILabel * _instructionsLabel;
    HFItem * _item;
    HUGridCellLayoutOptions * _layoutOptions;
}

@property (nonatomic, retain) HUColoredButton *addAccessoryButton;
@property (getter=areCellContentsHidden, nonatomic) bool cellContentsHidden;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUGridEmptyHomeCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *instructionsLabel;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;
@property (getter=isRearranging, nonatomic) bool rearranging;
@property (readonly) Class superclass;

+ (double)instructionsLabelBaselineToButtonConstant;
+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_addNewAccessory:(id)arg1;
- (void)_setupCommonCellAppearance;
- (id)addAccessoryButton;
- (bool)areCellContentsHidden;
- (id)constraints;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionsLabel;
- (id)item;
- (id)layoutOptions;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setAddAccessoryButton:(id)arg1;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstructionsLabel:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
