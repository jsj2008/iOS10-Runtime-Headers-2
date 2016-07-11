/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate> {
    TSCEReferenceTracker * mReferenceTracker;
    NSMutableSet * mReferences;
    TSTTableInfo * mTableInfo;
}

@property (nonatomic) TSTTableInfo *tableInfo;

- (id)cellRangeWasInserted:(struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)dealloc;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; }*)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTableInfo:(id)arg1 context:(id)arg2;
- (struct __CFUUID { }*)ownerID;
- (struct TSCECReference { unsigned short x1; union { struct { struct TSUCellCoord { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_1_2_1; struct __CFUUID {} *x_1_2_2; } x_2_1_1; struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_1_3_1; struct TSUCellCoord { unsigned short x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; } x_1_3_2; } x_2_2_1; struct __CFUUID {} *x_2_2_2; } x_2_1_2; struct { struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_5_1; unsigned char x_1_5_2; unsigned char x_1_5_3; } x_1_4_1; struct TSUCellCoord { unsigned short x_2_5_1; unsigned char x_2_5_2; unsigned char x_2_5_3; } x_1_4_2; } x_1_3_1; struct __CFUUID {} *x_1_3_2; } x_3_2_1; unsigned char x_3_2_2; } x_2_1_3; struct __CFUUID {} *x_2_1_4; struct { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_2_1_5; } x2; })p_cReferenceForColumnIndex:(unsigned char)arg1;
- (unsigned char)p_columnForTrackedReference:(id)arg1;
- (id)p_ruleReferenceForTrackedReference:(id)arg1;
- (void)referencedCellWasModified:(id)arg1;
- (void)registerWithCalculationEngine:(id)arg1;
- (void)setOwnerID:(struct __CFUUID { }*)arg1;
- (void)setTableInfo:(id)arg1;
- (bool)shouldRewriteOnCellMerge;
- (bool)shouldRewriteOnRangeMove;
- (bool)shouldRewriteOnSort;
- (bool)shouldRewriteOnTableIDReassignment;
- (bool)shouldRewriteOnTectonicShift;
- (bool)shouldRewriteOnTranspose;
- (id)tableInfo;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID { }*)arg2;
- (void)unregisterFromCalculationEngine;
- (void)updateForSortRules:(id)arg1;

@end
