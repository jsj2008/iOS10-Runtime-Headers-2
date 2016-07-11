/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkOperation : FCOperation {
    double  _preferredTimeoutIntervalForRequest;
}

@property (nonatomic) double preferredTimeoutIntervalForRequest;

- (bool)_canRetryWithError:(id)arg1 retryAfter:(double*)arg2;
- (bool)canRetryWithError:(id)arg1 retryAfter:(double*)arg2;
- (unsigned long long)maxRetries;
- (double)preferredTimeoutIntervalForRequest;
- (void)setPreferredTimeoutIntervalForRequest:(double)arg1;

@end
