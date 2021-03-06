/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionProtocol> {
    MSConversation * _activeConversation;
    NSMapTable * _conversationsByIdentifier;
    unsigned long long  _presentationStyle;
}

@property (nonatomic, retain) MSConversation *activeConversation;
@property (nonatomic, readonly) NSMapTable *conversationsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long presentationStyle;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)activeExtensionContext;

- (void).cxx_destruct;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_hostDidBeginDeferredTeardown;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestSnapshotWithCompletion:(id /* block */)arg1;
- (void)_resignActive;
- (id)activeConversation;
- (id)conversationsByIdentifier;
- (void)dealloc;
- (void)dismiss;
- (void)dismissToKeyboard:(bool)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)presentationStyle;
- (id)remoteProxy;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setActiveConversation:(id)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)stageAppItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stageMediaItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stageRichLink:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)updatedConversationForConversationState:(id)arg1;
- (id)viewController;

@end
