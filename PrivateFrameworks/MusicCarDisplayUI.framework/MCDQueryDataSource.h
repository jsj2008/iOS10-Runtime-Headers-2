/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDQueryDataSource : MPUCompletionQueryDataSource {
    MPMediaPredicate * _localPredicate;
}

- (void).cxx_destruct;
- (void)_predicateBehaviorsChangedNotification:(id)arg1;
- (id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1;
- (bool)_updateQueryPredicatesAndOrdering;
- (void)dealloc;
- (bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (bool)queryIsNowPlayingAtIndex:(unsigned long long)arg1;
- (bool)showsIndexBar;

@end
