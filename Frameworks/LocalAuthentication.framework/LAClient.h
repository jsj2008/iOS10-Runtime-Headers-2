/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAClient : NSObject <LAContextCallbackXPC, LAContextXPC> {
    LACachedExternalizedContext * _cachedExternalizedContext;
    NSMutableArray * _callInvalidationBlocks;
    NSData * _existingContext;
    NSError * _permanentError;
    <LAContextXPC> * _remoteContext;
    NSXPCConnection * _serverConnection;
    bool  _shouldRecoverConnection;
    <LAUIDelegate> * _uiDelegate;
}

@property (nonatomic, readonly) NSData *externalizedContext;
@property (nonatomic) <LAUIDelegate> *uiDelegate;

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)_queue;
+ (id)_recoveryQueue;

- (void).cxx_destruct;
- (void)_performCallBool:(id /* block */)arg1 finally:(id /* block */)arg2;
- (void)_performCallId:(id /* block */)arg1 finally:(id /* block */)arg2;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (bool)_setPermanentError:(id)arg1;
- (id)_updateOptions:(id)arg1;
- (void)dealloc;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(id /* block */)arg5;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(id /* block */)arg4;
- (id)externalizedContext;
- (void)externalizedContextWithReply:(id /* block */)arg1;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithExistingContext:(id)arg1;
- (void)invalidate;
- (void)invalidatedWithError:(id)arg1;
- (void)isCredentialSet:(long long)arg1 reply:(id /* block */)arg2;
- (void)prearmTouchIdWithReply:(id /* block */)arg1;
- (id)serverPropertyForOption:(long long)arg1 error:(id*)arg2;
- (void)serverPropertyForOption:(long long)arg1 reply:(id /* block */)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(id /* block */)arg4;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(id /* block */)arg3;
- (bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id*)arg3;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(id /* block */)arg3;
- (void)setUiDelegate:(id)arg1;
- (id)uiDelegate;

@end
