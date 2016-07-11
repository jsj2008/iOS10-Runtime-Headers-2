/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTCaptionsRequest : YTXMLHTTPRequest {
    NSMutableArray * _captions;
    <YTCaptionsRequestDelegate> * _delegate;
    YTVideo * _video;
}

- (void)_requestCaptionsFromURL:(id)arg1;
- (void)dealloc;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)initRequestingCaptionsForVideo:(id)arg1 withDelegate:(id)arg2;
- (int)parseData:(id)arg1;
- (id)video;

@end
