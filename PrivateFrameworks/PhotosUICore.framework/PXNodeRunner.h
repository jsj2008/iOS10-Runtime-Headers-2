/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNodeRunner : NSObject {
    NSOperationQueue * _operationQueue;
}

@property long long maxConcurrentRunNodeCount;

- (void).cxx_destruct;
- (void)_processRunGraph:(struct NSArray { Class x1; }*)arg1;
- (id)init;
- (long long)maxConcurrentRunNodeCount;
- (void)processGraphForRunNode:(id)arg1;
- (void)setMaxConcurrentRunNodeCount:(long long)arg1;

@end
