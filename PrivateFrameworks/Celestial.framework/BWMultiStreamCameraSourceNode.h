/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    float  _aeMaxGain;
    struct OpaqueFigCaptureISPProcessingSession { } * _bayerProcessingSession;
    BWFigVideoCaptureDevice * _captureDevice;
    BWFigVideoCaptureStream * _captureStream;
    bool  _chromaNoiseReductionEnabled;
    int  _clientSpecifiedFormatIndex;
    int  _colorSpaceProperties;
    struct { 
        int width; 
        int height; 
    }  _cropAspectRatio;
    bool  _cropsOverscanFromFirmwareStillImageOutput;
    int  _currentFirmwareStillImageOutputRetainedBufferCount;
    bool  _deferMetadataCreation;
    bool  _deferProcessingSessionMetadataCreation;
    BWDeferredMetadataCache * _deferredMetadataCache;
    BWNodeOutput * _detectedFacesOutput;
    NSDictionary * _detectedFacesOutputConfiguration;
    bool  _detectedFacesOutputEnabled;
    BWDetectedFacesRingBuffer * _detectedFacesRingBuffer;
    bool  _discardsUnstableSphereVideoFrames;
    NSMutableDictionary * _dutyCycleMetadataCache;
    struct { 
        int width; 
        int height; 
    }  _firmwareStillImageDimensionsAfterOverscanCropping;
    int  _firmwareStillImageOutputRetainedBufferCountOverride;
    float  _maxFrameRate;
    int  _maxIntegrationTimeOverride;
    float  _minFrameRate;
    int  _motionAttachmentsSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _onDemandStillOverscanPercentage;
    struct BWStreamOutputStorage { 
        int type; 
        unsigned int flags; 
        bool ready; 
        bool enabled; 
        BWNodeOutput *nodeOutput; 
        struct opaqueCMSimpleQueue {} *simpleQueue; 
        NSObject<OS_dispatch_queue> *bufferServicingQueue; 
        int (*bufferServicingQueueCallback)(); 
        struct opaqueCMFormatDescription {} *cachedFormatDescription; 
        int frameCount; 
    }  _outputsStorage;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanPercentage;
    float  _overscanPercentageForZoom;
    struct { 
        int width; 
        int height; 
    }  _preferredPreviewDimensions;
    BWNodeOutput * _previewOutput;
    bool  _previewOutputEnabled;
    NSDictionary * _qHDRSensorDefectivePixelInfo;
    struct OpaqueFigSampleBufferProcessor { } * _qrmSampleBufferProcessor;
    struct { 
        int width; 
        int height; 
    }  _quadraCropDimensions;
    bool  _quadraHighResStillImageCaptureEnabled;
    struct opaqueCMFormatDescription { } * _quadraStillOutputFormatDescription;
    struct opaqueCMSimpleQueue { } * _quadraYUVBufferQueue;
    bool  _reflectsStillsOnStreamingOutputs;
    int  _resolvedFormatIndex;
    bool  _resolvedFormatIndexUpToDate;
    struct { 
        int width; 
        int height; 
    }  _sensorCropDimensions;
    BWNodeOutput * _stillImageOutput;
    bool  _stillImageOutputEnabled;
    bool  _stillImageOutputSushiRawAttachmentOptionEnabled;
    struct opaqueCMFormatDescription { } * _stillReflectionFormatDescription;
    struct opaqueCMFormatDescription { } * _stillReflectionSecondaryFormatDescription;
    struct OpaqueVTPixelTransferSession { } * _stillReflectionSecondaryTransferSession;
    struct OpaqueVTPixelTransferSession { } * _stillReflectionTransferSession;
    struct OpaqueFigCaptureStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamEventDispatchQueue;
    NSObject<OS_dispatch_group> * _streamEventNotificationGroup;
    int  _streamFormatIndex;
    NSArray * _supportedFormats;
    bool  _temporalNoiseReductionEnabled;
    bool  _usesFirmwareStillImageOutput;
    bool  _usesISPBackEndScalers;
    bool  _usesIntermediateTapForPreview;
    struct { 
        int width; 
        int height; 
    }  _videoCaptureDimensions;
    BWNodeOutput * _videoCaptureOutput;
    bool  _videoCaptureOutputEnabled;
    unsigned int  _videoPixelFormat;
    bool  _videoStabilizationEnabled;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedFacesOutput;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeOutput *previewOutput;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;

+ (id)cameraSourceNodeWithCaptureDevice:(id)arg1 captureStream:(id)arg2;
+ (void)initialize;

- (int)_bringStreamUpToDate;
- (id)_colorInfoForOutputID:(id)arg1 videoOutputsColorInfo:(id)arg2;
- (void)_enableStreamOutputs;
- (id)_enabledNodeOutputsDrivenByThePrimaryStreamingOutput;
- (int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1;
- (void)_flushOutRemainingBuffers;
- (id)_initWithCaptureDevice:(id)arg1 captureStream:(id)arg2;
- (float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2;
- (void)_markEndOfLiveOutput;
- (void)_reflectStillSampleBufferOnStreamingOutputs:(struct opaqueCMSampleBuffer { }*)arg1 captureType:(int)arg2;
- (void)_registerForStreamNotifications;
- (void)_registerStreamOutputHandlers;
- (bool)_requiresOneStreamingOutputForMetadata;
- (void)_serviceZoomForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
- (int)_setupQRMSampleBufferProcessor;
- (bool)_shouldEnableStreamCaptureOutput;
- (bool)_shouldEnableStreamPreviewOutput;
- (id)_streamOutputIDForCapture;
- (id)_streamOutputIDForOnDemandStills;
- (id)_streamOutputIDForPreview;
- (void)_unregisterFromStreamNotifications;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1;
- (int)_updateFormatIndex;
- (void)_updateMetadataConfigurations;
- (int)_updateOutputConfigurations;
- (void)_updateOutputsStorage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)_verifyColorSpaceProperties:(int)arg1 matchVideoOutputsColorInfo:(id)arg2 forOutputID:(id)arg3;
- (id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2;
- (float)aeMaxGain;
- (struct OpaqueFigCaptureISPProcessingSession { }*)bayerProcessingSession;
- (id)captureDevice;
- (id)captureStream;
- (bool)chromaNoiseReductionEnabled;
- (struct OpaqueCMClock { }*)clock;
- (id)colorInfoForOutput:(id)arg1;
- (int)colorSpaceProperties;
- (struct { int x1; int x2; })cropAspectRatio;
- (bool)cropsOverscanFromFirmwareStillImageOutput;
- (void)dealloc;
- (id)detectedFacesOutput;
- (id)detectedFacesOutputConfiguration;
- (bool)detectedFacesOutputEnabled;
- (bool)discardsUnstableSphereVideoFrames;
- (struct { int x1; int x2; })firmwareStillImageDimensionsAfterOverscanCropping;
- (int)firmwareStillImageOutputRetainedBufferCountOverride;
- (int)formatIndex;
- (bool)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (float)maxFrameRate;
- (int)maxIntegrationTimeOverride;
- (float)minFrameRate;
- (int)motionAttachmentsSource;
- (id)nodeSubType;
- (struct CGSize { double x1; double x2; })overscanPercentage;
- (float)overscanPercentageForZoom;
- (struct { int x1; int x2; })preferredPreviewDimensions;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)prepareForStillImageCaptureWithClientBracketCount:(int)arg1 enableSushiRawAttachmentOption:(bool)arg2;
- (id)previewOutput;
- (bool)previewOutputEnabled;
- (id)qHDRSensorDefectivePixelInfo;
- (struct { int x1; int x2; })quadraCropDimensions;
- (bool)quadraHighResStillImageCaptureEnabled;
- (bool)reflectsStillsOnStreamingOutputs;
- (struct { int x1; int x2; })sensorCropDimensions;
- (void)setAeMaxGain:(float)arg1;
- (void)setBayerProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setColorSpaceProperties:(int)arg1;
- (void)setCropAspectRatio:(struct { int x1; int x2; })arg1;
- (void)setCropsOverscanFromFirmwareStillImageOutput:(bool)arg1;
- (void)setDetectedFacesOutputConfiguration:(id)arg1;
- (void)setDetectedFacesOutputEnabled:(bool)arg1;
- (void)setDiscardsUnstableSphereVideoFrames:(bool)arg1;
- (void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1;
- (void)setFormatIndex:(int)arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMaxIntegrationTimeOverride:(int)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverscanPercentageForZoom:(float)arg1;
- (void)setPreferredPreviewDimensions:(struct { int x1; int x2; })arg1;
- (void)setPreviewOutputEnabled:(bool)arg1;
- (void)setQHDRSensorDefectivePixelInfo:(id)arg1;
- (void)setQuadraCropDimensions:(struct { int x1; int x2; })arg1;
- (void)setQuadraHighResStillImageCaptureEnabled:(bool)arg1;
- (void)setReflectsStillsOnStreamingOutputs:(bool)arg1;
- (void)setSensorCropDimensions:(struct { int x1; int x2; })arg1;
- (void)setStillImageOutputEnabled:(bool)arg1;
- (void)setTemporalNoiseReductionEnabled:(bool)arg1;
- (void)setUsesFirmwareStillImageOutput:(bool)arg1;
- (void)setUsesISPBackEndScalers:(bool)arg1;
- (void)setUsesIntermediateTapForPreview:(bool)arg1;
- (void)setVideoCaptureDimensions:(struct { int x1; int x2; })arg1;
- (void)setVideoCaptureOutputEnabled:(bool)arg1;
- (void)setVideoPixelFormat:(unsigned int)arg1;
- (void)setVideoStabilizationEnabled:(bool)arg1;
- (bool)start:(id*)arg1;
- (id)stillImageOutput;
- (bool)stillImageOutputEnabled;
- (bool)stillImageOutputSushiRawAttachmentOptionEnabled;
- (bool)stop:(id*)arg1;
- (bool)temporalNoiseReductionEnabled;
- (void)updateOutputRequirements;
- (bool)usesFirmwareStillImageOutput;
- (bool)usesISPBackEndScalers;
- (bool)usesIntermediateTapForPreview;
- (struct { int x1; int x2; })videoCaptureDimensions;
- (id)videoCaptureOutput;
- (bool)videoCaptureOutputEnabled;
- (unsigned int)videoPixelFormat;
- (bool)videoStabilizationEnabled;
- (void)willStop;

@end
