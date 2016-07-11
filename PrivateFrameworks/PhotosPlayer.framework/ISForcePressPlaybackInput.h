/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver> {
    bool  __aboveTimeoutThreshold;
    long long  __currentTimeoutRequestId;
    bool  __forceAboveThresholdLongEnough;
    double  __forceProgress;
    bool  __hasCrossedHintThreshold;
    UIPreviewForceInteractionProgress * __interactionProgress;
    bool  __isTouchActive;
}

@property (setter=_setAboveTimeoutThreshold:, nonatomic) bool _aboveTimeoutThreshold;
@property (setter=_setCurrentTimeoutRequestId:, nonatomic) long long _currentTimeoutRequestId;
@property (setter=_setForceAboveThresholdLongEnough:, nonatomic) bool _forceAboveThresholdLongEnough;
@property (setter=_setForceProgress:, nonatomic) double _forceProgress;
@property (setter=_setHasCrossedHintThreshold:, nonatomic) bool _hasCrossedHintThreshold;
@property (setter=_setInteractionProgress:, nonatomic, retain) UIPreviewForceInteractionProgress *_interactionProgress;
@property (setter=_setTouchActive:, nonatomic) bool _isTouchActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_aboveTimeoutThreshold;
- (void)_cancelTimeoutPlayback;
- (long long)_currentTimeoutRequestId;
- (bool)_forceAboveThresholdLongEnough;
- (double)_forceProgress;
- (void)_handlePress:(id)arg1;
- (bool)_hasCrossedHintThreshold;
- (id)_interactionProgress;
- (bool)_isTouchActive;
- (void)_setAboveTimeoutThreshold:(bool)arg1;
- (void)_setCurrentTimeoutRequestId:(long long)arg1;
- (void)_setForceAboveThresholdLongEnough:(bool)arg1;
- (void)_setForceProgress:(double)arg1;
- (void)_setHasCrossedHintThreshold:(bool)arg1;
- (void)_setInteractionProgress:(id)arg1;
- (void)_setTouchActive:(bool)arg1;
- (void)_updateValue;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (long long)inputType;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)newGestureRecognizer;

@end
