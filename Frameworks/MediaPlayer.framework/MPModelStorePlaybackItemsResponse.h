/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackItemsResponse : MPModelResponse {
    bool  _finalResponse;
    MPModelStorePlaybackItemsResponse * _updatedResponse;
}

@property (getter=_updatedResponse, nonatomic, readonly) MPModelStorePlaybackItemsResponse *_updatedResponse;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;

- (void).cxx_destruct;
- (void)_invalidateWithUpdatedResponse:(id)arg1;
- (id)_updatedResponse;
- (bool)isFinalResponse;
- (void)setFinalResponse:(bool)arg1;

@end
