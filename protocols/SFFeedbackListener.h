/* Generated by RuntimeBrowser.
 */

@protocol SFFeedbackListener <NSObject>

@optional

- (void)cardViewDidDisappear:(SFCardViewDisappearFeedback *)arg1;
- (void)didAppendLateSections:(SFLateSectionsAppendedFeedback *)arg1;
- (void)didClearInput:(SFClearInputFeedback *)arg1;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1;
- (void)didEngageCardSection:(SFCardSectionEngagementFeedback *)arg1;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1;
- (void)didEngageSection:(SFSectionEngagementFeedback *)arg1;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1;
- (void)didErrorOccur:(SFErrorFeedback *)arg1;
- (void)didRankSections:(SFRankingFeedback *)arg1;
- (void)didReceiveResultsAfterTimeout:(SFResultsReceivedAfterTimeoutFeedback *)arg1;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1;
- (void)resultsDidBecomeVisible:(SFVisibleResultsFeedback *)arg1;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1;
- (void)sectionHeaderDidBecomeVisible:(SFVisibleSectionHeaderFeedback *)arg1;
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1;
- (void)suggestionsDidBecomeVisible:(SFVisibleSuggestionsFeedback *)arg1;

@end
