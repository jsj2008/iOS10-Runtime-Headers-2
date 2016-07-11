/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryClientProtocol, WBSHistoryConnectionProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionProxyQueue;
    bool  _registeredForHistoryNotifications;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionProxyQueue;
@property (getter=isRegisteredForHistoryNotifications, nonatomic, readonly) bool registeredForHistoryNotifications;

- (void).cxx_destruct;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(id /* block */)arg1;
- (void)_registerForHistoryNotifications;
- (void)beginHistoryAccessSession:(id /* block */)arg1;
- (void)beginURLCompletionSession:(id /* block */)arg1;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (id)connectionProxyQueue;
- (void)dealloc;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)arg1;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isRegisteredForHistoryNotifications;
- (void)killService;
- (void)makePermanentAllTestDriveHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)processRemoteHistoryNotification:(id)arg1;
- (void)recordRedirectFromVisitWithUUID:(id)arg1 destinationURL:(id)arg2 origin:(long long)arg3 date:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)recordVisitToURL:(id)arg1 title:(id)arg2 wasHTTPNonGet:(bool)arg3 visitWasFailure:(bool)arg4 increaseVisitCount:(bool)arg5 origin:(long long)arg6 completionHandler:(id /* block */)arg7;
- (void)registerForHistoryNotifications;
- (void)removeAllTestDriveHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)removeItemsWithURLsInResponseToUserAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterForHistoryNotifications;
- (void)updateTitle:(id)arg1 forVisitWithUUID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
