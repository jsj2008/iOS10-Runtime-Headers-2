/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGOperationForWithDbLock : NSOperation {
    bool  _completed;
    NSObject<OS_dispatch_group> * _group;
    bool  _started;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)complete;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;
- (void)waitForStart;

@end
