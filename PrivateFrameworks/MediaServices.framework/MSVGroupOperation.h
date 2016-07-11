/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVGroupOperation : MSVOperation <MSVOperationQueueDelegate> {
    NSMutableArray * _errors;
    NSBlockOperation * _finishingOperation;
    MSVOperationQueue * _internalQueue;
    NSBlockOperation * _startingOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithOperations:(id)arg1;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithOperations:(id)arg1;
- (void)operationDidFinish:(id)arg1 withErrors:(id)arg2;
- (void)operationQueue:(id)arg1 operationDidFinish:(id)arg2 withErrors:(id)arg3;
- (void)operationQueue:(id)arg1 willAddOperation:(id)arg2;

@end
