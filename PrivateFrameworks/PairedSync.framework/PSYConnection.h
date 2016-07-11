/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYConnection : NSObject {
    NSXPCConnection * _connection;
    <PSYConnectionDelegate> * _delegate;
    PSYOptions * _options;
    bool  _valid;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <PSYConnectionDelegate> *delegate;
@property (nonatomic, retain) PSYOptions *options;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (id)init;
- (bool)isValid;
- (id)options;
- (id)remoteConnection;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)startSync;
- (void)startSyncWithOptions:(id)arg1;

@end
