/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResultChangeDetails : NSObject {
    NSIndexSet * _changedIndexes;
    NSArray * _changedItems;
    NSArray * _currentItems;
    PHFetchResult * _fetchResultAfterChanges;
    PHFetchResult * _fetchResultBeforeChanges;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movedFromIndexes;
    NSIndexSet * _movedIndexes;
    NSArray * _previousItems;
    NSIndexSet * _removedIndexes;
    bool  _skipIncrementalChanges;
}

@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly) bool hasIncrementalChanges;
@property (readonly) bool hasMoves;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) struct __CFArray { }*movedFromIndexes;
@property (nonatomic, readonly) NSIndexSet *movedIndexes;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;

+ (id)_identifiersForPHObjects:(id)arg1;
+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3;

- (void).cxx_destruct;
- (void)calculateDiffs;
- (id)changedIndexes;
- (id)changedObjects;
- (id)currentItems;
- (void)dealloc;
- (id)description;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (id)fetchResultAfterChanges;
- (id)fetchResultBeforeChanges;
- (bool)hasDiffs;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(bool)arg4;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)insertedIndexes;
- (id)insertedObjects;
- (struct __CFArray { }*)movedFromIndexes;
- (id)movedIndexes;
- (id)removedIndexes;
- (id)removedObjects;
- (bool)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;

@end
