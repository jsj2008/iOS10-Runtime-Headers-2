/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionView : UICollectionView {
    bool  _animatingFavorite;
    UIVisualEffect * _blurEffect;
    NSIndexPath * _dragDestIndexPath;
    <PXPeopleDragAndDropCollectionViewDelegate> * _dragDropDelegate;
    PXPeopleHomeCollectionViewCell * _dragSourceCell;
    NSIndexPath * _dragSourceIndexPath;
    PXPeopleFavoritingShelfView * _favoriteShelfView;
    bool  _interactiveMode;
    bool  _validDrop;
}

@property (nonatomic) bool animatingFavorite;
@property (nonatomic, retain) UIVisualEffect *blurEffect;
@property (nonatomic, retain) NSIndexPath *dragDestIndexPath;
@property (nonatomic) <PXPeopleDragAndDropCollectionViewDelegate> *dragDropDelegate;
@property (nonatomic, retain) PXPeopleHomeCollectionViewCell *dragSourceCell;
@property (nonatomic, retain) NSIndexPath *dragSourceIndexPath;
@property (nonatomic, retain) PXPeopleFavoritingShelfView *favoriteShelfView;
@property (nonatomic) bool interactiveMode;
@property (nonatomic) bool validDrop;

- (void).cxx_destruct;
- (void)_animateShelfSlideIn;
- (void)_animateShelfSlideOutWithDroppedView:(id)arg1 completion:(id /* block */)arg2;
- (void)_autoscrollForReordering:(id)arg1;
- (unsigned long long)_favoriteShelfAppearance;
- (id)_footerAttributes;
- (double)_highestVisibleCellZOrder;
- (void)animateDropToFavoriteSection:(id /* block */)arg1;
- (void)animateDropToFavoriteShelf:(id /* block */)arg1;
- (bool)animatingFavorite;
- (bool)beginInteractiveMovementAtLocation:(struct CGPoint { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (id)blurEffect;
- (void)cancelInteractiveMovement;
- (id)dragDestIndexPath;
- (id)dragDropDelegate;
- (id)dragSourceCell;
- (id)dragSourceIndexPath;
- (bool)dropTargetIsFavoriteSection;
- (bool)dropTargetIsFavoriteShelf;
- (void)embedFavoriteShelf;
- (void)endInteractiveMovement;
- (id)favoriteShelfView;
- (bool)interactiveMode;
- (void)layoutSubviews;
- (void)reloadData;
- (void)removeFavoriteShelf;
- (void)resetTransformForSourceIndex:(id)arg1;
- (long long)sectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimatingFavorite:(bool)arg1;
- (void)setBlurEffect:(id)arg1;
- (void)setDragDestIndexPath:(id)arg1;
- (void)setDragDropDelegate:(id)arg1;
- (void)setDragSourceCell:(id)arg1;
- (void)setDragSourceIndexPath:(id)arg1;
- (void)setFavoriteShelfView:(id)arg1;
- (void)setInteractiveMode:(bool)arg1;
- (void)setValidDrop:(bool)arg1;
- (struct CGSize { double x1; double x2; })shelfSize;
- (void)showFavoriteShelfIfNeeded;
- (id)sortedIndexPathsForSelectedItems;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)validDrop;

@end
