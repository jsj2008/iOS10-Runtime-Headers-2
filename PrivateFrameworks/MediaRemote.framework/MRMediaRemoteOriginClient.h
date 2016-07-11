/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteOriginClient : NSObject {
    bool  _canBeNowPlayingApp;
    id /* block */  _commandHandlerBlock;
    NSMutableDictionary * _commandHandlerBlocks;
    bool  _isOverrideApp;
    int  _notifyDidLaunchToken;
    int  _notifyRestoreClientStateForLaunch;
    MRNowPlayingArtwork * _nowPlayingArtwork;
    NSDictionary * _nowPlayingInfo;
    struct _MROrigin { } * _origin;
    id /* block */  _playbackQueueCallback;
    unsigned int  _routeDiscoveryMode;
    NSArray * _supportedCommands;
    NSMutableDictionary * _transactionCallbacks;
}

@property (nonatomic) bool canBeNowPlayingApp;
@property (nonatomic, readonly, copy) NSArray *commandHandlerBlocks;
@property (nonatomic) bool isOverrideApp;
@property (nonatomic, retain) MRNowPlayingArtwork *nowPlayingArtwork;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, readonly) struct _MROrigin { }*origin;
@property (nonatomic, copy) id /* block */ playbackQueueCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (nonatomic, copy) NSArray *supportedCommands;

- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)_registerDefaultCallbacks;
- (void)addCommandHandlerBlock:(id /* block */)arg1 forKey:(id)arg2;
- (bool)canBeNowPlayingApp;
- (id)commandHandlerBlocks;
- (void)dealloc;
- (id)initWithOrigin:(struct _MROrigin { }*)arg1;
- (bool)isOverrideApp;
- (id)nowPlayingArtwork;
- (id)nowPlayingInfo;
- (struct _MROrigin { }*)origin;
- (id /* block */)playbackQueueCallback;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (unsigned int)routeDiscoveryMode;
- (void)setCanBeNowPlayingApp:(bool)arg1;
- (void)setIsOverrideApp:(bool)arg1;
- (void)setNowPlayingArtwork:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueueCallback:(id /* block */)arg1;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTransactionCallback:(id /* block */)arg1 forName:(unsigned long long)arg2;
- (id)supportedCommands;
- (id /* block */)transactionCallbackForName:(unsigned long long)arg1;

@end
