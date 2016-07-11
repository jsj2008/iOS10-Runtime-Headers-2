/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellStyle : TSSStyle <TSDMixing, TSTCellDiffing>

+ (id)cellDiffProperties;
+ (void)initDefaultPropertyMap:(id)arg1 forTableArea:(unsigned long long)arg2 presetID:(unsigned long long)arg3 colors:(id)arg4 alternate:(int)arg5;
+ (id)nonEmphasisCellProperties;
+ (void)p_initBodyRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initFooterRowRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderRowRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)regionStringForTableArea:(unsigned long long)arg1;
+ (id)styleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned long long)arg2;
+ (id)textStyleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned long long)arg2;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadCellStyleFromArchive:(const struct CellStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct CellStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadCellStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CellStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; bool x8; int x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct PaddingArchive {} *x12; struct StrokeArchive {} *x13; struct StrokeArchive {} *x14; struct StrokeArchive {} *x15; struct StrokeArchive {} *x16; }*)arg2 unarchiver:(id)arg3;
- (SEL)mapThemePropertyMapSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)saveCellStylePropertiesToArchive:(struct CellStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; bool x8; int x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct PaddingArchive {} *x12; struct StrokeArchive {} *x13; struct StrokeArchive {} *x14; struct StrokeArchive {} *x15; struct StrokeArchive {} *x16; }*)arg1 archiver:(id)arg2;
- (void)saveCellStyleToArchive:(struct CellStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct CellStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)tstMapCellStylePropertyMap:(id)arg1;
- (void)upgradeIfNecessary;
- (void)validate;

@end
