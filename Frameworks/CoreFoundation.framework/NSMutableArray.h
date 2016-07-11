/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableArray : NSArray <FCOrderedMutableCollectionAdditions>

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)arrayWithCapacity:(unsigned long long)arg1;

- (void)_mutate;
- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsPassingTest:(id /* block */)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)replaceObject:(id)arg1;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)rollObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2;
- (void)sortUsingDescriptors:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_removeObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1;
- (unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(bool)arg2;
- (void)_mapkit_makeObjectsPerformSelector:(SEL)arg1;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 ascending:(bool)arg2;
- (void)_mapkit_sortUsingLatitude;
- (void)_mapkit_sortUsingLatitudeAscending:(bool)arg1;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLongitudeAscending:(bool)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

- (id)nc_peek;
- (id)nc_pop;
- (void)nc_push:(id)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (void)removeExactObject:(id)arg1;
- (void)removeExactObjectsInArray:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_kb_reverse;
- (bool)_listContainsOrderedItems;
- (void)_set_listContainsOrderedItems:(bool)arg1;
- (void)_set_syncQueue:(id)arg1;
- (id)_syncQueue;
- (id)_ui_dequeue;
- (void)_ui_enqueue:(id)arg1;
- (id)_ui_peek;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(id /* block */)arg2;
- (void)_uikbrtRemove:(id)arg1;
- (void)removeViewsFromSuperview;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeAddObject:(id)arg1 class:(Class)arg2;
- (void)un_safeAddObject:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel

- (id)dequeue;
- (bool)empty;
- (void)enqueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (void)axSafelyAddObject:(id)arg1;
- (void)axSafelyAddObjectsFromArray:(id)arg1;
- (id)ax_dequeueObject;
- (void)ax_enqueueObject:(id)arg1;
- (id)ax_lastEnqueuedObject;
- (id)ax_nextDequeuedObject;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)nonRetainingArray;

- (void)removeAllObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)nonRetainingArray;

- (void)removeAllObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (bool)bw_empty;
- (id)bw_peek;
- (id)bw_pop;
- (void)bw_push:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_addNonNilObject:(id)arg1;
- (void)_cn_addNonNilObjectIfNotPresent:(id)arg1;
- (void)_cn_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)_cn_insertNonNilObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_cn_removeObjectsPassingTest:(id /* block */)arg1;
- (void)_cn_sortUsingAuxiliarySortOrder:(id)arg1 transform:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)cd_arrayWithDoubleValue:(double)arg1 repeated:(unsigned long long)arg2;
+ (id)cd_arrayWithDoubleValuesStarting:(double)arg1 ending:(double)arg2 count:(unsigned long long)arg3;

- (void)cd_divideElementsByDouble:(double)arg1;
- (void)cd_elementwiseAddArray:(id)arg1;
- (void)cd_elementwiseAddArray:(id)arg1 weightedBy:(double)arg2;
- (void)cd_elementwiseAddSquaredArray:(id)arg1;
- (void)cd_elementwiseMultiplyArray:(id)arg1;
- (void)cd_inplaceCummulativeSum;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (void)MSRemoveOneObject:(id)arg1;
- (void)MSRemoveOneObjectByPointerComparison:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)cr_addNonNilObject:(id)arg1;
- (void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)cr_insertObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport

- (id)section_pop;
- (void)section_push:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkMutableOrderedSet;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)copyNonRetainingArray;
+ (id)nonRetainingArray;

- (void)__imRandomizeArray;
- (void)removeFirstObject;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (void)addItemsMatchingExtensions:(id)arg1 orTypes:(id)arg2 fromFolder:(id)arg3;
- (void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (bool)mf_addObjectIfAbsent:(id)arg1;
- (bool)mf_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (unsigned long long)mf_insertObject:(id)arg1 usingComparator:(id /* block */)arg2 allowDuplicates:(bool)arg3;
- (unsigned long long)mf_insertObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3 allowDuplicates:(bool)arg4;
- (void)mf_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)mf_removeObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)mf_removeObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (void)addObjectIfNotPresent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

- (void)shuffle;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)dequeueAtom;
- (void)enqueueAtom:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)na_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)fc_popFirstObject;
- (id)fc_popLastObject;
- (void)fc_removeFirstObject;
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_removeObjectsPassingTest:(id /* block */)arg1;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;
- (void)fc_reverseObjects;
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_safelyAddObjectsFromArray:(id)arg1;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;
- (void)fc_trimToMaxCount:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (void)ic_addNonNilObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)safelyAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (void)bl_addObjectIfIdenticalNotPresent:(id)arg1;
- (void)bl_addObjectIfNotNil:(id)arg1;
- (void)bl_addObjectIfNotPresent:(id)arg1;
- (void)bl_addObjectsFromArrayIfIdenticalNotPresent:(id)arg1;
- (void)bl_addObjectsFromArrayIfNotPresent:(id)arg1;
- (void)bl_insertObject:(id)arg1 usingFunction:(int (*)arg2 context:(void*)arg3;
- (void)bl_moveIdenticalObjectToFirst:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)_pl_addNonNilObject:(id)arg1;
- (void)pl_addCFString:(struct __CFString { }*)arg1;
- (void)pl_valuesChanged:(bool)arg1 forKey:(struct __CFString { }*)arg2;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (void)performSpecifierUpdatesUsingBlock:(id /* block */)arg1;
- (void)ps_addPossibleObject:(id)arg1;
- (void)ps_insertObject:(id)arg1 afterObject:(id)arg2;
- (void)ps_insertObjectsFromArray:(id)arg1 afterObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (id)pop_tsu;
- (void)push_tsu:(id)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)removeObjectsIdenticalToObjectsInSet:(id)arg1;
- (void)trimObjectsFromIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (id)tk_dequeueObject;
- (void)tk_enqueueObject:(id)arg1;
- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1;
- (id)tk_lastEnqueuedObject;
- (id)tk_nextDequeuedObject;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (void)vcp_sortBySize;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)WF_pop;
- (void)WF_push:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsch_instanceWithArchive:(const struct ChartsNSArrayOfNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<double> { double *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; }*)arg1 unarchiver:(id)arg2;

- (void)tsce_addObjectNonNil:(id)arg1;
- (id)tsch_initWithArchive:(const struct ChartsNSArrayOfNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<double> { double *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; }*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(struct ChartsNSArrayOfNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<double> { double *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; }*)arg1 archiver:(id)arg2;
- (void)tss_addProperty:(int)arg1;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;

@end
