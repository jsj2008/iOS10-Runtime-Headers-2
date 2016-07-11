/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    bool  _allowAlpha;
    bool  _canMakeImage;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__first_; 
        } __ptr_; 
    }  _colorBuffer;
    double  _contentScale;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _depthStencilBuffer;
    struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; } * _device;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _flippedRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
        struct __compressed_pair<ggl::IOSurfaceTexture *, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
            struct IOSurfaceTexture {} *__first_; 
        } __ptr_; 
    }  _flippedSurfaceTexture;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _format;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__first_; 
        } __ptr_; 
    }  _msaaResolveBuffer;
    bool  _recreateRenderTarget;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _renderTarget;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _resolvedRenderTargetFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _useMultisampling;
}

@property (nonatomic) bool allowAlpha;
@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{unique_ptr<md::SharedDeviceResources' */ struct x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; long doublex14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; struct x29; void*x30; void*x31; void*x32; void*x33; void*x34; in void*x35; short x36; void*x37; int x38; void*x39; void*x40; void*x41; in void*x42; void*x43; void*x44; double x45; void*x46; void*x47; void*x48; long x49; void*x50; out void*x51; in void*x52; void*x53; void*x54; void*x55; void*x56; long x57; void*x58; out void*x59; in void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; in void*x75; short x76; void*x77; int x78; void*x79; void*x80; void*x81; in void*x82; void*x83; void*x84; double x85; void*x86; void*x87; void*x88; long x89; void*x90; out void*x91; in void*x92; void*x93; void*x94; void*x95; void*x96; long x97; void*x98; out void*x99; in void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; }*device; /* unknown property attribute:  std::__1::default_delete<md::SharedDeviceResources> >=^{SharedDeviceResources}}}} */
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*imageTexture;
@property (nonatomic, readonly) bool multiSample;
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*renderTarget;
@property (nonatomic, readonly) struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; } resolvedRenderTargetFormat;
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createRenderTarget;
- (void)_destroyRenderTarget;
- (bool)allowAlpha;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapDataWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_10_1_1; } x10; struct Texture2D {} *x11; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (double)contentScale;
- (struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)device;
- (void)didDrawView;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)finalRenderTarget;
- (struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)finalSurface;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)imageTexture;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2 scale:(double)arg3 useMultisampling:(bool)arg4;
- (bool)multiSample;
- (struct CGImage { }*)newImageWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_10_1_1; } x10; struct Texture2D {} *x11; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)renderTarget;
- (struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; })resolvedRenderTargetFormat;
- (void)setAllowAlpha:(bool)arg1;
- (void)setContentScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (void)willDrawView;

@end
