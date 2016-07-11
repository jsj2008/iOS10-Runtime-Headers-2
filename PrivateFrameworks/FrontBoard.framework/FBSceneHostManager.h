/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneHostManager : NSObject <BSDescriptionProviding, FBSceneLayerHostContainerViewDelegate> {
    FBSceneHostWrapperView * _activeWrapperView;
    UIColor * _defaultBackgroundColorWhileHosting;
    UIColor * _defaultBackgroundColorWhileNotHosting;
    unsigned long long  _defaultHostedLayerTypes;
    <FBSceneHostManagerDelegate> * _delegate;
    struct { 
        unsigned int delegateOverrideRequester : 1; 
        unsigned int DEPRECATED_delegateOverrideRequester : 1; 
        unsigned int delegateShouldEnableContextHostingForRequester : 1; 
        unsigned int DEPRECATED_delegateShouldEnableContextHostingForRequester : 1; 
    }  _flags;
    FBOrderedRequesters * _hostRequesters;
    FBSceneLayerHostContainerView * _hostView;
    NSMutableDictionary * _hostWrapperViewsByRequester;
    NSString * _identifier;
    bool  _invalidated;
    FBSceneLayerManager * _layerManager;
    NSHashTable * _observers;
    FBScene * _scene;
    bool  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileHosting;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long defaultHostedLayerTypes;
@property (nonatomic) <FBSceneHostManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void)_activateRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludedContextIDs:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludedLayers:(id)arg2 opaque:(bool)arg3;
- (id)_wrapperViewForRequester:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)defaultBackgroundColorWhileHosting;
- (id)defaultBackgroundColorWhileNotHosting;
- (unsigned long long)defaultHostedLayerTypes;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(bool)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (id)identifier;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isSuspended;
- (void)orderRequesterFront:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resumeLayerHosting;
- (id)scene;
- (void)sceneLayerHostContainerViewHostedLayersDidChange:(id)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(bool)arg2 forRequester:(id)arg3;
- (void)setDefaultBackgroundColorWhileHosting:(id)arg1;
- (void)setDefaultBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(bool)arg2 forRequester:(id)arg3;
- (struct CGImage { }*)snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotContextForRequester:(id)arg1;
- (struct __IOSurface { }*)snapshotIOSurfaceForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)suspendLayerHosting;
- (id)visibleContexts;
- (id)visibleLayers;
- (id)visibleLayersForRequester:(id)arg1;

@end
