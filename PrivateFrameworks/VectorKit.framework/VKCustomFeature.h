/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCustomFeature : NSObject {
    <VKCustomFeatureDataSource> * _dataSource;
    struct shared_ptr<md::LabelExternalPointFeature> { 
        struct LabelExternalPointFeature {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _feature;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initInternalFeatureWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 isInjected:(bool)arg2;
- (unsigned long long)businessID;
- (id)dataSource;
- (struct shared_ptr<md::LabelExternalPointFeature> { struct LabelExternalPointFeature {} *x1; struct __shared_weak_count {} *x2; }*)feature;
- (unsigned long long)featureID;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isInjectedFeature;
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFeatureID:(unsigned long long)arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (void)setSortKey:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setText:(id)arg1 locale:(id)arg2;
- (id)styleAttributes;

@end
