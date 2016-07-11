/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableStyleResolver : NSObject {
    struct OADTFTemplateMatrix<OADTableCell *> { int x1; int x2; struct vector<OADTableCell *, std::__1::allocator<OADTableCell *> > { id *x_3_1_1; id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; void*x_3_1_4; BOOL x_3_1_5; out void*x_3_1_6; void*x_3_1_7; const void*x_3_1_8; short x_3_1_9; short x_3_1_10; void*x_3_1_11; double x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; int x_3_1_16; const void*x_3_1_17; bycopy long doublex_3_1_18; void*x_3_1_19; void*x_3_1_20; unsigned int x_3_1_21/* : ? */; long x_3_1_22; void*x_3_1_23; unsigned char x_3_1_24; void*x_3_1_25; long x_3_1_26; long x_3_1_27; void*x_3_1_28; char *x_3_1_29; char *x_3_1_30; void*x_3_1_31; void*x_3_1_32; short x_3_1_33; void*x_3_1_34; double x_3_1_35; SEL x_3_1_36; SEL x_3_1_37; void*x_3_1_38; void*x_3_1_39; void*x_3_1_40; SEL x_3_1_41; SEL x_3_1_42; void*x_3_1_43; long x_3_1_44; long x_3_1_45; out BOOL x_3_1_46; void*x_3_1_47; void*x_3_1_48; out const void*x_3_1_49; bycopy long doublex_3_1_50; void*x_3_1_51; void*x_3_1_52; unsigned int x_3_1_53/* : ? */; long x_3_1_54; void*x_3_1_55; unsigned char x_3_1_56; void*x_3_1_57; long x_3_1_58; long x_3_1_59; void*x_3_1_60; char *x_3_1_61; void*x_3_1_62; void*x_3_1_63; void*x_3_1_64; void*x_3_1_65; id *x_3_1_66; } x3; } * mCellMatrix;
    struct OADTFTemplateMatrix<OADTablePartStyle *> { int x1; int x2; struct vector<OADTablePartStyle *, std::__1::allocator<OADTablePartStyle *> > { id *x_3_1_1; id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; void*x_3_1_4; BOOL x_3_1_5; out void*x_3_1_6; void*x_3_1_7; const void*x_3_1_8; short x_3_1_9; short x_3_1_10; void*x_3_1_11; double x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; int x_3_1_16; const void*x_3_1_17; bycopy long doublex_3_1_18; void*x_3_1_19; void*x_3_1_20; unsigned int x_3_1_21/* : ? */; long x_3_1_22; void*x_3_1_23; void*x_3_1_24; void*x_3_1_25; const void*x_3_1_26; unsigned short x_3_1_27; void*x_3_1_28; void*x_3_1_29; long x_3_1_30; void*x_3_1_31; void*x_3_1_32; char *x_3_1_33; char *x_3_1_34; void*x_3_1_35; void*x_3_1_36; short x_3_1_37; void*x_3_1_38; double x_3_1_39; SEL x_3_1_40; SEL x_3_1_41; void*x_3_1_42; void*x_3_1_43; void*x_3_1_44; SEL x_3_1_45; SEL x_3_1_46; void*x_3_1_47; long x_3_1_48; long x_3_1_49; out BOOL x_3_1_50; void*x_3_1_51; void*x_3_1_52; out const void*x_3_1_53; bycopy long doublex_3_1_54; void*x_3_1_55; void*x_3_1_56; unsigned int x_3_1_57/* : ? */; long x_3_1_58; void*x_3_1_59; void*x_3_1_60; void*x_3_1_61; const void*x_3_1_62; unsigned short x_3_1_63; void*x_3_1_64; void*x_3_1_65; long x_3_1_66; void*x_3_1_67; void*x_3_1_68; char *x_3_1_69; void*x_3_1_70; void*x_3_1_71; void*x_3_1_72; void*x_3_1_73; id *x_3_1_74; } x3; } * mCellStyles;
    int  mColumnCount;
    int  mRowCount;
    struct OADTFTemplateMatrix<OADStroke *> {} * mStrokes;
    OADTable * mTable;
    OADTableProperties * mTableProperties;
    OADTableStyle * mTableStyle;
}

- (void)applyBandCellStyles;
- (void)applyBandStrokes;
- (void)applyCellStyleFromPart:(int)arg1 dir1:(int)arg2 fromI1:(int)arg3 fromI2:(int)arg4 dir1Span:(int)arg5 dir2Span:(int)arg6;
- (void)applyCellStyleOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 part:(int)arg3;
- (void)applyCellStyles;
- (void)applyCornerCellStyleWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyCornerCellStyles;
- (void)applyCornerStrokes;
- (void)applyCornerStrokesWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3;
- (void)applyExtremeVectorCellStyles;
- (void)applyExtremeVectorStrokes;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)applyResolvedStyling;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 dir2Span:(int)arg6;
- (void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 toI2:(int)arg6;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (void)applyStrokesFromPart:(int)arg1 fromPos:(struct OADTMatrixPos { int x1; int x2; })arg2 toPos:(struct OADTMatrixPos { int x1; int x2; })arg3;
- (void)applyStrokesOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3;
- (void)applyStyleStrokes;
- (void)applyTextStyle:(id)arg1 toCell:(id)arg2;
- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)applyWholeTableCellStyle;
- (void)applyWholeTableStrokes;
- (int)cellCountAlongDir:(int)arg1;
- (int)cellParityRelativeToDir1:(int)arg1 i1:(int)arg2 i2:(int)arg3;
- (void)createStrokeMatrices;
- (void)dealloc;
- (struct OADTMatrixPos { int x1; int x2; })dominantCellInRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 columnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixVectorAtExtremePositionFlags;
- (void)flatten;
- (id)initWithTable:(id)arg1;
- (void)loadCells;
- (void)setStroke:(id)arg1 ofSegmentNormalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4;
- (id)sourceCellAtI1:(int)arg1 i2:(int)arg2 dir1:(int)arg3;
- (id)strokeOfSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3;

@end
