/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARFuture : NSObject {
    FutureValue * _futureValue;
}

- (void).cxx_destruct;
- (id)initFromPromise:(id)arg1;
- (id)then:(id /* block */)arg1 queue:(id)arg2;
- (id)wait:(unsigned long long)arg1;
- (id)waitForever;

@end
