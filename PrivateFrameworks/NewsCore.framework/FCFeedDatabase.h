/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate> {
    NSMutableDictionary * _cachedFeedsByID;
    NSEntityDescription * _feedEntity;
    NSEntityDescription * _feedItemEntity;
    NSEntityDescription * _feedItemIndexEntity;
    NSEntityDescription * _feedSegmentEntity;
    NSManagedObjectContext * _managedObjectContext;
    int  _nextFeedLookupID;
    NSPersistentStore * _persistentStore;
    <FCOperationThrottler> * _saveThrottler;
}

@property (nonatomic, retain) NSMutableDictionary *cachedFeedsByID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSEntityDescription *feedEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemIndexEntity;
@property (nonatomic, retain) NSEntityDescription *feedSegmentEntity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) int nextFeedLookupID;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) <FCOperationThrottler> *saveThrottler;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)temporaryFeedDatabase;

- (void).cxx_destruct;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2;
- (id)_feedsForLookups:(id)arg1;
- (id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3;
- (id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2;
- (id)cachedFeedsByID;
- (void)d_sanityCheckFeed:(id)arg1;
- (id)feedEntity;
- (id)feedItemEntity;
- (id)feedItemIndexEntity;
- (id)feedSegmentEntity;
- (id)initWithParentDirectoryURL:(id)arg1;
- (id)managedObjectContext;
- (int)nextFeedLookupID;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)performDatabaseLookups:(id)arg1;
- (id)persistentStore;
- (void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(bool)arg6 reachedEnd:(bool)arg7;
- (id)saveThrottler;
- (void)setCachedFeedsByID:(id)arg1;
- (void)setFeedEntity:(id)arg1;
- (void)setFeedItemEntity:(id)arg1;
- (void)setFeedItemIndexEntity:(id)arg1;
- (void)setFeedSegmentEntity:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setNextFeedLookupID:(int)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setSaveThrottler:(id)arg1;

@end
