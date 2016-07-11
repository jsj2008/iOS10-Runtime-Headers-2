/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResult : NSObject {
    NSDate * _captureDate;
    NSError * _error;
    bool  _expectingPairedVideo;
    NSDictionary * _metadata;
    struct __IOSurface { } * _stillImageFilteredPreviewSurface;
    struct opaqueCMSampleBuffer { } * _stillImageFullsizeSampleBuffer;
    struct __IOSurface { } * _stillImageFullsizeSurface;
    unsigned long long  _stillImageFullsizeSurfaceSize;
    struct __IOSurface { } * _stillImageUnfilteredPreviewSurface;
}

@property (getter=isHDRImageWithCorrespondingOriginal, nonatomic, readonly) bool HDRImageWithCorrespondingOriginal;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) NSDictionary *compactMetadata;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly, copy) NSString *imageGroupIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (getter=isOriginal, nonatomic, readonly) bool original;
@property (getter=isOriginalForHDR, nonatomic, readonly) bool originalForHDR;
@property (getter=isProcessedImageWithCorrespondingOriginal, nonatomic, readonly) bool processedImageWithCorrespondingOriginal;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFilteredPreviewSurface;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*stillImageFullsizeSampleBuffer;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFullsizeSurface;
@property (nonatomic, readonly) unsigned long long stillImageFullsizeSurfaceSize;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageUnfilteredPreviewSurface;

- (void).cxx_destruct;
- (id)captureDate;
- (id)compactMetadata;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)imageGroupIdentifier;
- (id)initWithFullsizeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id)arg2;
- (id)initWithFullsizeSurface:(struct __IOSurface { }*)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(struct __IOSurface { }*)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 expectingPairedVideo:(bool)arg6 error:(id)arg7;
- (bool)isExpectingPairedVideo;
- (bool)isHDRImageWithCorrespondingOriginal;
- (bool)isOriginal;
- (bool)isOriginalForHDR;
- (bool)isProcessedImageWithCorrespondingOriginal;
- (id)metadata;
- (struct __IOSurface { }*)stillImageFilteredPreviewSurface;
- (struct opaqueCMSampleBuffer { }*)stillImageFullsizeSampleBuffer;
- (struct __IOSurface { }*)stillImageFullsizeSurface;
- (unsigned long long)stillImageFullsizeSurfaceSize;
- (struct __IOSurface { }*)stillImageUnfilteredPreviewSurface;

@end
