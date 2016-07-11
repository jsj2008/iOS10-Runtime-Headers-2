/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUPercentDrivenInteractionTransition : UIPercentDrivenInteractiveTransition {
    CADisplayLink * _displayLink;
    double  _displayLinkLastMediaTime;
    NSArray * _persistentAnimationLayers;
    NSUUID * _transitionUUID;
}

@property (nonatomic, retain) NSArray *persistentAnimationLayers;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (void)finalizeInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)persistentAnimationLayers;
- (void)setPersistentAnimationLayers:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)stopInteractiveTransition;
- (void)tick:(id)arg1;

@end
