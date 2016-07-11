/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDevice : NSObject {
    AVCaptureDeviceInternal * _internal;
}

@property (nonatomic, retain) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) NSArray *formats;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *uniqueID;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)_devices;
+ (void)_reconnectDevices:(id)arg1;
+ (void)_registerOnceForServerConnectionDiedNotification;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)initialize;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id /* block */)arg2;

- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (float)ISO;
- (float)ISODigitalThreshold;
- (void)_checkTCCAccess;
- (bool)_isFlashScene;
- (bool)_isHighDynamicRangeScene;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setFlashSceneDetectionEnabled:(bool)arg1;
- (void)_setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_setStillImageStabilizationDetectionEnabled:(bool)arg1;
- (void)_setVideoHDREnabled:(bool)arg1;
- (bool)_startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (long long)activeColorSpace;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (long long)autoFocusRangeRestriction;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)automaticallyAdjustsVideoHDREnabled;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)availableBoxedMetadataFormatDescriptions;
- (bool)cachesFigCaptureSourceConfigurationChanges;
- (void)cancelVideoZoomRamp;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (void)close;
- (float)contrast;
- (void)dealloc;
- (id)description;
- (struct OpaqueCMClock { }*)deviceClock;
- (long long)deviceSourceOrigin;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (long long)exposureMode;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (bool)eyeClosedDetectionEnabled;
- (bool)eyeDetectionEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (long long)flashMode;
- (long long)focusMode;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (id)formats;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (bool)hasFlash;
- (bool)hasMediaType:(id)arg1;
- (bool)hasTorch;
- (long long)imageControlMode;
- (id)init;
- (bool)isActiveVideoMaxFrameDurationSet;
- (bool)isActiveVideoMinFrameDurationSet;
- (bool)isAdjustingExposure;
- (bool)isAdjustingFocus;
- (bool)isAdjustingWhiteBalance;
- (bool)isAutoFocusRangeRestrictionSupported;
- (bool)isConnected;
- (bool)isExposureModeSupported:(long long)arg1;
- (bool)isExposurePointOfInterestSupported;
- (bool)isEyeClosedDetectionSupported;
- (bool)isEyeDetectionSupported;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashSceneDetectedForPhotoOutput;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)isFocusPointOfInterestSupported;
- (bool)isHDRSupported;
- (bool)isHighDynamicRangeScene;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (bool)isImageControlModeSupported:(long long)arg1;
- (bool)isInUseByAnotherApplication;
- (bool)isLensStabilizationSupported;
- (bool)isLockedForConfiguration;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isMachineReadableCodeDetectionSupported;
- (bool)isOpen;
- (bool)isRampingVideoZoom;
- (bool)isRawStillImageCaptureSupported;
- (bool)isSmileDetectionSupported;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (bool)isVideoHDREnabled;
- (bool)isVideoStabilizationSupported;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isWideColorSupported;
- (float)lensAperture;
- (float)lensPosition;
- (id)localizedName;
- (bool)lockForConfiguration:(id*)arg1;
- (float)maxExposureTargetBias;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (float)maxWhiteBalanceGain;
- (float)minExposureTargetBias;
- (int)minMacroblocksForHighProfileAbove30fps;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (id)modelID;
- (bool)open:(id*)arg1;
- (long long)position;
- (bool)providesStortorgetMetadata;
- (void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (float)saturation;
- (void)setActiveColorSpace:(long long)arg1;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setCachesFigCaptureSourceConfigurationChanges:(bool)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setEyeClosedDetectionEnabled:(bool)arg1;
- (void)setEyeDetectionEnabled:(bool)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setProvidesStortorgetMetadata:(bool)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSmileDetectionEnabled:(bool)arg1;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)setTorchMode:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoHDREnabled:(bool)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id /* block */)arg2;
- (bool)smileDetectionEnabled;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (id)supportedMetadataObjectIdentifiers;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (float)torchLevel;
- (long long)torchMode;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (bool)usesQuantizationScalingMatrix_H264_Steep_16_48;
- (double)videoZoomFactor;
- (long long)whiteBalanceMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (void)cam_debugExposureState;
- (void)cam_debugFocusAndExposureState;
- (void)cam_debugFocusState;
- (id)cameraPanoramaFormatForConfiguration:(id)arg1;
- (id)cameraStillImageFormat;
- (id)cameraVideoFormatForVideoConfiguration:(long long)arg1;
- (id)cameraVideoPresetForVideoConfiguration:(long long)arg1;

@end
