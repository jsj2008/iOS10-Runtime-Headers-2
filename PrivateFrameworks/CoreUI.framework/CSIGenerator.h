/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIGenerator : NSObject {
    bool  _allowsMultiPassEncoding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _alphaCroppedFrame;
    NSString * _assetPackIdentifier;
    NSMutableArray * _bitmaps;
    int  _blendMode;
    short  _colorSpaceID;
    double  _compressionQuality;
    long long  _compressionType;
    CUIShapeEffectPreset * _effectPreset;
    int  _exifOrientation;
    NSArray * _explicitlyPackedContents;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalReferenceFrame;
    NSSet * _externalTags;
    CUIPSDGradient * _gradient;
    bool  _isCubeMap;
    bool  _isExcludedFromFilter;
    bool  _isFPOHint;
    bool  _isFlippable;
    bool  _isTintable;
    bool  _isVectorBased;
    NSMutableArray * _layerReferences;
    short  _layout;
    unsigned short  _linkLayout;
    NSMutableArray * _metrics;
    NSMutableArray * _mipReferences;
    NSDate * _modtime;
    NSString * _name;
    double  _opacity;
    bool  _optOutOfThinning;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalUncroppedSize;
    unsigned int  _pixelFormat;
    NSData * _rawData;
    unsigned long long  _rowbytes;
    unsigned int  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSMutableArray * _slices;
    long long  _templateRenderingMode;
    long long  _textureFormat;
    long long  _textureInterpretation;
    bool  _textureOpaque;
    NSString * _utiType;
}

@property (nonatomic) bool allowsMultiPassEncoding;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alphaCroppedFrame;
@property (nonatomic) int blendMode;
@property (nonatomic) short colorSpaceID;
@property (nonatomic) double compressionQuality;
@property long long compressionType;
@property (nonatomic) bool cubemap;
@property (nonatomic, retain) CUIShapeEffectPreset *effectPreset;
@property (getter=isExcludedFromContrastFilter, nonatomic) bool excludedFromContrastFilter;
@property (nonatomic) int exifOrientation;
@property (nonatomic, retain) CUIPSDGradient *gradient;
@property (nonatomic) bool isFlippable;
@property (nonatomic) bool isRenditionFPO;
@property (nonatomic) bool isTintable;
@property (nonatomic) bool isVectorBased;
@property (nonatomic, readonly) NSArray *layerReferences;
@property (nonatomic, readonly) NSArray *mipReferences;
@property (nonatomic, copy) NSDate *modtime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double opacity;
@property (nonatomic) bool optOutOfThinning;
@property (nonatomic) struct CGSize { double x1; double x2; } originalUncroppedSize;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned int scaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) long long textureFormat;
@property (nonatomic) long long textureInterpretation;
@property (nonatomic) bool textureOpaque;
@property (nonatomic, copy) NSString *utiType;

+ (int)fileEncoding;
+ (void)initialize;
+ (void)setFileEncoding:(int)arg1;

- (id)CSIRepresentationWithCompression:(bool)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode { unsigned int x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg2;
- (void)_updateCompressionInfoFor:(id)arg1;
- (void)addBitmap:(id)arg1;
- (void)addLayerReference:(id)arg1;
- (void)addMetrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)addMipReference:(id)arg1;
- (void)addSliceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowsMultiPassEncoding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedFrame;
- (int)blendMode;
- (short)colorSpaceID;
- (double)compressionQuality;
- (long long)compressionType;
- (bool)cubemap;
- (void)dealloc;
- (id)effectPreset;
- (int)exifOrientation;
- (void)formatCSIHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (id)gradient;
- (id)initWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithExplicitlyPackedList:(id)arg1;
- (id)initWithExternalReference:(id)arg1 tags:(id)arg2;
- (id)initWithInternalReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(short)arg2;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (id)initWithTextureForPixelFormat:(long long)arg1;
- (id)initWithTextureImageWithSize:(struct CGSize { double x1; double x2; })arg1 forPixelFormat:(long long)arg2 cubeMap:(bool)arg3;
- (bool)isExcludedFromContrastFilter;
- (bool)isFlippable;
- (bool)isRenditionFPO;
- (bool)isTintable;
- (bool)isVectorBased;
- (id)layerReferences;
- (id)mipReferences;
- (id)modtime;
- (id)name;
- (double)opacity;
- (bool)optOutOfThinning;
- (struct CGSize { double x1; double x2; })originalUncroppedSize;
- (unsigned int)pixelFormat;
- (unsigned int)scaleFactor;
- (void)setAllowsMultiPassEncoding:(bool)arg1;
- (void)setAlphaCroppedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColorSpaceID:(short)arg1;
- (void)setCompressionQuality:(double)arg1;
- (void)setCompressionType:(long long)arg1;
- (void)setCubemap:(bool)arg1;
- (void)setEffectPreset:(id)arg1;
- (void)setExcludedFromContrastFilter:(bool)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setGradient:(id)arg1;
- (void)setIsFlippable:(bool)arg1;
- (void)setIsRenditionFPO:(bool)arg1;
- (void)setIsTintable:(bool)arg1;
- (void)setIsVectorBased:(bool)arg1;
- (void)setModtime:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setOptOutOfThinning:(bool)arg1;
- (void)setOriginalUncroppedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (void)setTextureFormat:(long long)arg1;
- (void)setTextureInterpretation:(long long)arg1;
- (void)setTextureOpaque:(bool)arg1;
- (void)setUtiType:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)templateRenderingMode;
- (long long)textureFormat;
- (long long)textureInterpretation;
- (bool)textureOpaque;
- (id)utiType;
- (unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(bool)arg3;
- (unsigned long long)writeExternalLinkToData:(id)arg1;
- (unsigned long long)writeGradientToData:(id)arg1;
- (void)writeHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 toData:(id)arg2;
- (unsigned long long)writeRawDataToData:(id)arg1;
- (unsigned long long)writeResourcesToData:(id)arg1;
- (unsigned long long)writeTextureToData:(id)arg1;

@end
