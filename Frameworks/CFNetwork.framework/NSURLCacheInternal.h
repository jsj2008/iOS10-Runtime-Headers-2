/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCacheInternal : NSObject {
    struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct shared_ptr<__CFURLCache> { struct __CFURLCache {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; } * _cacheRef;
    unsigned long long  currentDiskUsage;
    unsigned long long  currentMemoryUsage;
    unsigned long long  diskCapacity;
    NSString * diskPath;
    unsigned long long  memoryCapacity;
}

- (void)dealloc;
- (void)finalize;

@end
