/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthor : TSPObject {
    NSString * _appearanceColorForAuthor;
    TSUColor * mColor;
    NSString * mName;
}

@property (nonatomic, readonly) NSString *appearanceColorForAuthor;
@property (nonatomic, readonly) NSString *authorColorName;
@property (nonatomic, readonly) TSUColor *cellViolatorColor;
@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic, readonly) TSUColor *flagFillColor;
@property (nonatomic, readonly) TSUColor *flagPressedColor;
@property (nonatomic, readonly) TSUColor *flagStrokeColor;
@property (nonatomic, readonly) TSUColor *gradientEndColor;
@property (nonatomic, readonly) TSUColor *gradientStartColor;
@property (nonatomic, readonly) TSUColor *indicatorDarkColor;
@property (nonatomic, readonly) TSUColor *indicatorLightColor;
@property (nonatomic, readonly) NSString *menuSwatchColorForAuthor;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSUColor *popoverAuthorLabelColor;
@property (nonatomic, readonly) TSUColor *popoverButtonTintColor;
@property (nonatomic, readonly) TSUColor *popoverColor;
@property (nonatomic, readonly) bool showAuthorComments;
@property (nonatomic, readonly) TSUColor *sidebarChangeBarColor;
@property (nonatomic, readonly) TSUColor *sidebarDecoratorLineColor;
@property (nonatomic, readonly) TSUColor *sidebarHoverColor;
@property (nonatomic, readonly) TSUColor *sidebarSelectedBorderColor;
@property (nonatomic, readonly) TSUColor *sidebarSelectedColor;
@property (nonatomic, readonly) TSUColor *sidebarUsernameColor;
@property (nonatomic, retain) TSUColor *storageColor;
@property (nonatomic, readonly) TSUColor *textHighlightColor;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

+ (id)authorColorForIndex:(unsigned long long)arg1 forKey:(id)arg2;
+ (id)authorMenuSwatchColorForIndex:(unsigned long long)arg1;
+ (id)authorStorageColorForIndex:(unsigned long long)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)arg1;
+ (id)collaboratorCursorColorByLightColor:(id)arg1;
+ (id)defaultAuthorName;
+ (id)indicatorDarkColorByLightColor:(id)arg1;
+ (id)indicatorDarkColorForIndex:(unsigned long long)arg1;
+ (id)indicatorLightColorByAuthorColor:(id)arg1;
+ (id)indicatorLightColorForIndex:(unsigned long long)arg1;
+ (id)localizedAuthorColorNameForIndex:(unsigned long long)arg1;
+ (id)normalizedAuthorNameForAuthorName:(id)arg1;
+ (id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)arg1;
+ (unsigned long long)p_authorColorIndexWithColor:(id)arg1 forIndicator:(bool)arg2;
+ (unsigned long long)presetColorCount;

- (bool)allowsImplicitComponentOwnership;
- (id)appearanceColorForAuthor;
- (id)authorColorName;
- (id)cellViolatorColor;
- (id)changeAdornmentsColor;
- (id)componentRootObject;
- (void)dealloc;
- (id)description;
- (id)flagFillColor;
- (id)flagPressedColor;
- (id)flagStrokeColor;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned long long)hash;
- (id)indicatorDarkColor;
- (id)indicatorLightColor;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)menuSwatchColorForAuthor;
- (id)name;
- (unsigned long long)p_authorColorIndex;
- (id)popoverAuthorLabelColor;
- (id)popoverButtonTintColor;
- (id)popoverColor;
- (void)saveToArchiver:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStorageColor:(id)arg1;
- (bool)showAuthorComments;
- (id)sidebarChangeBarColor;
- (id)sidebarDecoratorLineColor;
- (id)sidebarHoverColor;
- (id)sidebarSelectedBorderColor;
- (id)sidebarSelectedColor;
- (id)sidebarUsernameColor;
- (id)storageColor;
- (id)textHighlightColor;
- (id)textMarkupColor;
- (id)themeFilenameForAuthor;

@end
