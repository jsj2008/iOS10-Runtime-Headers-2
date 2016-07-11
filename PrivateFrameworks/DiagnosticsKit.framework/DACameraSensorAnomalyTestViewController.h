/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DACameraSensorAnomalyTestViewController : DATestViewController <DACameraSensorAnomalyTargetViewDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate> {
    CBAdaptationClient * _adaptationClient;
    NSMutableArray * _allResults;
    CBBlueLightClient * _blueLightClient;
    bool  _blueLightStatusActive;
    UIView * _bottomBar;
    bool  _cameraPickerVisible;
    UIImagePickerController * _cameraViewController;
    CBClient * _client;
    bool  _colorAdaptationStatus;
    UIButton * _continueButton;
    DACameraSensorAnomalyTestImageView * _currentImageView;
    long long  _currentTag;
    bool  _disableAmbientLightAdaptation;
    UIColor * _drawColor;
    bool  _drawingMode;
    bool  _enableMaxBrightness;
    bool  _flashModeOn;
    UIScrollView * _imageScrollView;
    float  _minimumSquareLength;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originPoint;
    float  _originalScreenBrightness;
    DACameraSensorAnomalyTargetView * _overlayView;
    UIPanGestureRecognizer * _panGesture;
    bool  _presentedCameraPicker;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectangle;
    UIButton * _retakeButton;
    UITapGestureRecognizer * _tapGesture;
    UIButton * _usePhotoButton;
    NSString * _viewfinderInstruction;
}

@property (nonatomic, retain) CBAdaptationClient *adaptationClient;
@property (nonatomic, retain) NSMutableArray *allResults;
@property (nonatomic, retain) CBBlueLightClient *blueLightClient;
@property (nonatomic) bool blueLightStatusActive;
@property (nonatomic, retain) UIView *bottomBar;
@property (nonatomic) bool cameraPickerVisible;
@property (nonatomic, retain) UIImagePickerController *cameraViewController;
@property (nonatomic, retain) CBClient *client;
@property (nonatomic) bool colorAdaptationStatus;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) DACameraSensorAnomalyTestImageView *currentImageView;
@property (nonatomic) long long currentTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAmbientLightAdaptation;
@property (nonatomic, retain) UIColor *drawColor;
@property (nonatomic) bool drawingMode;
@property (nonatomic) bool enableMaxBrightness;
@property (nonatomic) bool flashModeOn;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScrollView *imageScrollView;
@property (nonatomic) float minimumSquareLength;
@property (nonatomic) struct CGPoint { double x1; double x2; } originPoint;
@property (nonatomic) float originalScreenBrightness;
@property (nonatomic, retain) DACameraSensorAnomalyTargetView *overlayView;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic) bool presentedCameraPicker;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property (nonatomic, retain) UIButton *retakeButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;
@property (nonatomic, retain) UIButton *usePhotoButton;
@property (nonatomic, copy) NSString *viewfinderInstruction;

- (void).cxx_destruct;
- (id)adaptationClient;
- (void)addPanGesture;
- (void)addTapGesture;
- (void)addedRectangleView;
- (id)allResults;
- (id)blueLightClient;
- (bool)blueLightStatusActive;
- (id)bottomBar;
- (bool)cameraPickerVisible;
- (id)cameraViewController;
- (void)cancelTapped;
- (void)cancelTest;
- (void)cleanUp;
- (id)client;
- (bool)colorAdaptationStatus;
- (id)continueButton;
- (void)continueButtonPressed:(id)arg1;
- (id)currentImageView;
- (long long)currentTag;
- (void)disableAdaptationAndBlueLightReduction;
- (bool)disableAmbientLightAdaptation;
- (void)disableCameraPinchToZoomPanGesture;
- (void)dismissCameraView;
- (id)drawColor;
- (bool)drawingMode;
- (bool)enableMaxBrightness;
- (void)endTestWithStatusCode:(id)arg1;
- (bool)flashModeOn;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)imageScrollView;
- (id)initWithTest:(id)arg1 fullScreen:(bool)arg2;
- (float)minimumSquareLength;
- (struct CGPoint { double x1; double x2; })originPoint;
- (float)originalScreenBrightness;
- (id)overlayView;
- (id)panGesture;
- (void)panOccurred:(id)arg1;
- (bool)parameterize:(id)arg1;
- (void)parseResults;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)presentCameraView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)presentedCameraPicker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (void)removeDrawingModeViews;
- (void)removeResultWithTag:(long long)arg1;
- (void)removeShape:(id)arg1;
- (void)resetBrightness;
- (void)resetColorAdjustmentStates;
- (void)resetIdleTimerDisabled;
- (id)retakeButton;
- (void)retakeButtonPressed:(id)arg1;
- (void)saveAndMaximizeBrightness;
- (void)saveColorAdjustmentStates;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setAdaptationClient:(id)arg1;
- (void)setAllResults:(id)arg1;
- (void)setBlueLightClient:(id)arg1;
- (void)setBlueLightStatusActive:(bool)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setCameraPickerVisible:(bool)arg1;
- (void)setCameraViewController:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setColorAdaptationStatus:(bool)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setCurrentImageView:(id)arg1;
- (void)setCurrentTag:(long long)arg1;
- (void)setDisableAmbientLightAdaptation:(bool)arg1;
- (void)setDrawColor:(id)arg1;
- (void)setDrawingMode:(bool)arg1;
- (void)setEnableMaxBrightness:(bool)arg1;
- (void)setFlashModeOn:(bool)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setMinimumSquareLength:(float)arg1;
- (void)setOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalScreenBrightness:(float)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setPresentedCameraPicker:(bool)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRetakeButton:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setUsePhotoButton:(id)arg1;
- (void)setViewfinderInstruction:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePicture;
- (id)tapGesture;
- (void)tapOccurred:(id)arg1;
- (void)updateSelectedRegionOnScreen;
- (void)updateViewConstraints;
- (id)usePhotoButton;
- (void)usePhotoButtonPressed:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)viewfinderInstruction;

@end
