/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationDetails : NSObject {
    unsigned long long  _annoucementStage;
    GEOCompanionRouteDetails * _companionRoute;
    GEOCompanionRouteStatus * _companionStatus;
    NSString * _destinationName;
    long long  _displayStep;
    double  _distanceRemainingOnRoute;
    double  _distanceToManeuverEnd;
    double  _distanceToManeuverStart;
    double  _distanceToRoute;
    <GEOServerFormattedStepStringFormatter> * _formatter;
    bool  _guidancePromptsEnabled;
    GEOLocation * _location;
    bool  _locationUnreliable;
    int  _navigationState;
    unsigned long long  _nextAnnoucementStage;
    double  _remainingTime;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    GEONavigationRouteSummary * _routeSummary;
    double  _timeUntilNextAnnouncement;
    GEONavigationRouteTransitSummary * _transitSummary;
}

@property (nonatomic) unsigned long long announcementStage;
@property (nonatomic, readonly) GEOCompanionRouteDetails *companionRoute;
@property (nonatomic, readonly) GEOCompanionRouteStatus *companionStatus;
@property (nonatomic, readonly) NSString *destinationName;
@property (nonatomic) long long displayStep;
@property (nonatomic) double distanceRemainingOnRoute;
@property (nonatomic) double distanceToManeuverEnd;
@property (nonatomic) double distanceToManeuverStart;
@property (nonatomic) double distanceToRoute;
@property (nonatomic, readonly) <GEOServerFormattedStepStringFormatter> *formatter;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) bool locationUnreliable;
@property (nonatomic) int navigationState;
@property (nonatomic, readonly) unsigned long long nextAnnouncementStage;
@property (nonatomic) double remainingTime;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) GEONavigationRouteSummary *routeSummary;
@property (nonatomic, readonly) double timeUntilNextAnnouncement;
@property (nonatomic, readonly) GEONavigationRouteTransitSummary *transitSummary;

- (unsigned long long)announcementStage;
- (id)companionRoute;
- (id)companionStatus;
- (void)dealloc;
- (id)destinationName;
- (long long)displayStep;
- (double)distanceRemainingOnRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)distanceToRoute;
- (id)formatter;
- (bool)guidancePromptsEnabled;
- (id)initWithDestinationName:(id)arg1 stringFormatter:(id)arg2;
- (id)location;
- (bool)locationUnreliable;
- (int)navigationState;
- (unsigned long long)nextAnnouncementStage;
- (double)remainingTime;
- (id)route;
- (id)routeMatch;
- (id)routeSummary;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setDisplayStep:(long long)arg1;
- (void)setDistanceRemainingOnRoute:(double)arg1;
- (void)setDistanceToManeuverEnd:(double)arg1;
- (void)setDistanceToManeuverStart:(double)arg1;
- (void)setDistanceToRoute:(double)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;
- (void)setRemainingTime:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (double)timeUntilNextAnnouncement;
- (id)transitSummary;

@end
