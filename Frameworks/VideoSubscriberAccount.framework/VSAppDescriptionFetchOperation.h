/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {
    NSString * _appAdamID;
    ACUIAppDescription * _appDescription;
    NSError * _error;
    SSLookupRequest * _lookupRequest;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredArtworkSize;
    NSOperationQueue * _privateQueue;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, retain) ACUIAppDescription *appDescription;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SSLookupRequest *lookupRequest;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredArtworkSize;
@property (nonatomic, retain) NSOperationQueue *privateQueue;

- (void).cxx_destruct;
- (id)_appDescriptionFromLookupResponse:(id)arg1 artworkImage:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)appAdamID;
- (id)appDescription;
- (void)cancel;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithAppAdamID:(id)arg1 preferredArtworkSize:(struct CGSize { double x1; double x2; })arg2;
- (id)lookupRequest;
- (struct CGSize { double x1; double x2; })preferredArtworkSize;
- (id)privateQueue;
- (void)setAppAdamID:(id)arg1;
- (void)setAppDescription:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLookupRequest:(id)arg1;
- (void)setPreferredArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrivateQueue:(id)arg1;

@end
