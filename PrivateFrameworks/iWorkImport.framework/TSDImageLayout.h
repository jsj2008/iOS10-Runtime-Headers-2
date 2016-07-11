/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout> {
    TSDLayoutGeometry * mBaseImageLayoutGeometry;
    TSDInfoGeometry * mBaseInfoGeometry;
    TSDImageAdjustments * mDynamicImageAdjustments;
    TSDInfoGeometry * mDynamicInfoGeometry;
    int  mHasAlpha;
    TSDLayoutGeometry * mImageGeometry;
    bool  mInInstantAlphaMode;
    bool  mIsUpdatingImageAdjustments;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mLayoutToImageTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mLayoutToMaskTransform;
    int  mMaskEditMode;
    bool  mMaskIntersectsImage;
    TSDMaskLayout * mMaskLayout;
    struct CGPath { } * mPathToStroke;
    bool  mScalingInMaskMode;
    TSUBezierPath * mTracedPath;
}

@property (nonatomic, readonly) TSDPathSource<TSDSmartPathSource> *smartPathSource;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeAlignmentFrameInRoot:(bool)arg1;
- (id)computeLayoutGeometry;
- (id)currentInfoGeometry;
- (void)dealloc;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (bool)hasAlpha;
- (bool)hasMaskingPath;
- (id)i_computeWrapPath;
- (id)imageAdjustments;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageDataToVisualSizeTransform;
- (id)imageGeometry;
- (id)imageGeometryInRoot;
- (id)imageInfo;
- (id)initWithInfo:(id)arg1;
- (bool)isDynamicallyChangingImageAdjustments;
- (bool)isInvisible;
- (id)layoutGeometryFromInfo;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutToImageTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutToMaskTransform;
- (id)maskLayout;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)originalImageGeometry;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (struct CGPath { }*)pathToStroke;
- (struct CGSize { double x1; double x2; })sizeOfFrameRectIncludingCoverage;
- (id)smartPathSource;
- (bool)supportsRotation;
- (void)updateChildrenFromInfo;

@end
