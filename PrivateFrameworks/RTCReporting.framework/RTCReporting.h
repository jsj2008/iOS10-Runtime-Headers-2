/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface RTCReporting : NSObject {
    NSXPCConnection * _connection;
    int  _counter;
    NSArray * _enabledBackendNames;
    int  _intervalMultiplier;
    id /* block */  _loggingBlock;
    NSMutableDictionary * _periodicServiceDict;
    NSObject<OS_dispatch_queue> * _reportingQueue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ messageLoggingBlock;

+ (id)getPersistentIdentifierForDNU:(bool)arg1;
+ (void)regeneratePersistentIdentifierForDNU:(bool)arg1;
+ (bool)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned int)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11;
+ (bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6;

- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2;
- (void)dealloc;
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(id /* block */)arg2;
- (void)finishSession;
- (bool)flushMessages;
- (void)flushMessagesWithCompletion:(id /* block */)arg1;
- (int)getUploadflag;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(id /* block */)arg4;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3 frameworksToCheck:(id)arg4;
- (id /* block */)messageLoggingBlock;
- (bool)registerPeriodicTask:(id)arg1 needToUpDate:(bool)arg2 needToReport:(bool)arg3 service_block:(id /* block */)arg4;
- (bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(bool)arg2 needToReport:(bool)arg3 serviceBlock:(id /* block */)arg4;
- (bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4;
- (bool)sendMessageWithDictionary:(id)arg1 error:(id*)arg2;
- (void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (bool)serverSupportsFileUpload;
- (void)setMessageLoggingBlock:(id /* block */)arg1;
- (bool)setReportToServer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(id /* block */)arg5;
- (void)setUserInfoDict:(id)arg1;
- (void)startConfigurationWithCompletionHandler:(id /* block */)arg1;
- (bool)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)stopLogTimer;
- (bool)stopLogTimerForSession;
- (bool)unregisterPeriodTask:(id)arg1 unservice_block:(id /* block */)arg2;
- (bool)unregisterPeriodTaskForModule:(unsigned int)arg1;
- (bool)uploadDataArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)uploadFileWithName:(id)arg1;
- (bool)uploadFileWithURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
