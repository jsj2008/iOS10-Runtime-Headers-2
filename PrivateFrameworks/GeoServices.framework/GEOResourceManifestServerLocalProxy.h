/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceFiltersManagerDelegate, GEOResourceManifestServerProxy, NSURLSessionDataDelegate> {
    GEOActiveTileGroup * _activeTileGroup;
    NSString * _authToken;
    NSLock * _authTokenLock;
    GEOResourceManifestConfiguration * _configuration;
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    GEOResourceFiltersManager * _filtersManager;
    double  _lastManifestRequestStartTime;
    double  _lastManifestRetryTimestamp;
    NSError * _lastResourceManifestLoadError;
    double  _lastTileGroupRetryTimestamp;
    NSString * _loadingTileGroupUniqueIdentifier;
    unsigned long long  _manifestRetryCount;
    NSMutableArray * _manifestUpdateCompletionHandlers;
    NSTimer * _manifestUpdateTimer;
    GEOResourceLoader * _resourceLoader;
    GEOResourceManifestDownload * _resourceManifest;
    NSMutableData * _responseData;
    NSString * _responseETag;
    NSURLSession * _session;
    bool  _started;
    NSURLSessionTask * _task;
    unsigned long long  _tileGroupRetryCount;
    NSTimer * _tileGroupUpdateTimer;
    bool  _wantsManifestUpdateOnReachabilityChange;
    bool  _wantsTileGroupUpdateOnReachabilityChange;
}

@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelSession;
- (void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 loadedResources:(id)arg4 unloadedConditionalResources:(id)arg5 flushTileCache:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)_cleanupSession;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(bool)arg2 ignoreIdentifier:(bool)arg3;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_manifestURL;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (id)_resourcesForTileGroup:(id)arg1 fromResourceManifest:(id)arg2 regional:(bool)arg3 includeAttribution:(bool)arg4 scales:(id)arg5 scenarios:(id)arg6;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_startServer;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(id /* block */)arg1;
- (bool)_updateManifestIfNecessary:(id /* block */)arg1;
- (void)_updateTimerFired:(id)arg1;
- (bool)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2;
- (bool)_writeManifestToDisk:(id)arg1 error:(id*)arg2;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)activeTileGroup;
- (id)authToken;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)forceUpdate:(id /* block */)arg1;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverOperationQueue;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;

@end
