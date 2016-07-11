/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCD_OLD_TableViewController : UITableViewController {
    bool  _alwaysShowNavBar;
    AVExternalDevice * _externalDevice;
    bool  _limitedUI;
    UIView * _nowPlayingButton;
    MPAVController * _player;
    MPMediaQuery * _query;
    <MCDCarDisplayServiceProvider> * _serviceProvider;
    UIColor * _tintColor;
    bool  _topLevel;
    bool  _viewHasAppeared;
}

@property (nonatomic) bool alwaysShowNavBar;
@property (readonly) bool currentAppIsPlaying;
@property (nonatomic) bool limitedUI;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic, readonly) <MCDCarDisplayServiceProvider> *serviceProvider;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) bool topLevel;
@property (nonatomic) bool viewHasAppeared;

+ (void)_addTemplateImage:(id)arg1 toCell:(id)arg2 tintColor:(id)arg3;
+ (void)_adjustTintColor:(id)arg1 forSubviewsInCell:(id)arg2;
+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3;
+ (void)addGenericTemplateImage:(id)arg1 toCell:(id)arg2;
+ (void)addTemplateImage:(id)arg1 toCell:(id)arg2;
+ (void)matchingNowPlayingApplicationWithCompletionHandler:(id /* block */)arg1;
+ (void)removeImageFromCell:(id)arg1;

- (void).cxx_destruct;
- (void)_itemChanged:(id)arg1;
- (void)_itemDidChange;
- (void)_limitedUIDidChange;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_updateNowPlayingPlayingVisibilityWithCompletionHandler:(id /* block */)arg1;
- (void)_updateNowPlayingVisibility;
- (bool)alwaysShowNavBar;
- (bool)currentAppIsPlaying;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2;
- (bool)hasRowsToDisplay;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (bool)limitedUI;
- (id)player;
- (id)preferredFocusedItem;
- (id)query;
- (id)serviceProvider;
- (void)setAlwaysShowNavBar:(bool)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopLevel:(bool)arg1;
- (void)setViewHasAppeared:(bool)arg1;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (id)tintColor;
- (bool)topLevel;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewHasAppeared;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
