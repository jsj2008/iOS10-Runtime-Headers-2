/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationSession : NSObject <MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVoiceControllerObserver> {
    MNTrafficIncidentAlert * _activeTrafficIncidentAlert;
    MNNavigationAudioSession * _audioSession;
    GEOComposedWaypoint * _destination;
    MNGuidanceEventRecorder * _guidanceEventRecorder;
    MNGuidanceManager * _guidanceManager;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    bool  _isAllowedToSwitchTransportTypes;
    bool  _isConnectedToCarplay;
    bool  _isSpeakingTrafficIncidentAlert;
    MNLocationTracker * _locationTracker;
    GEOMotionContext * _motionContext;
    int  _navigationType;
    MNObserverHashTable * _observers;
    MNRouteManager * _routeManager;
    NSString * _tileLoaderClient;
    MNTimeAndDistanceUpdater * _timeAndDistanceUpdater;
    MNNavigationTraceManager * _traceManager;
    NSString * _voiceLanguage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) double distanceToManeuverEnd;
@property (nonatomic, readonly) double distanceToManeuverStart;
@property (nonatomic, readonly) MNGuidanceManager *guidanceManager;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllowedToSwitchTransportTypes;
@property (nonatomic) bool isConnectedToCarplay;
@property (nonatomic, readonly) MNLocation *lastMatchedLocation;
@property (nonatomic, readonly) GEOMotionContext *motionContext;
@property (nonatomic, readonly) int navigationState;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic, readonly) double remainingDistance;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) MNRouteManager *routeManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (void).cxx_destruct;
- (void)_announceArrival:(id)arg1;
- (void)_announceStart;
- (void)_closeTileLoader;
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;
- (void)_openTileLoader;
- (void)_setVolumeFromDefaults;
- (void)_startAudioSession;
- (void)_startETAUpdates;
- (void)_startGuidanceAllowMidRouteStart:(bool)arg1;
- (void)_startLocationTracking;
- (void)_startLocationUpdates;
- (void)_startMotionUpdates;
- (void)_startTravelTimeUpdates;
- (void)_stopAudioSession;
- (void)_stopETAUpdates;
- (void)_stopGuidance;
- (void)_stopLocationTracking;
- (void)_stopLocationUpdates;
- (void)_stopMotionUpdates;
- (void)_stopTravelTimeUpdates;
- (void)addObserver:(id)arg1;
- (void)audioSessionDidFinishAnnouncingArrival:(id)arg1;
- (void)audioSessionWillAnnounceArrival:(id)arg1;
- (void)dealloc;
- (id)destination;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (id)guidanceManager;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(bool)arg5 completionBlock:(id /* block */)arg6;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id)arg1 updatePointOfInterest:(struct { double x1; double x2; })arg2 focusStyle:(int)arg3;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (bool)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned long long)arg3;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (bool)guidancePromptsEnabled;
- (id)initWithRouteManager:(id)arg1 traceManager:(id)arg2;
- (bool)isAllowedToSwitchTransportTypes;
- (bool)isConnectedToCarplay;
- (id)lastMatchedLocation;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationTracker:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(id)arg1 didEnableGuidance:(bool)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
- (void)locationTracker:(id)arg1 didUpdateETA:(id)arg2 forRoute:(id)arg3;
- (void)locationTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)locationTracker:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9 maneuverStepIndex:(unsigned long long)arg10 isSynthetic:(bool)arg11;
- (void)locationTracker:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9;
- (void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)locationTracker:(id)arg1 failedWithErrorCode:(long long)arg2;
- (void)locationTracker:(id)arg1 ignoredLocation:(id)arg2;
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)locationTracker:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)locationTracker:(id)arg1 startingStepIndex:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 updatePointOfInterest:(struct { double x1; double x2; })arg2 focusStyle:(int)arg3;
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)locationTrackerDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerHideSecondaryStep:(id)arg1;
- (void)locationTrackerWillPause:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTrackerWillResumeFromPause:(id)arg1;
- (id)motionContext;
- (int)navigationState;
- (int)navigationType;
- (double)remainingDistance;
- (double)remainingTime;
- (void)removeObserver:(id)arg1;
- (bool)repeatCurrentGuidance;
- (bool)repeatCurrentTrafficAlert;
- (void)resumeOriginalDestination;
- (id)routeAttributes;
- (id)routeManager;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)startNavigationSessionWithDetails:(id)arg1 guidanceLevel:(int)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationSession;
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (id)traceManager;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)updateDestination:(id)arg1;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)voiceController:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2;

@end
