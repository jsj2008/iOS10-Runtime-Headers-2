/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroIOSPlayerViewController : MiroPlayerViewController <MiroEditorViewControllerDelegate, MiroMovieDisplayContainerViewControllerDelegate, MiroSliderViewControllerDataSource, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    bool  _askedToCreateMemory;
    MiroAutoEditController * _autoEditController;
    NSLayoutConstraint * _bottomBarBottomConstraint;
    NSLayoutConstraint * _bottomBarHeightConstraint;
    NSLayoutConstraint * _bottomScrubberHeightConstraint;
    UIButton * _cancelButton;
    bool  _controlVisibility;
    bool  _customDurationSelected;
    bool  _didDragSlider;
    NSArray * _durationDisplayNames;
    NSLayoutConstraint * _durationHeightConstraint;
    MiroSliderViewController * _durationSlider;
    NSError * _error;
    NSLayoutConstraint * _horizontalCenteredLabel;
    NSLayoutConstraint * _horizontalOffsetLabel;
    double  _initialDuration;
    NSString * _initialMood;
    UILabel * _label;
    RoundProgressView * _landscapeProgressView;
    NSLayoutConstraint * _moodHeightConstraint;
    MiroSliderViewController * _moodSlider;
    MiroMovieDisplayContainerViewController * _movieContainerViewController;
    UIView * _overlayContainerView;
    UIView * _placeholderView;
    unsigned long long  _playerSpinnerState;
    UIView * _progressContainerView;
    bool  _progressIncludesDownload;
    NSLayoutConstraint * _progressTopLine;
    RoundProgressView * _progressView;
    UIScreenEdgePanGestureRecognizer * _screenEdgePanLeftGestureRecognizer;
    MiroVideoScrubberContainerViewController * _scrubberContainer;
    int  _selectedDuration;
    UIBarButtonItem * _shareBBItem;
    bool  _shouldPlayOnAppearance;
    bool  _showCancelButton;
    UIView * _sourcePlaceholderView;
    unsigned long long  _startTime;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeAtTeardown;
    UILabel * _titleLabel;
    NSLayoutConstraint * _verticalCenteredLabel;
    NSLayoutConstraint * _verticalProgressLabelSpace;
}

@property (nonatomic, readonly) UIBarButtonItem *activityBBItem;
@property (nonatomic) bool askedToCreateMemory;
@property (retain) MiroAutoEditController *autoEditController;
@property (nonatomic, readonly) UIBarButtonItem *backBBItem;
@property (nonatomic, retain) NSLayoutConstraint *bottomBarBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomBarHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomScrubberHeightConstraint;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) bool controlVisibility;
@property bool customDurationSelected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didDragSlider;
@property (nonatomic, retain) NSArray *durationDisplayNames;
@property (nonatomic, retain) NSLayoutConstraint *durationHeightConstraint;
@property (nonatomic, retain) MiroSliderViewController *durationSlider;
@property (nonatomic, readonly) UIBarButtonItem *editBBItem;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) UIBarButtonItem *flexSpaceBBItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *horizontalOffsetLabel;
@property (nonatomic) double initialDuration;
@property (nonatomic, retain) NSString *initialMood;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) RoundProgressView *landscapeProgressView;
@property (nonatomic, retain) NSLayoutConstraint *moodHeightConstraint;
@property (nonatomic, retain) MiroSliderViewController *moodSlider;
@property (nonatomic, retain) MiroMovieDisplayContainerViewController *movieContainerViewController;
@property (nonatomic, readonly) UIBarButtonItem *navBarShareBBItem;
@property (nonatomic, retain) UIView *overlayContainerView;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, readonly) UIBarButtonItem *playPauseBBItem;
@property unsigned long long playerSpinnerState;
@property (nonatomic, retain) UIView *progressContainerView;
@property (nonatomic) bool progressIncludesDownload;
@property (nonatomic, retain) NSLayoutConstraint *progressTopLine;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic, retain) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer;
@property (nonatomic, retain) MiroVideoScrubberContainerViewController *scrubberContainer;
@property (nonatomic) int selectedDuration;
@property (nonatomic, retain) UIBarButtonItem *shareBBItem;
@property bool shouldPlayOnAppearance;
@property (nonatomic) bool showCancelButton;
@property (nonatomic, retain) UIView *sourcePlaceholderView;
@property unsigned long long startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeAtTeardown;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalProgressLabelSpace;

- (void).cxx_destruct;
- (id)_addHorizontalDividerToSuperView:(id)arg1 constrainedToYAxisAnchor:(id)arg2;
- (void)_addToggleControlsGestureRecognizer;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_autoEditOnAppear;
- (void)_cancelProgress:(id)arg1;
- (unsigned long long)_countForDurationOptions;
- (void)_endAggDTimer;
- (void)_exportDidEnd:(id)arg1;
- (void)_exportWillBegin:(id)arg1;
- (void)_launchAutoEditDebugView:(id)arg1;
- (void)_mediaServicesReset:(id)arg1;
- (void)_memoryEditorWithCompletion:(id /* block */)arg1;
- (id)_moodIDForIndexPath:(id)arg1;
- (void)_movePlayerToBeginning;
- (void)_resetAudioSession;
- (void)_resetMovieAndUserInterface;
- (void)_setupBottomToolbar;
- (void)_setupProgressScreen;
- (void)_startAggDTimer;
- (void)_updateControls;
- (void)_updateDurationSlider;
- (void)_updateMoodSlider;
- (void)_updateTitleButton:(id)arg1;
- (id)activityBBItem;
- (void)airPlayDidEnd;
- (bool)askedToCreateMemory;
- (id)autoEditController;
- (void)back:(id)arg1;
- (id)backBBItem;
- (id)bottomBarBottomConstraint;
- (id)bottomBarHeightConstraint;
- (id)bottomScrubberHeightConstraint;
- (id)cancelButton;
- (bool)controlVisibility;
- (unsigned long long)countForSliderViewController:(id)arg1;
- (double)currentDuration;
- (bool)customDurationSelected;
- (void)dealloc;
- (void)debugPrefsStart:(id)arg1;
- (bool)didDragSlider;
- (void)didReceiveMemoryWarning;
- (id)displayNameForIndexPath:(id)arg1 forSliderViewController:(id)arg2;
- (id)durationDisplayNames;
- (id)durationHeightConstraint;
- (id)durationSlider;
- (id)editBBItem;
- (void)editSelector:(id)arg1;
- (void)editorViewController:(id)arg1 didEditMemory:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)error;
- (id)flexSpaceBBItem;
- (void)hideProgressScreen;
- (id)horizontalCenteredLabel;
- (id)horizontalOffsetLabel;
- (long long)indexForMoodID:(id)arg1;
- (double)initialDuration;
- (id)initialMood;
- (id)label;
- (id)labelText;
- (id)landscapeProgressView;
- (void)memoryDebugViewControllerDidFinish:(id)arg1;
- (void)memoryDidGetViewed;
- (id)moodHeightConstraint;
- (id)moodSlider;
- (id)movieContainerViewController;
- (id)navBarShareBBItem;
- (id)overlayContainerView;
- (bool)ph_isTransitionOverlayView:(id)arg1;
- (void)ph_loadTransitionSourcePlaceholderViewUsingFactory:(id /* block */)arg1;
- (unsigned long long)ph_preferredChrome;
- (long long)ph_preferredChromeAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1;
- (id)placeholderView;
- (void)playAfterAutoEdit;
- (void)playPause:(id)arg1;
- (id)playPauseBBItem;
- (id)playPauseBBItemWithRate:(float)arg1;
- (void)playerContentChangeDownloadProgress:(float)arg1;
- (void)playerContentChangeFailed;
- (void)playerContentChangeProgress:(float)arg1;
- (void)playerDidDoContentChange;
- (void)playerDidGenerateNewPosters;
- (void)playerDidPlayToEnd;
- (void)playerRateChanged;
- (unsigned long long)playerSpinnerState;
- (void)playerWillRefreshMovie;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (float)progress;
- (id)progressContainerView;
- (bool)progressIncludesDownload;
- (id)progressTopLine;
- (id)progressView;
- (void)rebuildMovieController;
- (void)rebuildToolbarsToTraitCollection:(id)arg1;
- (void)rebuildToolbarsToTraitCollection:(id)arg1 withPlayRate:(float)arg2;
- (id)screenEdgePanLeftGestureRecognizer;
- (id)scrubberContainer;
- (int)selectedDuration;
- (id)selectedIndexPathForSliderViewController:(id)arg1;
- (void)setAskedToCreateMemory:(bool)arg1;
- (void)setAutoEditController:(id)arg1;
- (void)setBottomBarBottomConstraint:(id)arg1;
- (void)setBottomBarHeightConstraint:(id)arg1;
- (void)setBottomScrubberHeightConstraint:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setControlVisibility:(bool)arg1;
- (void)setControlVisibility:(bool)arg1 traitCollection:(id)arg2;
- (void)setCustomDurationSelected:(bool)arg1;
- (void)setDidDragSlider:(bool)arg1;
- (void)setDurationDisplayNames:(id)arg1;
- (void)setDurationHeightConstraint:(id)arg1;
- (void)setDurationSlider:(id)arg1;
- (void)setDurationWithIndexPath:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHorizontalCenteredLabel:(id)arg1;
- (void)setHorizontalOffsetLabel:(id)arg1;
- (void)setInitialDuration:(double)arg1;
- (void)setInitialMood:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLandscapeProgressView:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setMoodHeightConstraint:(id)arg1;
- (void)setMoodSlider:(id)arg1;
- (void)setMoodWithIndexPath:(id)arg1;
- (void)setMovieContainerViewController:(id)arg1;
- (void)setOverlayContainerView:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setPlayerSpinnerState:(unsigned long long)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressContainerView:(id)arg1;
- (void)setProgressIncludesDownload:(bool)arg1;
- (void)setProgressTopLine:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setScreenEdgePanLeftGestureRecognizer:(id)arg1;
- (void)setScrubberContainer:(id)arg1;
- (void)setSelectedDuration:(int)arg1;
- (void)setShareBBItem:(id)arg1;
- (void)setShouldPlayOnAppearance:(bool)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setSourcePlaceholderView:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTimeAtTeardown:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerticalCenteredLabel:(id)arg1;
- (void)setVerticalProgressLabelSpace:(id)arg1;
- (void)share:(id)arg1;
- (id)shareBBItem;
- (bool)shouldPlayOnAppearance;
- (bool)showCancelButton;
- (void)showProgressScreen;
- (void)sliderViewController:(id)arg1 changeSliderWithIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 didEndDraggingAtIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 setSelectedIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 updateSliderPercentage:(float)arg2;
- (void)sliderViewControllerDidBeginDragging:(id)arg1;
- (id)sourcePlaceholderView;
- (unsigned long long)startTime;
- (id)tapGestureRecognizer;
- (void)teardownMovieController;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeAtTeardown;
- (id)titleLabel;
- (void)toggleControlVisibility:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateProgressLayoutWithTraitCollection:(id)arg1;
- (void)updateScrubberPlaceholderImage;
- (id)verticalCenteredLabel;
- (id)verticalProgressLabelSpace;
- (void)videoScrubberViewController:(id)arg1 seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
