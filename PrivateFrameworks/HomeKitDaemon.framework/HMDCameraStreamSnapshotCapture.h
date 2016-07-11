/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamSnapshotCapture : NSObject <HMDVideoStreamLastDecodedFrameDelegate, HMFLogging, HMFTimerDelegate> {
    bool  _capturingLastFrame;
    <HMDCameraStreamSnapshotCaptureDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _lastDecodedFrameTimer;
    HMDCameraSnapshotData * _lastSnapshotData;
    HMDCameraSessionID * _sessionID;
    HMDVideoStreamInterface * _videoStreamInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool capturingLastFrame;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraStreamSnapshotCaptureDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *lastDecodedFrameTimer;
@property (nonatomic, retain) HMDCameraSnapshotData *lastSnapshotData;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDVideoStreamInterface *videoStreamInterface;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)_callSnapshotDelegate:(id)arg1;
- (void)_captureFrame;
- (void)captureCurrentFrame;
- (void)captureLastFrame;
- (bool)capturingLastFrame;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithWorkQueue:(id)arg1 videoStreamInterface:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)lastDecodedFrameTimer;
- (id)lastSnapshotData;
- (id)logIdentifier;
- (id)sessionID;
- (void)setCapturingLastFrame:(bool)arg1;
- (void)setLastDecodedFrameTimer:(id)arg1;
- (void)setLastSnapshotData:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)videoStream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (void)videoStream:(id)arg1 didStop:(id)arg2;
- (id)videoStreamInterface;
- (id)workQueue;

@end
