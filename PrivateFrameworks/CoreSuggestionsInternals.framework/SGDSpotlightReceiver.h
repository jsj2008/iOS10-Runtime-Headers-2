/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDSpotlightReceiver : NSObject {
    SGCoalescingDropBox * _deleteDomainIdentifiersDropbox;
    SGCoalescingDropBox * _deleteIdentifiersDropbox;
    SGCoalescingDropBox * _deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox * _deleteInteractionGroupIdDropbox;
    SGCoalescingDropBox * _deleteInteractionIdDropbox;
    SGDSuggestManager * _manager;
    SGCoalescingDropBox * _purgeDropbox;
}

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_isValidBundleID:(id)arg1;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (id)initWithManager:(id)arg1;
- (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)supportedContentTypes;
- (id)supportedINIntentClassNames;

@end
