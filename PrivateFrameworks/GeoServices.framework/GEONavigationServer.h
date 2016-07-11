/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationServer : NSObject {
    NSData * _activeRouteDetailsData;
    NSData * _guidanceStateData;
    NSMutableArray * _peers;
    NSData * _routeSummaryData;
    NSData * _stepIndexData;
    NSData * _transitSummaryData;
}

+ (id)identifier;

- (void)_requestActiveRouteDetailsDataWithPeer:(id)arg1;
- (void)_requestGuidanceStateWithPeer:(id)arg1;
- (void)_requestRouteSummaryWithPeer:(id)arg1;
- (void)_requestStepIndexWithPeer:(id)arg1;
- (void)_requestTransitSummaryWithPeer:(id)arg1;
- (void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3;
- (void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
- (void)setRouteSummaryWithStepIndexData:(id)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(bool)arg2;

@end
