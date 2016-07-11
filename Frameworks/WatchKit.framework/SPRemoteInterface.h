/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol> {
    NSMutableArray * _activeComplicationsConnections;
    id /* block */  _addPassesCompletion;
    NSString * _appClientIdentifier;
    id /* block */  _audioRecorderControllerCompletion;
    <SPRemoteInterfaceDataDelegateProtocol> * _dataDelegate;
    NSMutableDictionary * _interfaceControllers;
    NSObject<OS_dispatch_queue> * _interfaceControllersAccessQueue;
    NSMutableDictionary * _interfaceControllersOwners;
    id /* block */  _mediaPlayerControllerCompletion;
    NSMutableSet * _missingInterfaceControllers;
    NSString * _navigatingViewControllerID;
    NSMutableArray * _openParentRequests;
    NSString * _rootViewControllerID;
    id  _runLoopObserver;
    id /* block */  _textInputCompletion;
    id /* block */  _textInputSuggestions;
}

@property (nonatomic, retain) NSMutableArray *activeComplicationsConnections;
@property (nonatomic, copy) id /* block */ addPassesCompletion;
@property (nonatomic, retain) NSString *appClientIdentifier;
@property (nonatomic, copy) id /* block */ audioRecorderControllerCompletion;
@property (nonatomic, retain) <SPRemoteInterfaceDataDelegateProtocol> *dataDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *interfaceControllers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *interfaceControllersAccessQueue;
@property (nonatomic, retain) NSMutableDictionary *interfaceControllersOwners;
@property (nonatomic, copy) id /* block */ mediaPlayerControllerCompletion;
@property (nonatomic, retain) NSMutableSet *missingInterfaceControllers;
@property (nonatomic, retain) NSString *navigatingViewControllerID;
@property (nonatomic, retain) NSMutableArray *openParentRequests;
@property (nonatomic, retain) NSString *rootViewControllerID;
@property (nonatomic, retain) id runLoopObserver;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ textInputCompletion;
@property (nonatomic, copy) id /* block */ textInputSuggestions;

+ (id)SerializablePropertyValue:(id)arg1;
+ (void)_logDuplicate:(id)arg1 controller:(id)arg2 key:(id)arg3 property:(id)arg4 value:(id)arg5;
+ (id)_remoteIdentifier;
+ (void)_setupStorageForController:(id)arg1;
+ (void)_updateAccessibility;
+ (bool)allowUIUpdate:(id)arg1;
+ (bool)allowUIUpdate:(id)arg1 isSetValue:(bool)arg2;
+ (id)cacheIdentifier;
+ (void)clearStorageForController:(id)arg1;
+ (void)controller:(id)arg1 presentAddPassesControllerWithPasses:(id)arg2 completion:(id /* block */)arg3;
+ (void)controller:(id)arg1 presentInterfaceController:(id)arg2 context:(id)arg3;
+ (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 contexts:(id)arg3;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestions:(id)arg2 allowedInputMode:(id)arg3 completion:(id /* block */)arg4;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestionsForLanguage:(id /* block */)arg2 allowedInputMode:(id)arg3 completion:(id /* block */)arg4;
+ (void)controller:(id)arg1 pushInterfaceController:(id)arg2 context:(id)arg3;
+ (id)controller:(id)arg1 setupProperties:(id)arg2 viewControllerID:(id)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 classForType:(int (*)arg6;
+ (void)controllerBecomeCurrentPage:(id)arg1;
+ (void)controllerDismiss:(id)arg1;
+ (void)controllerDismissAddPassesController:(id)arg1;
+ (void)controllerDismissTextInputController:(id)arg1;
+ (void)controllerPop:(id)arg1;
+ (void)controllerPopToRoot:(id)arg1;
+ (void)didFinishHandlingActivity:(id)arg1;
+ (void)handleEvent:(id /* block */)arg1;
+ (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
+ (bool)openParentApplication:(id)arg1 reply:(id /* block */)arg2;
+ (void)openSystemURL:(id)arg1;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (void)removePageControllerAtIndexes:(id)arg1;
+ (void)sendCacheRequest:(id)arg1;
+ (void)sendCacheRequestMessage:(id)arg1;
+ (bool)sendDataToApp:(id)arg1;
+ (bool)sendDataToApp:(id)arg1 reply:(id /* block */)arg2;
+ (void)setController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4;
+ (void)setControllerActive:(id)arg1;
+ (void)setControllerInactive:(id)arg1;
+ (id)startRemoteInterface;
+ (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 interfaceController:(id)arg4;

- (void).cxx_destruct;
- (void)_activateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (void)_callDidDeactivate;
- (void)_deregisterInterfaceControllerID:(id)arg1;
- (void)_dumpInterfaceDictionary;
- (void)_fillDataWithRandom:(id)arg1 length:(long long)arg2;
- (bool)_handleAction:(id)arg1 forNotification:(id)arg2 remoteNotificationContext:(id)arg3 localNotification:(id)arg4 unNotification:(id)arg5 handler:(id)arg6 controller:(id)arg7;
- (id)_interfaceControllerClientIDForControllerID:(id)arg1;
- (id)_interfaceControllerID:(id)arg1;
- (id)_interfaceControllerIDsForClientID:(id)arg1;
- (id)_interfaceControllerWithID:(id)arg1;
- (void)_registerInterfaceController:(id)arg1 interfaceControllerID:(id)arg2 interfaceControllerClientID:(id)arg3 applicationRootController:(bool)arg4;
- (void)_requestTimingData:(id)arg1;
- (void)_saveReceiveTime;
- (void)_saveSendTimeAndSize:(unsigned long long)arg1;
- (bool)_sendDataToApp:(id)arg1 reply:(id /* block */)arg2;
- (void)_sendOpenParentApplicationRequest;
- (id)_setupSignal:(int)arg1 handler:(id /* block */)arg2;
- (void)_setupSignalHandlers;
- (void)activateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (id)activeComplicationsConnections;
- (id /* block */)addPassesCompletion;
- (id)appClientIdentifier;
- (void)applicationContentsDidReset:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishConnecting:(id)arg1;
- (void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)applicationDidTerminate:(id)arg1;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(id)arg1;
- (id /* block */)audioRecorderControllerCompletion;
- (void)controller:(id)arg1 presentInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 initializationContextIDs:(id)arg3;
- (void)controller:(id)arg1 pushInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controllerBecomeCurrentPage:(id)arg1;
- (void)controllerDismiss:(id)arg1;
- (void)controllerDismissAddPassesController:(id)arg1;
- (void)controllerDismissTextInputController:(id)arg1;
- (id)controllerMethods:(id)arg1;
- (void)controllerPop:(id)arg1;
- (void)controllerPopToRoot:(id)arg1;
- (void)controllerPresentAddPassesController:(id)arg1 passes:(id)arg2;
- (void)controllerPresentTextInputController:(id)arg1 allowedInputMode:(id)arg2 suggestions:(id)arg3;
- (void)createViewController:(id)arg1 className:(id)arg2 properties:(id)arg3 contextID:(id)arg4 info:(id)arg5 gestureDescriptions:(id)arg6 clientIdentifier:(id)arg7;
- (id)dataDelegate;
- (void)dataInterfaceDidBecomeActive:(id)arg1;
- (void)dataInterfaceWillResignActive:(id)arg1;
- (void)deactivateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (void)dealloc;
- (void)didFinishHandlingActivity:(id)arg1;
- (void)extensionDidBeginNotificationUICreation;
- (void)extensionDidEndNotificationUICreation;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(id /* block */)arg2;
- (void)finishActivatingVCWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)getComplicationData:(id)arg1;
- (void)handlePlistDictionary:(id)arg1 fromIdentifier:(id)arg2;
- (void)handleProtoPlist:(id)arg1 fromIdentifier:(id)arg2;
- (id)init;
- (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 initializationContextIDs:(id)arg3;
- (id)interfaceControllers;
- (id)interfaceControllersAccessQueue;
- (id)interfaceControllersOwners;
- (id)interfaceCreationContextForID:(id)arg1;
- (void)layoutDirection:(long long)arg1;
- (id /* block */)mediaPlayerControllerCompletion;
- (id)missingInterfaceControllers;
- (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)navigatingViewControllerID;
- (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
- (bool)openParentApplication:(id)arg1 reply:(id /* block */)arg2;
- (id)openParentRequests;
- (void)openSystemURL:(id)arg1;
- (void)preferredContentSizeCategory:(id)arg1;
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveDataFromApplication:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveNavigationReply:(id)arg1 clientIdentifier:(id)arg2;
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
- (void)recoverFromMissingIntefaceControllerWithID:(id)arg1;
- (void)reloadRootControllersWithNames:(id)arg1 initializationContextIDs:(id)arg2;
- (void)removeInterfaceControllersForClient:(id)arg1;
- (void)removePageControllerAtIndexes:(id)arg1;
- (void)replyTimingData:(id)arg1;
- (void)replyWithExtensionTimingData:(id)arg1;
- (void)rootInterfaceController:(id)arg1 performActionWithItemID:(id)arg2 forNotificationID:(id)arg3 userInfo:(id)arg4 clientIdentifier:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)rootViewControllerID;
- (id)runLoopObserver;
- (void)sendCacheRequestMessage:(id)arg1;
- (void)sendComplicationObject:(id)arg1;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (void)sendPlist:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendSetViewController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4 clientIdentifiers:(id)arg5;
- (void)sendSetViewController:(id)arg1 values:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendWillActivateReplyForController:(id)arg1;
- (void)setActiveComplicationsConnections:(id)arg1;
- (void)setAddPassesCompletion:(id /* block */)arg1;
- (void)setAppClientIdentifier:(id)arg1;
- (void)setAudioRecorderControllerCompletion:(id /* block */)arg1;
- (void)setDataDelegate:(id)arg1;
- (void)setInterfaceControllers:(id)arg1;
- (void)setInterfaceControllersAccessQueue:(id)arg1;
- (void)setInterfaceControllersOwners:(id)arg1;
- (void)setMediaPlayerControllerCompletion:(id /* block */)arg1;
- (void)setMissingInterfaceControllers:(id)arg1;
- (void)setNavigatingViewControllerID:(id)arg1;
- (void)setOpenParentRequests:(id)arg1;
- (void)setRootViewControllerID:(id)arg1;
- (void)setRunLoopObserver:(id)arg1;
- (void)setTextInputCompletion:(id /* block */)arg1;
- (void)setTextInputSuggestions:(id /* block */)arg1;
- (id)storeInterfaceCreationContext:(id)arg1;
- (id /* block */)textInputCompletion;
- (id /* block */)textInputSuggestions;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 controller:(id)arg4;

@end
