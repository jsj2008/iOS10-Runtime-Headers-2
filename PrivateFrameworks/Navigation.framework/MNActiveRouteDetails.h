/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNActiveRouteDetails : PBCodable <NSCopying> {
    GEOTransitDecoderData * _decoderData;
    GEOComposedWaypoint * _destination;
    struct { 
        unsigned int navigationType : 1; 
        unsigned int reconnectionRouteIndex : 1; 
        unsigned int routeIndex : 1; 
        unsigned int transportType : 1; 
    }  _has;
    int  _navigationType;
    GEOComposedWaypoint * _origin;
    unsigned int  _reconnectionRouteIndex;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    GEORoute * _route;
    NSData * _routeDetailsID;
    unsigned int  _routeIndex;
    GEOTransitSuggestedRoute * _suggestedRoute;
    int  _transportType;
}

@property (nonatomic, retain) GEOTransitDecoderData *decoderData;
@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) bool hasDecoderData;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic) bool hasNavigationType;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasReconnectionRouteIndex;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasRoute;
@property (nonatomic, readonly) bool hasRouteDetailsID;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic, readonly) bool hasSuggestedRoute;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) int navigationType;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic) unsigned int reconnectionRouteIndex;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic, retain) GEORoute *route;
@property (nonatomic, retain) NSData *routeDetailsID;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic, retain) GEOTransitSuggestedRoute *suggestedRoute;
@property (nonatomic) int transportType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoderData;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasDecoderData;
- (bool)hasDestination;
- (bool)hasNavigationType;
- (bool)hasOrigin;
- (bool)hasReconnectionRouteIndex;
- (bool)hasRequest;
- (bool)hasResponse;
- (bool)hasRoute;
- (bool)hasRouteDetailsID;
- (bool)hasRouteIndex;
- (bool)hasSuggestedRoute;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationType;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (unsigned int)reconnectionRouteIndex;
- (id)request;
- (id)response;
- (id)route;
- (id)routeDetailsID;
- (unsigned int)routeIndex;
- (void)setDecoderData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasNavigationType:(bool)arg1;
- (void)setHasReconnectionRouteIndex:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setNavigationType:(int)arg1;
- (void)setOrigin:(id)arg1;
- (void)setReconnectionRouteIndex:(unsigned int)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteDetailsID:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)setSuggestedRoute:(id)arg1;
- (void)setTransportType:(int)arg1;
- (id)suggestedRoute;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
