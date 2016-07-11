/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteDataAccessor : PKDataAccessor {
    PKPassLibrary * _library;
    NSString * _objectUniqueID;
}

@property (nonatomic, readonly) PKPassLibrary *library;
@property (nonatomic, readonly) NSString *objectUniqueID;

- (void).cxx_destruct;
- (id)archiveData;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)displayProfileOfType:(long long)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (id)library;
- (void)noteShared;
- (id)objectUniqueID;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (void)updateSettings:(unsigned long long)arg1;

@end
