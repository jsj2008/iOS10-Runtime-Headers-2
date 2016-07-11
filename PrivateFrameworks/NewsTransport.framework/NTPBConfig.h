/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBConfig : PBCodable <NSCopying> {
    NSString * _anfEmbedConfigurationAsset;
    long long  _appConfigRefreshRate;
    long long  _articleRapidUpdatesTimeout;
    long long  _autoScrollToTopFeedTimeout;
    double  _batchedFeedTimeout;
    long long  _endOfArticleMaxInaccessiblePaidArticles;
    double  _endOfArticleMinPaidHeadlineRatio;
    NSMutableArray * _endpointConfigs;
    NSString * _fallbackLanguageTag;
    NSString * _forYouNonPersonalizedGroupsOrder;
    struct { 
        unsigned int appConfigRefreshRate : 1; 
        unsigned int articleRapidUpdatesTimeout : 1; 
        unsigned int autoScrollToTopFeedTimeout : 1; 
        unsigned int batchedFeedTimeout : 1; 
        unsigned int endOfArticleMaxInaccessiblePaidArticles : 1; 
        unsigned int endOfArticleMinPaidHeadlineRatio : 1; 
        unsigned int initialArticlesFromNewFavorite : 1; 
        unsigned int interstitialAdLoadDelay : 1; 
        unsigned int longReminderTime : 1; 
        unsigned int minimumArticleUpdateInterval : 1; 
        unsigned int minimumDistanceBetweenImageOnTopTiles : 1; 
        unsigned int newFavoriteNotificationAlertsFrequency : 1; 
        unsigned int notificationArticleCacheTimeout : 1; 
        unsigned int notificationArticleWithRapidUpdatesCacheTimeout : 1; 
        unsigned int numberOfScreenfulsScrolledToBypassWidgetTimeLimit : 1; 
        unsigned int prerollLoadingTimeout : 1; 
        unsigned int shortReminderTime : 1; 
        unsigned int subscriptionsGlobalMeteredCount : 1; 
        unsigned int subscriptionsGracePeriodForTokenVerificationSeconds : 1; 
        unsigned int subscriptionsPlacardGlobalMaxPerDay : 1; 
        unsigned int subscriptionsPlacardPublisherFrequencyDays : 1; 
        unsigned int tileProminenceScoreBalanceValue : 1; 
        unsigned int timeBetweenSameWidgetReinsertion : 1; 
        unsigned int timeBetweenWidgetInsertions : 1; 
        unsigned int trendingTopicsRefreshRate : 1; 
        unsigned int newsletterSubscriptionChecked : 1; 
        unsigned int universalLinksEnabled : 1; 
    }  _has;
    NTPBIAdConfig * _iadConfig;
    long long  _initialArticlesFromNewFavorite;
    double  _interstitialAdLoadDelay;
    NSMutableArray * _languageConfigs;
    long long  _longReminderTime;
    long long  _minimumArticleUpdateInterval;
    long long  _minimumDistanceBetweenImageOnTopTiles;
    long long  _newFavoriteNotificationAlertsFrequency;
    bool  _newsletterSubscriptionChecked;
    long long  _notificationArticleCacheTimeout;
    long long  _notificationArticleWithRapidUpdatesCacheTimeout;
    long long  _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
    NTPBPersonalizationConfig * _personalizationConfig;
    NTPBPrefetchConfig * _prefetchConfig;
    double  _prerollLoadingTimeout;
    long long  _shortReminderTime;
    long long  _subscriptionsGlobalMeteredCount;
    long long  _subscriptionsGracePeriodForTokenVerificationSeconds;
    long long  _subscriptionsPlacardGlobalMaxPerDay;
    long long  _subscriptionsPlacardPublisherFrequencyDays;
    double  _tileProminenceScoreBalanceValue;
    long long  _timeBetweenSameWidgetReinsertion;
    long long  _timeBetweenWidgetInsertions;
    long long  _trendingTopicsRefreshRate;
    bool  _universalLinksEnabled;
    NTPBWidgetConfig * _widgetConfig;
}

@property (nonatomic, retain) NSString *anfEmbedConfigurationAsset;
@property (nonatomic) long long appConfigRefreshRate;
@property (nonatomic) long long articleRapidUpdatesTimeout;
@property (nonatomic) long long autoScrollToTopFeedTimeout;
@property (nonatomic) double batchedFeedTimeout;
@property (nonatomic) long long endOfArticleMaxInaccessiblePaidArticles;
@property (nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property (nonatomic, retain) NSMutableArray *endpointConfigs;
@property (nonatomic, retain) NSString *fallbackLanguageTag;
@property (nonatomic, retain) NSString *forYouNonPersonalizedGroupsOrder;
@property (nonatomic, readonly) bool hasAnfEmbedConfigurationAsset;
@property (nonatomic) bool hasAppConfigRefreshRate;
@property (nonatomic) bool hasArticleRapidUpdatesTimeout;
@property (nonatomic) bool hasAutoScrollToTopFeedTimeout;
@property (nonatomic) bool hasBatchedFeedTimeout;
@property (nonatomic) bool hasEndOfArticleMaxInaccessiblePaidArticles;
@property (nonatomic) bool hasEndOfArticleMinPaidHeadlineRatio;
@property (nonatomic, readonly) bool hasFallbackLanguageTag;
@property (nonatomic, readonly) bool hasForYouNonPersonalizedGroupsOrder;
@property (nonatomic, readonly) bool hasIadConfig;
@property (nonatomic) bool hasInitialArticlesFromNewFavorite;
@property (nonatomic) bool hasInterstitialAdLoadDelay;
@property (nonatomic) bool hasLongReminderTime;
@property (nonatomic) bool hasMinimumArticleUpdateInterval;
@property (nonatomic) bool hasMinimumDistanceBetweenImageOnTopTiles;
@property (nonatomic) bool hasNewFavoriteNotificationAlertsFrequency;
@property (nonatomic) bool hasNewsletterSubscriptionChecked;
@property (nonatomic) bool hasNotificationArticleCacheTimeout;
@property (nonatomic) bool hasNotificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic) bool hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property (nonatomic, readonly) bool hasPersonalizationConfig;
@property (nonatomic, readonly) bool hasPrefetchConfig;
@property (nonatomic) bool hasPrerollLoadingTimeout;
@property (nonatomic) bool hasShortReminderTime;
@property (nonatomic) bool hasSubscriptionsGlobalMeteredCount;
@property (nonatomic) bool hasSubscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic) bool hasSubscriptionsPlacardGlobalMaxPerDay;
@property (nonatomic) bool hasSubscriptionsPlacardPublisherFrequencyDays;
@property (nonatomic) bool hasTileProminenceScoreBalanceValue;
@property (nonatomic) bool hasTimeBetweenSameWidgetReinsertion;
@property (nonatomic) bool hasTimeBetweenWidgetInsertions;
@property (nonatomic) bool hasTrendingTopicsRefreshRate;
@property (nonatomic) bool hasUniversalLinksEnabled;
@property (nonatomic, readonly) bool hasWidgetConfig;
@property (nonatomic, retain) NTPBIAdConfig *iadConfig;
@property (nonatomic) long long initialArticlesFromNewFavorite;
@property (nonatomic) double interstitialAdLoadDelay;
@property (nonatomic, retain) NSMutableArray *languageConfigs;
@property (nonatomic) long long longReminderTime;
@property (nonatomic) long long minimumArticleUpdateInterval;
@property (nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property (nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property (nonatomic) bool newsletterSubscriptionChecked;
@property (nonatomic) long long notificationArticleCacheTimeout;
@property (nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property (nonatomic, retain) NTPBPersonalizationConfig *personalizationConfig;
@property (nonatomic, retain) NTPBPrefetchConfig *prefetchConfig;
@property (nonatomic) double prerollLoadingTimeout;
@property (nonatomic) long long shortReminderTime;
@property (nonatomic) long long subscriptionsGlobalMeteredCount;
@property (nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic) long long subscriptionsPlacardGlobalMaxPerDay;
@property (nonatomic) long long subscriptionsPlacardPublisherFrequencyDays;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic) long long timeBetweenSameWidgetReinsertion;
@property (nonatomic) long long timeBetweenWidgetInsertions;
@property (nonatomic) long long trendingTopicsRefreshRate;
@property (nonatomic) bool universalLinksEnabled;
@property (nonatomic, retain) NTPBWidgetConfig *widgetConfig;

+ (Class)endpointConfigsType;
+ (Class)languageConfigsType;

- (void).cxx_destruct;
- (void)addEndpointConfigs:(id)arg1;
- (void)addLanguageConfigs:(id)arg1;
- (id)anfEmbedConfigurationAsset;
- (long long)appConfigRefreshRate;
- (long long)articleRapidUpdatesTimeout;
- (long long)autoScrollToTopFeedTimeout;
- (double)batchedFeedTimeout;
- (void)clearEndpointConfigs;
- (void)clearLanguageConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endOfArticleMaxInaccessiblePaidArticles;
- (double)endOfArticleMinPaidHeadlineRatio;
- (id)endpointConfigs;
- (id)endpointConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endpointConfigsCount;
- (id)fallbackLanguageTag;
- (id)forYouNonPersonalizedGroupsOrder;
- (bool)hasAnfEmbedConfigurationAsset;
- (bool)hasAppConfigRefreshRate;
- (bool)hasArticleRapidUpdatesTimeout;
- (bool)hasAutoScrollToTopFeedTimeout;
- (bool)hasBatchedFeedTimeout;
- (bool)hasEndOfArticleMaxInaccessiblePaidArticles;
- (bool)hasEndOfArticleMinPaidHeadlineRatio;
- (bool)hasFallbackLanguageTag;
- (bool)hasForYouNonPersonalizedGroupsOrder;
- (bool)hasIadConfig;
- (bool)hasInitialArticlesFromNewFavorite;
- (bool)hasInterstitialAdLoadDelay;
- (bool)hasLongReminderTime;
- (bool)hasMinimumArticleUpdateInterval;
- (bool)hasMinimumDistanceBetweenImageOnTopTiles;
- (bool)hasNewFavoriteNotificationAlertsFrequency;
- (bool)hasNewsletterSubscriptionChecked;
- (bool)hasNotificationArticleCacheTimeout;
- (bool)hasNotificationArticleWithRapidUpdatesCacheTimeout;
- (bool)hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
- (bool)hasPersonalizationConfig;
- (bool)hasPrefetchConfig;
- (bool)hasPrerollLoadingTimeout;
- (bool)hasShortReminderTime;
- (bool)hasSubscriptionsGlobalMeteredCount;
- (bool)hasSubscriptionsGracePeriodForTokenVerificationSeconds;
- (bool)hasSubscriptionsPlacardGlobalMaxPerDay;
- (bool)hasSubscriptionsPlacardPublisherFrequencyDays;
- (bool)hasTileProminenceScoreBalanceValue;
- (bool)hasTimeBetweenSameWidgetReinsertion;
- (bool)hasTimeBetweenWidgetInsertions;
- (bool)hasTrendingTopicsRefreshRate;
- (bool)hasUniversalLinksEnabled;
- (bool)hasWidgetConfig;
- (unsigned long long)hash;
- (id)iadConfig;
- (long long)initialArticlesFromNewFavorite;
- (double)interstitialAdLoadDelay;
- (bool)isEqual:(id)arg1;
- (id)languageConfigs;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfigsCount;
- (long long)longReminderTime;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleUpdateInterval;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)newFavoriteNotificationAlertsFrequency;
- (bool)newsletterSubscriptionChecked;
- (long long)notificationArticleCacheTimeout;
- (long long)notificationArticleWithRapidUpdatesCacheTimeout;
- (long long)numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
- (id)personalizationConfig;
- (id)prefetchConfig;
- (double)prerollLoadingTimeout;
- (bool)readFrom:(id)arg1;
- (void)setAnfEmbedConfigurationAsset:(id)arg1;
- (void)setAppConfigRefreshRate:(long long)arg1;
- (void)setArticleRapidUpdatesTimeout:(long long)arg1;
- (void)setAutoScrollToTopFeedTimeout:(long long)arg1;
- (void)setBatchedFeedTimeout:(double)arg1;
- (void)setEndOfArticleMaxInaccessiblePaidArticles:(long long)arg1;
- (void)setEndOfArticleMinPaidHeadlineRatio:(double)arg1;
- (void)setEndpointConfigs:(id)arg1;
- (void)setFallbackLanguageTag:(id)arg1;
- (void)setForYouNonPersonalizedGroupsOrder:(id)arg1;
- (void)setHasAppConfigRefreshRate:(bool)arg1;
- (void)setHasArticleRapidUpdatesTimeout:(bool)arg1;
- (void)setHasAutoScrollToTopFeedTimeout:(bool)arg1;
- (void)setHasBatchedFeedTimeout:(bool)arg1;
- (void)setHasEndOfArticleMaxInaccessiblePaidArticles:(bool)arg1;
- (void)setHasEndOfArticleMinPaidHeadlineRatio:(bool)arg1;
- (void)setHasInitialArticlesFromNewFavorite:(bool)arg1;
- (void)setHasInterstitialAdLoadDelay:(bool)arg1;
- (void)setHasLongReminderTime:(bool)arg1;
- (void)setHasMinimumArticleUpdateInterval:(bool)arg1;
- (void)setHasMinimumDistanceBetweenImageOnTopTiles:(bool)arg1;
- (void)setHasNewFavoriteNotificationAlertsFrequency:(bool)arg1;
- (void)setHasNewsletterSubscriptionChecked:(bool)arg1;
- (void)setHasNotificationArticleCacheTimeout:(bool)arg1;
- (void)setHasNotificationArticleWithRapidUpdatesCacheTimeout:(bool)arg1;
- (void)setHasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(bool)arg1;
- (void)setHasPrerollLoadingTimeout:(bool)arg1;
- (void)setHasShortReminderTime:(bool)arg1;
- (void)setHasSubscriptionsGlobalMeteredCount:(bool)arg1;
- (void)setHasSubscriptionsGracePeriodForTokenVerificationSeconds:(bool)arg1;
- (void)setHasSubscriptionsPlacardGlobalMaxPerDay:(bool)arg1;
- (void)setHasSubscriptionsPlacardPublisherFrequencyDays:(bool)arg1;
- (void)setHasTileProminenceScoreBalanceValue:(bool)arg1;
- (void)setHasTimeBetweenSameWidgetReinsertion:(bool)arg1;
- (void)setHasTimeBetweenWidgetInsertions:(bool)arg1;
- (void)setHasTrendingTopicsRefreshRate:(bool)arg1;
- (void)setHasUniversalLinksEnabled:(bool)arg1;
- (void)setIadConfig:(id)arg1;
- (void)setInitialArticlesFromNewFavorite:(long long)arg1;
- (void)setInterstitialAdLoadDelay:(double)arg1;
- (void)setLanguageConfigs:(id)arg1;
- (void)setLongReminderTime:(long long)arg1;
- (void)setMinimumArticleUpdateInterval:(long long)arg1;
- (void)setMinimumDistanceBetweenImageOnTopTiles:(long long)arg1;
- (void)setNewFavoriteNotificationAlertsFrequency:(long long)arg1;
- (void)setNewsletterSubscriptionChecked:(bool)arg1;
- (void)setNotificationArticleCacheTimeout:(long long)arg1;
- (void)setNotificationArticleWithRapidUpdatesCacheTimeout:(long long)arg1;
- (void)setNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(long long)arg1;
- (void)setPersonalizationConfig:(id)arg1;
- (void)setPrefetchConfig:(id)arg1;
- (void)setPrerollLoadingTimeout:(double)arg1;
- (void)setShortReminderTime:(long long)arg1;
- (void)setSubscriptionsGlobalMeteredCount:(long long)arg1;
- (void)setSubscriptionsGracePeriodForTokenVerificationSeconds:(long long)arg1;
- (void)setSubscriptionsPlacardGlobalMaxPerDay:(long long)arg1;
- (void)setSubscriptionsPlacardPublisherFrequencyDays:(long long)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (void)setTimeBetweenSameWidgetReinsertion:(long long)arg1;
- (void)setTimeBetweenWidgetInsertions:(long long)arg1;
- (void)setTrendingTopicsRefreshRate:(long long)arg1;
- (void)setUniversalLinksEnabled:(bool)arg1;
- (void)setWidgetConfig:(id)arg1;
- (long long)shortReminderTime;
- (long long)subscriptionsGlobalMeteredCount;
- (long long)subscriptionsGracePeriodForTokenVerificationSeconds;
- (long long)subscriptionsPlacardGlobalMaxPerDay;
- (long long)subscriptionsPlacardPublisherFrequencyDays;
- (double)tileProminenceScoreBalanceValue;
- (long long)timeBetweenSameWidgetReinsertion;
- (long long)timeBetweenWidgetInsertions;
- (long long)trendingTopicsRefreshRate;
- (bool)universalLinksEnabled;
- (id)widgetConfig;
- (void)writeTo:(id)arg1;

@end
