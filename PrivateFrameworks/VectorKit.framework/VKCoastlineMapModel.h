/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCoastlineMapModel : VKVectorMapModel {
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; bool x3; float x4; unsigned char x5; unsigned int x6; } * _clearItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineGlowAlphaRenderStateBack;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineGlowAlphaRenderStateFront;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineGlowRenderStateBack;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineGlowRenderStateFront;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup> > > { 
            struct FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _coastlinePipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    }  _coastlineRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineRenderStateNoStencil;
    int  _coastlineSourceTileZtoStencilOffset;
    struct vector<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > >, std::__1::allocator<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > > > { 
        struct pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > {} *__begin_; 
        struct pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > {} *__end_; 
        struct __compressed_pair<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > *, std::__1::allocator<std::__1::pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > > > { 
            struct pair<std::__1::unique_ptr<ggl::PolygonSolidFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonSolidFill::MeshPipelineSetup> >, std::__1::unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > > {} *__first_; 
        } __end_cap_; 
    }  _coastlineStencilItems;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup> > > { 
            struct FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _coastlineStencilPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    }  _coastlineStencilRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _coastlineStencilRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup> > > { 
            struct FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _glowAlphaPipelineSetupPool;
    struct shared_ptr<ggl::GlowAlpha::MeshPipelineState> { 
        struct MeshPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _glowAlphaPipelineState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup> > > { 
            struct FragmentedPool<ggl::Glow::MeshPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _glowPipelineSetupPool;
    struct shared_ptr<ggl::Glow::MeshPipelineState> { 
        struct MeshPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _glowPipelineState;
    struct shared_ptr<ggl::PolygonShadowedStroke::ShadowPathPipelineState> { 
        struct ShadowPathPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _polygonShadowedStrokePipelineState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { 
        struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { 
            struct RenderItem {} *__first_; 
        } __ptr_; 
    }  _stencilEraseWaterRenderItem;
    struct shared_ptr<ggl::PolygonFill::CompressedMeshPipelineState> { 
        struct CompressedMeshPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stencilFillCompressedPipelineState;
    struct shared_ptr<ggl::PolygonFill::MeshPipelineState> { 
        struct MeshPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stencilFillPipelineState;
    struct unique_ptr<ggl::PolygonFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonFill::MeshPipelineSetup> > { 
        struct __compressed_pair<ggl::PolygonFill::MeshPipelineSetup *, std::__1::default_delete<ggl::PolygonFill::MeshPipelineSetup> > { 
            struct MeshPipelineSetup {} *__first_; 
        } __ptr_; 
    }  _stencilInvertPipelineSetup;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { 
        struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { 
            struct RenderItem {} *__first_; 
        } __ptr_; 
    }  _stencilInvertRenderItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _stencilInvertRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _stencilWaterEraseRenderState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)flushPools;
- (void)generateCoastlineRenderItemsWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned long long x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; out void*x23; void*x24; void*x25; void*x26; void*x27; const void*x28; void*x29; void*x30; void*x31; void*x32; unsigned int x33; void*x34; long doublex35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; short x47; void*x48; void*x49; void*x50; double x51; void*x52; SEL x53; void*x54; SEL x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; SEL x63; void*x64; SEL x65; void*x66; void*x67; void*x68; void*x69; void*x70; void x71; void*x72; void*x73; void*x74; long x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; short x93; void*x94; void*x95; void*x96; double x97; void*x98; SEL x99; void*x100; SEL x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; SEL x109; void*x110; SEL x111; void*x112; short x113; void*x114; void*x115; void*x116; void*x117; void*x118; const void*x119; void*x120; void*x121; double x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; const void*x130; void*x131; void*x132; void*x133; void*x134; short x135; void*x136; short x137; void*x138; SEL x139; void*x140; SEL x141; void*x142; unsigned short x143; void*x144; void*x145; void*x146; void*x147; void*x148; long x149; void*x150; void*x151; void*x152; short x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; unsigned long long x163; void*x164; void*x165; void*x166; void*x167; void*x168; const void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; short x176; void*x177; short x178; void*x179; SEL x180; void*x181; SEL x182; void*x183; void*x184; void*x185; const void*x186; out void*x187; void*x188; void*x189; void*x190; void*x191; const void*x192; void*x193; void*x194; void*x195; void*x196; unsigned int x197; void*x198; long doublex199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; short x211; void*x212; void*x213; void*x214; double x215; void*x216; SEL x217; void*x218; SEL x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; SEL x227; void*x228; SEL x229; void*x230; short x231; void*x232; void*x233; void*x234; void*x235; void*x236; const void*x237; void*x238; void*x239; double x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; const void*x248; void*x249; void*x250; void*x251; void*x252; double x253; void*x254; SEL x255; void*x256; SEL x257; void*x258; unsigned long x259; void*x260; void*x261; void*x262; unsigned int x263/* : ? */; void*x264; void*x265; void*x266; long x267; void*x268; unsigned short x269; void*x270; void*x271; void*x272; void*x273; void*x274; long x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; short x289; void*x290; void*x291; void*x292; double x293; void*x294; SEL x295; void*x296; SEL x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; SEL x305; void*x306; SEL x307; void*x308; long x309; void*x310; void*x311; void*x312; short x313; void*x314; short x315; void*x316; void*x317; void*x318; short x319; void*x320; void*x321; void*x322; double x323; void*x324; SEL x325; void*x326; SEL x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; SEL x335; void*x336; SEL x337; void*x338; short x339; void*x340; void*x341; void*x342; void*x343; void*x344; const void*x345; void*x346; void*x347; double x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; const void*x356; void*x357; void*x358; void*x359; void*x360; short x361; void*x362; short x363; void*x364; SEL x365; void*x366; SEL x367; void*x368; unsigned short x369; void*x370; void*x371; void*x372; void*x373; void*x374; long x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; char *x389; void*x390; char *x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; BOOL x407; void*x408; void*x409; void*x410; void*x411; void*x412; const void*x413; void*x414; void*x415; char *x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; in void*x428; short x429; void*x430; int x431; void*x432; void*x433; void*x434; in void*x435; void*x436; void*x437; double x438; void*x439; void*x440; void*x441; BOOL x442; void*x443; void*x444; void*x445; void*x446; void*x447; const void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; short x459; void*x460; void*x461; void*x462; const void*x463; void*x464; void*x465; BOOL x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; in void*x476; double x477; void*x478; void*x479; void*x480; const void*x481; unsigned long long x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; struct x494; void*x495; }*)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (unsigned long long)mapLayerPosition;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)resetPools;
- (void)stylesheetDidChange;
- (const struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)waterFeatureAttributes;

@end
