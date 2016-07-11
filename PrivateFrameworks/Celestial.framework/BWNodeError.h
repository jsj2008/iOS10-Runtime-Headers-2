/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeError : NSObject {
    int  _errorCode;
    FigCaptureRecordingSettings * _recordingSettings;
    NSString * _sourceNodeDescription;
    FigCaptureStillImageSettings * _stillImageSettings;
    long long  _uniqueID;
}

@property (readonly) int errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;

+ (id)newError:(int)arg1 sourceNode:(id)arg2;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3;

- (id)_initWithError:(int)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 recordingSettings:(id)arg4;
- (void)dealloc;
- (int)errorCode;
- (unsigned long long)hash;
- (id)recordingSettings;
- (id)sourceNodeDescription;
- (id)stillImageSettings;

@end
