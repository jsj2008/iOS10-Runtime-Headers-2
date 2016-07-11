/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering> {
    NSSet * _articleIds;
    NSDictionary * _articleScoresByTag;
    NSDictionary * _articlesByTag;
    NSSet * _groupableTags;
    NSSet * _hardOrphans;
    FCSolHeuristic * _heuristic;
    FCHeadlineClusteringRules * _rules;
    NSSet * _subscribedTagIDs;
    NSDictionary * _tagsByArticle;
}

@property (nonatomic, retain) NSSet *articleIds;
@property (nonatomic, retain) NSDictionary *articleScoresByTag;
@property (nonatomic, retain) NSDictionary *articlesByTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *groupableTags;
@property (nonatomic, retain) NSSet *hardOrphans;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCSolHeuristic *heuristic;
@property (nonatomic, retain) FCHeadlineClusteringRules *rules;
@property (nonatomic, retain) NSSet *subscribedTagIDs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tagsByArticle;

- (void).cxx_destruct;
- (id)articleIds;
- (id)articleScoresByTag;
- (id)articlesByTag;
- (id)assignArticles:(id)arg1 groups:(id)arg2;
- (id)clusterHeadlinesByTopic:(id)arg1 subscribedTopicIDs:(id)arg2 rules:(id)arg3;
- (id)computeBestGrouping:(id)arg1 subscribedTagIDs:(id)arg2 articleScoresByTag:(id)arg3;
- (id)computeBestMoveWithTag:(id)arg1 groupableArticles:(id)arg2 solos:(id)arg3 ungroupedArticles:(id)arg4 remainingTags:(id)arg5 groups:(id)arg6 topK:(double)arg7;
- (void)computeGrouping:(id)arg1 topK:(double)arg2;
- (id)computeNewOrphansWithUngroupedArticles:(id)arg1 remainingTags:(id)arg2;
- (void)createMoveWithTag:(id)arg1 articles:(id)arg2 remainingTags:(id)arg3 ungroupedArticles:(id)arg4 moves:(id)arg5 groups:(id)arg6;
- (id)generateCombosWithSet:(id)arg1 tag:(id)arg2 chooseSize:(long long)arg3;
- (id)groupableTags;
- (id)hardOrphans;
- (id)heuristic;
- (void)mergeGroups:(id)arg1;
- (double)normalizedAboutnessForArticle:(id)arg1 tag:(id)arg2;
- (bool)reassignedArticleInGroups:(id)arg1 withTag:(id)arg2;
- (void)regroupOrphans:(id)arg1;
- (id)rules;
- (void)setArticleIds:(id)arg1;
- (void)setArticleScoresByTag:(id)arg1;
- (void)setArticlesByTag:(id)arg1;
- (void)setGroupableTags:(id)arg1;
- (void)setHardOrphans:(id)arg1;
- (void)setHeuristic:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (void)setTagsByArticle:(id)arg1;
- (id)subscribedTagIDs;
- (id)tagsByArticle;

@end
