/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate> {
    SKUINavigationBarButtonsController * _buttonsController;
    SKUIClientContext * _clientContext;
    <SKUINavigationBarControllerDelegate> * _delegate;
    SKUINavigationBarContext * _navigationBarContext;
    SKUINavigationPaletteController * _paletteController;
    UIViewController * _parentViewController;
    NSMutableArray * _reusableSearchBarControllers;
    NSMapTable * _searchBarControllers;
    NSMutableArray * _sections;
    SKUIButtonViewElement * _titleButtonViewElement;
    SKUINavigationBarViewElement * _viewElement;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUINavigationBarControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *existingSearchBarControllers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUINavigationBarViewElement *navigationBarViewElement;
@property (nonatomic, readonly) UIView *navigationPaletteView;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (id)_attributedStringForButton:(id)arg1;
- (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3;
- (double)_availableWidth;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (id)_buttonWithElement:(id)arg1 width:(double)arg2;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (id)_navigationBarContext;
- (id)_resourceImageForImageElement:(id)arg1;
- (void)_titleButtonAction:(id)arg1;
- (void)_viewElementEventNotification:(id)arg1;
- (void)attachToNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)detachFromNavigationItem:(id)arg1;
- (id)existingSearchBarControllers;
- (id)fallbackTitleView;
- (id)initWithNavigationBarViewElement:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)navigationBarViewElement;
- (id)navigationPaletteView;
- (id)parentViewController;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBarViewElement:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setReusableSearchBarControllers:(id)arg1;
- (id)titleViewWithViewElement:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;

@end
