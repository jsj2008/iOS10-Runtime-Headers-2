/* Generated by RuntimeBrowser.
 */

@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>

@optional

- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canShowCommentsForAsset:(id <PUDisplayAsset>)arg2;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 didTapPlayPauseButton:(bool)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 isAccessoryAvailableForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerDidTapTitle:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleCommentsVisibility:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(PUOneUpBarsController *)arg1;

@end
