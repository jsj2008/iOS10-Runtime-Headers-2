/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSMCallbackInfo : NSObject {
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)handlerQueue;
- (id)initWithCallbackHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)setHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;

@end
