/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDataSource : NSObject {
    <PXPeopleDataSourceDelegate> * _delegate;
    bool  _disclosed;
    NSPredicate * _filterPredicate;
    NSString * _localizedDisclosedTitle;
    NSString * _localizedUndisclosedTitle;
    unsigned long long  _maximumNumberOfMembers;
    NSArray * _members;
    NSString * _name;
    <NSFastEnumeration> * _objects;
    id /* block */  _reloadBlock;
    NSObject<OS_dispatch_queue> * _reloadQueue;
    id /* block */  _sortComparator;
    bool  _useAsynchronousLoad;
}

@property (nonatomic) <PXPeopleDataSourceDelegate> *delegate;
@property (getter=isDisclosed) bool disclosed;
@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (copy) NSString *localizedDisclosedTitle;
@property (copy) NSString *localizedUndisclosedTitle;
@property (nonatomic) unsigned long long maximumNumberOfMembers;
@property (nonatomic, retain) NSArray *members;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfMembers;
@property (nonatomic, retain) <NSFastEnumeration> *objects;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadQueue;
@property (nonatomic, copy) id /* block */ sortComparator;
@property (nonatomic, readonly) bool useAsynchronousLoad;

- (void).cxx_destruct;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_itemsArrayFromObjects:(id)arg1;
- (void)_setObjectsWithoutUpdate:(id)arg1;
- (void)_updateMembers;
- (void)dealloc;
- (id /* block */)defaultComparator;
- (id)delegate;
- (id)filterPredicate;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3;
- (unsigned long long)indexOfMember:(id)arg1;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)initWithName:(id)arg1 objectsReloadBlock:(id /* block */)arg2;
- (id)initWithName:(id)arg1 objectsReloadBlock:(id /* block */)arg2 asynchronousLoad:(bool)arg3 callbackDelegate:(id)arg4;
- (bool)isDisclosed;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id /* block */)arg1;
- (id)localizedDisclosedTitle;
- (id)localizedTitle;
- (id)localizedUndisclosedTitle;
- (unsigned long long)maximumNumberOfMembers;
- (id)memberAtIndex:(unsigned long long)arg1;
- (id)members;
- (id)name;
- (unsigned long long)numberOfMembers;
- (id)objects;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1;
- (id /* block */)reloadBlock;
- (id)reloadQueue;
- (void)setDelegate:(id)arg1;
- (void)setDisclosed:(bool)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setLocalizedDisclosedTitle:(id)arg1;
- (void)setLocalizedUndisclosedTitle:(id)arg1;
- (void)setMaximumNumberOfMembers:(unsigned long long)arg1;
- (void)setMembers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setReloadBlock:(id /* block */)arg1;
- (void)setReloadQueue:(id)arg1;
- (void)setSortComparator:(id /* block */)arg1;
- (id /* block */)sortComparator;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;
- (bool)useAsynchronousLoad;

@end
