/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float opacity;
@property (nonatomic, readonly) bool pathIsOpen;
@property (nonatomic, copy) TSDReflection *reflection;
@property (nonatomic, copy) TSDShadow *shadow;
@property (nonatomic, copy) TSDStroke *stroke;
@property (nonatomic, retain) TSSStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsStyleInspecting;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)boxedValueForProperty:(int)arg1;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 tailLineEndInfo:(int)arg3;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isSelectable;
- (id)objectForProperty:(int)arg1;
- (float)opacity;
- (bool)pathIsOpen;
- (id)propertyMapForNewPreset;
- (id)referencedStyles;
- (id)reflection;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setOpacity:(float)arg1;
- (void)setReflection:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStroke:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shadow;
- (id)stroke;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylePropertyName;
- (id)stylesForCopyStyle;
- (bool)supportsStyleInspecting;

@end
