/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying> {
    <HMApplicationData> * _applicationDataContainer;
    NSString * _category;
    NSArray * _sortedHomeKitObjectIdentifiers;
}

@property (nonatomic, readonly) NSString *_applicationDataKey;
@property (nonatomic, readonly) <HMApplicationData> *applicationDataContainer;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) id /* block */ sortedHomeKitItemComparator;
@property (nonatomic, readonly) id /* block */ sortedHomeKitObjectComparator;
@property (nonatomic, copy) NSArray *sortedHomeKitObjectIdentifiers;

- (void).cxx_destruct;
- (id /* block */)_actionSetTypeComparator;
- (id)_applicationDataKey;
- (id /* block */)_reorderableObjectDateAddedComparator;
- (id /* block */)_reorderableObjectTitleComparator;
- (id /* block */)_sortedHomeKitIdentifierComparator;
- (id)applicationDataContainer;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setSortedHomeKitObjectIdentifiers:(id)arg1;
- (id /* block */)sortedHomeKitItemComparator;
- (id /* block */)sortedHomeKitObjectComparator;
- (id)sortedHomeKitObjectIdentifiers;

@end
