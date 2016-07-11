/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostProtocol> {
    <_MSMessageComposeHostProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MSMessageComposeHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestPresentationStyleExpanded:(bool)arg1;
- (void)_stageAppItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_stageMediaItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_stageRichLink:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
