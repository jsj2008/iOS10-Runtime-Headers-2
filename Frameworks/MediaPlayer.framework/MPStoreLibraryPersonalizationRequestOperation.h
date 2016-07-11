/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPStoreLibraryPersonalizationRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPStoreLibraryPersonalizationRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)personalizedResponseForModelObject:(id)arg1 requestedProperties:(id)arg2;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
