/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTFavoritesController : NSObject {
    YTAccountFeedRequest * _accountFeedRequest;
    YTAuthenticatedAccountPost * _accountPost;
    NSURL * _batchURL;
    NSMutableArray * _bookmarkShortIDs;
    NSMutableArray * _bookmarkVideos;
    <YTFavoritesControllerDelegate> * _mergeBookmarksDelegate;
    NSMutableArray * _mergedFavorites;
    NSMutableArray * _pendingFavoritesShortIDs;
    bool  _shouldOfferMergeOfLocalBookmarks;
    bool  _usingAccountFavorites;
}

+ (id)sharedFavoritesController;

- (void)YTAuthenticatedAccountPost:(id)arg1 didFinishWithType:(int)arg2 error:(id)arg3;
- (void)_bookmarksDidChangeNotifyObservers:(bool)arg1;
- (void)_loadBookmarks;
- (void)_processNextPendingFavoritesBatch;
- (void)_saveBookmarks;
- (void)accountFeedRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)accountFeedRequest:(id)arg1 receivedVideos:(id)arg2;
- (void)addFavoriteForVideo:(id)arg1;
- (void)addLocalBookmarkForVideo:(id)arg1;
- (id)batchURL;
- (id)bookmarkedShortIDs;
- (id)bookmarkedVideos;
- (void)bookmarksSearchRequestInterrupted;
- (void)dealloc;
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)arg1;
- (void)removeFavoriteForVideo:(id)arg1;
- (void)saveBookmarksIfNeeded;
- (void)searchRequestReturnedVideos:(id)arg1;
- (void)setBatchURL:(id)arg1;
- (void)setLocalBookmarksMergeOffered:(bool)arg1;
- (void)setUsingAccountFavorites:(bool)arg1;
- (bool)shouldOfferMergeOfLocalBookmarks;
- (bool)usingAccountFavorites;

@end
