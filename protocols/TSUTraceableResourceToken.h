/* Generated by RuntimeBrowser.
 */

@protocol TSUTraceableResourceToken <NSObject>

@required

- (NSArray *)acquireCallStackSymbols;
- (NSObject *)context;
- (NSString *)intent;
- (void)pauseTimeout;
- (NSArray *)relinquishCallStackSymbols;
- (void)resumeTimeout;
- (double)timeout;

@end
