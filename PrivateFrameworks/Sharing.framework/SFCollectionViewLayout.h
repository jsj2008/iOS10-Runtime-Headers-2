/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCollectionViewLayout : UICollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedContentSize;
    double  _evaluatedHorizontalItemOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _evaluatedInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedItemSize;
    NSArray * _preparedLayoutAttributes;
    NSArray * _preparedUpdateItems;
}

@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } evaluatedInset;
@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedItemSize;
@property (nonatomic, copy) NSArray *preparedLayoutAttributes;
@property (nonatomic, copy) NSArray *preparedUpdateItems;

- (void).cxx_destruct;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x1; double x2; })arg1 containerWidth:(double)arg2 inset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (bool)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })evaluatedContentSize;
- (double)evaluatedHorizontalItemOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })evaluatedInset;
- (struct CGSize { double x1; double x2; })evaluatedItemSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { double x1; double x2; })firstItemCenterForContainerWidth:(double)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(bool)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)preparedLayoutAttributes;
- (id)preparedUpdateItems;
- (void)setEvaluatedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEvaluatedHorizontalItemOffset:(double)arg1;
- (void)setEvaluatedInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEvaluatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreparedLayoutAttributes:(id)arg1;
- (void)setPreparedUpdateItems:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
