/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLLight : MDLObject {
    struct CGColorSpace { } * _cgColorSpace;
    NSString * _colorSpace;
    struct RTLight { int (**x1)(); struct CGColor {} *x2; id x3; } * _light;
    unsigned long long  _lightType;
}

@property (nonatomic, copy) NSString *colorSpace;
@property (nonatomic) unsigned long long lightType;
@property (nonatomic, readonly) struct RTLight { int (**x1)(); struct CGColor {} *x2; id x3; }*rtLight;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (id)colorSpace;
- (void)dealloc;
- (id)init;
- (struct CGColor { }*)irradianceAtPoint;
- (struct CGColor { }*)irradianceAtPoint:(void *)arg1 colorSpace:(void *)arg2; // needs 2 arg types, found 1: struct CGColorSpace { }*
- (unsigned long long)lightType;
- (void)position;
- (struct RTLight { int (**x1)(); struct CGColor {} *x2; id x3; }*)rtLight;
- (void)setColorSpace:(id)arg1;
- (void)setLightType:(unsigned long long)arg1;
- (void)setTransform:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)lightWithSCNLight:(id)arg1;

@end
