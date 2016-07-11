/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGradient : TSDFill <NSCopying, NSMutableCopying, TSDMixing, TSSPresetSource> {
    bool  mIsAdvancedGradient;
    double  mOpacity;
    struct CGShading { } * mShadingRef;
    NSMutableArray * mStops;
    unsigned long long  mType;
}

@property (nonatomic, readonly) TSUColor *firstColor;
@property (nonatomic, readonly, retain) NSArray *gradientStops;
@property (nonatomic, readonly) unsigned long long gradientType;
@property (nonatomic, readonly) bool hasAlpha;
@property (nonatomic, readonly) bool isAdvancedGradient;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) TSUColor *lastColor;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) struct CGShading { }*shadingRef;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)disableInflections;
+ (void)enableInflections;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)presetKinds;
+ (id)radialGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (void)sortStopsArray:(id)arg1;
+ (bool)useInflections;
+ (bool)useQuartzShadings;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })centeredRadialTransformInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGPoint { double x1; double x2; })endPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)fillType;
- (id)firstColor;
- (id)gradientStops;
- (unsigned long long)gradientType;
- (bool)hasAlpha;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (bool)isAdvancedGradient;
- (bool)isAdvancedGradientIgnoringFlag;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringTransform:(id)arg1;
- (bool)isOpaque;
- (id)lastColor;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newColorAtFraction:(double)arg1;
- (double)opacity;
- (struct CGContext { }*)p_beginBitmapWrapperContextInContext:(struct CGContext { }*)arg1 returningIntegralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)p_endBitmapWrapperContext:(struct CGContext { }*)arg1 inContext:(struct CGContext { }*)arg2 withIntegralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)p_evenlyDistributeStops;
- (void)p_insertGradientStop:(id)arg1;
- (id)p_insertStopAtFraction:(double)arg1;
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_removeStop:(id)arg1;
- (id)p_removeStopAtIndex:(unsigned long long)arg1;
- (void)p_reverseStopOrder;
- (void)p_setAlpha:(struct CGContext { }*)arg1;
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)p_setGradientStops:(id)arg1;
- (void)p_setGradientType:(unsigned long long)arg1;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)p_setIsAdvancedGradient:(bool)arg1;
- (void)p_setOpacity:(double)arg1;
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 atAngle:(double)arg3;
- (id)presetKind;
- (id)referenceColor;
- (void)releaseShadingRef;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (struct CGShading { }*)shadingRef;
- (struct CGPoint { double x1; double x2; })startPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)stopAfterFraction:(double)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (id)stopBeforeFraction:(double)arg1;

@end
