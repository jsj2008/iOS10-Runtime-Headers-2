/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent> {
    struct GeometryArrays { 
        unsigned int offset; 
        unsigned int count; 
        unsigned int capoffset; 
        unsigned int capcount; 
    }  mArrays;
    TSCH3DChartMeshSharedResource * mBounds;
    TSCH3DResource * mCachedBounds;
    NSObject<TSCH3DChartMeshCreator> * mCreator;
    TSCH3DGeometry * mGeometry;
    TSCH3DChartMeshSharedResource * mNormal;
    TSCHChartSeries * mSeries;
    TSCH3DChartTexcoordSharedResource * mTexcoord;
    TSCH3DChartMeshSharedResource * mVertex;
}

@property (nonatomic, readonly) TSCH3DResource *bounds;
@property (nonatomic, readonly) TSCH3DResource *normal;
@property (nonatomic, readonly) TSCH3DResource *texcoord;
@property (nonatomic, readonly) TSCH3DResource *vertex;

+ (id)nullBuffer;
+ (id)resourcesWithSeries:(id)arg1 creator:(id)arg2;

- (id).cxx_construct;
- (id)bounds;
- (void)clearParent;
- (void)dealloc;
- (struct GeometryResource { int x1; struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; void*x_2_1_7; void*x_2_1_8; void*x_2_1_9; void*x_2_1_10; void*x_2_1_11; void*x_2_1_12; void*x_2_1_13; void*x_2_1_14; void*x_2_1_15; void*x_2_1_16; void*x_2_1_17; void*x_2_1_18; void*x_2_1_19; void*x_2_1_20; void*x_2_1_21; void*x_2_1_22; void*x_2_1_23; void*x_2_1_24; void*x_2_1_25; void*x_2_1_26; void*x_2_1_27; void*x_2_1_28; void*x_2_1_29; void*x_2_1_30; void*x_2_1_31; void*x_2_1_32; void*x_2_1_33; void*x_2_1_34; void*x_2_1_35; void*x_2_1_36; void*x_2_1_37; void*x_2_1_38; void*x_2_1_39; void*x_2_1_40; void*x_2_1_41; void*x_2_1_42; void*x_2_1_43; void*x_2_1_44; void*x_2_1_45; void*x_2_1_46; void*x_2_1_47; void*x_2_1_48; void*x_2_1_49; void*x_2_1_50; void*x_2_1_51; void*x_2_1_52; void*x_2_1_53; void*x_2_1_54; void*x_2_1_55; void*x_2_1_56; void*x_2_1_57; void*x_2_1_58; void*x_2_1_59; void*x_2_1_60; void*x_2_1_61; void*x_2_1_62; void*x_2_1_63; void*x_2_1_64; void*x_2_1_65; void*x_2_1_66; void*x_2_1_67; void*x_2_1_68; void*x_2_1_69; void*x_2_1_70; void*x_2_1_71; void*x_2_1_72; void*x_2_1_73; void*x_2_1_74; void*x_2_1_75; void*x_2_1_76; void*x_2_1_77; void*x_2_1_78; void*x_2_1_79; void*x_2_1_80; void*x_2_1_81; void*x_2_1_82; void*x_2_1_83; void*x_2_1_84; void*x_2_1_85; void*x_2_1_86; void*x_2_1_87; void*x_2_1_88; void*x_2_1_89; void*x_2_1_90; void*x_2_1_91; void*x_2_1_92; void*x_2_1_93; void*x_2_1_94; void*x_2_1_95; void*x_2_1_96; void*x_2_1_97; void*x_2_1_98; void*x_2_1_99; void*x_2_1_100; void*x_2_1_101; void*x_2_1_102; void*x_2_1_103; void*x_2_1_104; void*x_2_1_105; void*x_2_1_106; void*x_2_1_107; void*x_2_1_108; void*x_2_1_109; void*x_2_1_110; void*x_2_1_111; void*x_2_1_112; void*x_2_1_113; void*x_2_1_114; void*x_2_1_115; void*x_2_1_116; void*x_2_1_117; void*x_2_1_118; void*x_2_1_119; void*x_2_1_120; void*x_2_1_121; void*x_2_1_122; void*x_2_1_123; void*x_2_1_124; void*x_2_1_125; void*x_2_1_126; void*x_2_1_127; void*x_2_1_128; void*x_2_1_129; void*x_2_1_130; void*x_2_1_131; void*x_2_1_132; void*x_2_1_133; void*x_2_1_134; void*x_2_1_135; void*x_2_1_136; void*x_2_1_137; void*x_2_1_138; void*x_2_1_139; void*x_2_1_140; void*x_2_1_141; void*x_2_1_142; void*x_2_1_143; void*x_2_1_144; void*x_2_1_145; void*x_2_1_146; void*x_2_1_147; void*x_2_1_148; void*x_2_1_149; void*x_2_1_150; void*x_2_1_151; void*x_2_1_152; void*x_2_1_153; void*x_2_1_154; void*x_2_1_155; void*x_2_1_156; void*x_2_1_157; void*x_2_1_158; void*x_2_1_159; void*x_2_1_160; void*x_2_1_161; void*x_2_1_162; void*x_2_1_163; void*x_2_1_164; void*x_2_1_165; void*x_2_1_166; void*x_2_1_167; void*x_2_1_168; void*x_2_1_169; void*x_2_1_170; void*x_2_1_171; void*x_2_1_172; void*x_2_1_173; void*x_2_1_174; void*x_2_1_175; void*x_2_1_176; void*x_2_1_177; void*x_2_1_178; void*x_2_1_179; void*x_2_1_180; void*x_2_1_181; void*x_2_1_182; void*x_2_1_183; id x_2_1_184; void*x_2_1_185; void*x_2_1_186; void*x_2_1_187; void*x_2_1_188; void*x_2_1_189; void*x_2_1_190; void*x_2_1_191; void*x_2_1_192; void*x_2_1_193; void*x_2_1_194; void*x_2_1_195; void*x_2_1_196; void*x_2_1_197; void*x_2_1_198; void*x_2_1_199; void*x_2_1_200; void*x_2_1_201; void*x_2_1_202; void*x_2_1_203; void*x_2_1_204; void*x_2_1_205; void*x_2_1_206; void*x_2_1_207; void*x_2_1_208; void*x_2_1_209; void*x_2_1_210; void*x_2_1_211; void*x_2_1_212; void*x_2_1_213; void*x_2_1_214; void*x_2_1_215; void*x_2_1_216; void*x_2_1_217; void*x_2_1_218; void*x_2_1_219; void*x_2_1_220; void*x_2_1_221; void*x_2_1_222; void*x_2_1_223; void*x_2_1_224; void*x_2_1_225; void*x_2_1_226; void*x_2_1_227; void*x_2_1_228; void*x_2_1_229; void*x_2_1_230; void*x_2_1_231; void*x_2_1_232; void*x_2_1_233; void*x_2_1_234; void*x_2_1_235; void*x_2_1_236; void*x_2_1_237; void*x_2_1_238; void*x_2_1_239; void*x_2_1_240; void*x_2_1_241; void*x_2_1_242; void*x_2_1_243; void*x_2_1_244; void*x_2_1_245; void*x_2_1_246; void*x_2_1_247; void*x_2_1_248; void*x_2_1_249; void*x_2_1_250; void*x_2_1_251; void*x_2_1_252; void*x_2_1_253; void*x_2_1_254; void*x_2_1_255; void*x_2_1_256; void*x_2_1_257; void*x_2_1_258; void*x_2_1_259; void*x_2_1_260; void*x_2_1_261; void*x_2_1_262; void*x_2_1_263; void*x_2_1_264; char *x_2_1_265; void*x_2_1_266; void*x_2_1_267; void*x_2_1_268; void*x_2_1_269; void*x_2_1_270; void*x_2_1_271; void*x_2_1_272; char *x_2_1_273; void*x_2_1_274; void*x_2_1_275; void*x_2_1_276; void*x_2_1_277; void*x_2_1_278; void*x_2_1_279; void*x_2_1_280; char *x_2_1_281; void*x_2_1_282; void*x_2_1_283; void*x_2_1_284; void*x_2_1_285; void*x_2_1_286; void*x_2_1_287; void*x_2_1_288; char *x_2_1_289; void*x_2_1_290; void*x_2_1_291; void*x_2_1_292; void*x_2_1_293; void*x_2_1_294; void*x_2_1_295; void*x_2_1_296; char *x_2_1_297; void*x_2_1_298; void*x_2_1_299; void*x_2_1_300; void*x_2_1_301; void*x_2_1_302; void*x_2_1_303; void*x_2_1_304; char *x_2_1_305; void*x_2_1_306; void*x_2_1_307; void*x_2_1_308; void*x_2_1_309; void*x_2_1_310; void*x_2_1_311; void*x_2_1_312; char *x_2_1_313; void*x_2_1_314; void*x_2_1_315; void*x_2_1_316; void*x_2_1_317; void*x_2_1_318; void*x_2_1_319; void*x_2_1_320; char *x_2_1_321; void*x_2_1_322; void*x_2_1_323; void*x_2_1_324; void*x_2_1_325; void*x_2_1_326; void*x_2_1_327; void*x_2_1_328; char *x_2_1_329; void*x_2_1_330; void*x_2_1_331; void*x_2_1_332; void*x_2_1_333; void*x_2_1_334; void*x_2_1_335; void*x_2_1_336; char *x_2_1_337; void*x_2_1_338; void*x_2_1_339; void*x_2_1_340; void*x_2_1_341; void*x_2_1_342; void*x_2_1_343; void*x_2_1_344; void*x_2_1_345; void x_2_1_346; void*x_2_1_347; void*x_2_1_348; void*x_2_1_349; void*x_2_1_350; void*x_2_1_351; void*x_2_1_352; void*x_2_1_353; void*x_2_1_354; void*x_2_1_355; void*x_2_1_356; void*x_2_1_357; void*x_2_1_358; void*x_2_1_359; void*x_2_1_360; void*x_2_1_361; void*x_2_1_362; void*x_2_1_363; void*x_2_1_364; void*x_2_1_365; void*x_2_1_366; void*x_2_1_367; void*x_2_1_368; void*x_2_1_369; void*x_2_1_370; void*x_2_1_371; void*x_2_1_372; void*x_2_1_373; void*x_2_1_374; id x_2_1_375; void*x_2_1_376; void*x_2_1_377; void*x_2_1_378; void*x_2_1_379; void*x_2_1_380; void*x_2_1_381; void*x_2_1_382; void*x_2_1_383; void*x_2_1_384; void*x_2_1_385; void*x_2_1_386; void*x_2_1_387; void*x_2_1_388; void*x_2_1_389; long long x_2_1_390; bool x_2_1_391; void*x_2_1_392; void*x_2_1_393; void*x_2_1_394; void*x_2_1_395; void*x_2_1_396; void*x_2_1_397; void*x_2_1_398; void*x_2_1_399; void*x_2_1_400; void*x_2_1_401; void*x_2_1_402; void*x_2_1_403; void*x_2_1_404; void*x_2_1_405; void*x_2_1_406; void*x_2_1_407; unsigned short x_2_1_408; void*x_2_1_409; short x_2_1_410; void*x_2_1_411; void*x_2_1_412; void*x_2_1_413; void*x_2_1_414; unsigned long x_2_1_415; int x_2_1_416; unsigned int x_2_1_417/* : ? */; const void*x_2_1_418; const void*x_2_1_419; void*x_2_1_420; void*x_2_1_421; const int x_2_1_422; void x_2_1_423; void*x_2_1_424; void*x_2_1_425; void*x_2_1_426; void*x_2_1_427; const void*x_2_1_428; void*x_2_1_429; void*x_2_1_430; void*x_2_1_431; out const void*x_2_1_432; short x_2_1_433; void*x_2_1_434; unsigned short x_2_1_435; long x_2_1_436; int x_2_1_437; double x_2_1_438; void*x_2_1_439; short x_2_1_440; void*x_2_1_441; out void*x_2_1_442; void*x_2_1_443; int x_2_1_444; void*x_2_1_445; void*x_2_1_446; float x_2_1_447; const void*x_2_1_448; void*x_2_1_449; void*x_2_1_450; void*x_2_1_451; out const void*x_2_1_452; void*x_2_1_453; void*x_2_1_454; const void*x_2_1_455; void*x_2_1_456; void*x_2_1_457; void*x_2_1_458; out const void*x_2_1_459; short x_2_1_460; void*x_2_1_461; bycopy void*x_2_1_462; void*x_2_1_463; short x_2_1_464; void*x_2_1_465; out void*x_2_1_466; in double x_2_1_467; void*x_2_1_468; void*x_2_1_469; int x_2_1_470; out in void*x_2_1_471; float x_2_1_472; const void*x_2_1_473; void*x_2_1_474; void*x_2_1_475; void*x_2_1_476; out const void*x_2_1_477; void*x_2_1_478; bycopy void*x_2_1_479; void*x_2_1_480; short x_2_1_481; void*x_2_1_482; out void*x_2_1_483; in double x_2_1_484; void*x_2_1_485; void*x_2_1_486; int x_2_1_487; out in void*x_2_1_488; void*x_2_1_489; void*x_2_1_490; void*x_2_1_491; long long x_2_1_492; bool x_2_1_493; void*x_2_1_494; void*x_2_1_495; void*x_2_1_496; void*x_2_1_497; void*x_2_1_498; void*x_2_1_499; void*x_2_1_500; void*x_2_1_501; void*x_2_1_502; void*x_2_1_503; void*x_2_1_504; void*x_2_1_505; void*x_2_1_506; void*x_2_1_507; void*x_2_1_508; void*x_2_1_509; unsigned short x_2_1_510; void*x_2_1_511; short x_2_1_512; void*x_2_1_513; void*x_2_1_514; void*x_2_1_515; void*x_2_1_516; unsigned long x_2_1_517; int x_2_1_518; unsigned int x_2_1_519/* : ? */; const void*x_2_1_520; const void*x_2_1_521; void*x_2_1_522; void*x_2_1_523; const int x_2_1_524; void x_2_1_525; void*x_2_1_526; void*x_2_1_527; void*x_2_1_528; void*x_2_1_529; const void*x_2_1_530; void*x_2_1_531; void*x_2_1_532; void*x_2_1_533; out const void*x_2_1_534; short x_2_1_535; void*x_2_1_536; unsigned short x_2_1_537; long x_2_1_538; int x_2_1_539; double x_2_1_540; void*x_2_1_541; short x_2_1_542; void*x_2_1_543; out void*x_2_1_544; void*x_2_1_545; int x_2_1_546; void*x_2_1_547; void*x_2_1_548; float x_2_1_549; const void*x_2_1_550; void*x_2_1_551; void*x_2_1_552; void*x_2_1_553; out const void*x_2_1_554; void*x_2_1_555; void*x_2_1_556; const void*x_2_1_557; void*x_2_1_558; void*x_2_1_559; void*x_2_1_560; out const void*x_2_1_561; short x_2_1_562; void*x_2_1_563; bycopy void*x_2_1_564; void*x_2_1_565; short x_2_1_566; void*x_2_1_567; out void*x_2_1_568; in double x_2_1_569; void*x_2_1_570; void*x_2_1_571; int x_2_1_572; out in void*x_2_1_573; float x_2_1_574; const void*x_2_1_575; void*x_2_1_576; void*x_2_1_577; void*x_2_1_578; out const void*x_2_1_579; void*x_2_1_580; bycopy void*x_2_1_581; void*x_2_1_582; short x_2_1_583; void*x_2_1_584; out void*x_2_1_585; in double x_2_1_586; void*x_2_1_587; void*x_2_1_588; int x_2_1_589; out in void*x_2_1_590; void*x_2_1_591; void*x_2_1_592; void*x_2_1_593; long long x_2_1_594; bool x_2_1_595; void*x_2_1_596; void*x_2_1_597; void*x_2_1_598; void*x_2_1_599; void*x_2_1_600; void*x_2_1_601; void*x_2_1_602; void*x_2_1_603; void*x_2_1_604; void*x_2_1_605; void*x_2_1_606; void*x_2_1_607; void*x_2_1_608; void*x_2_1_609; void*x_2_1_610; void*x_2_1_611; unsigned short x_2_1_612; void*x_2_1_613; short x_2_1_614; void*x_2_1_615; void*x_2_1_616; void*x_2_1_617; void*x_2_1_618; unsigned long x_2_1_619; int x_2_1_620; unsigned int x_2_1_621/* : ? */; const void*x_2_1_622; const void*x_2_1_623; void*x_2_1_624; void*x_2_1_625; const int x_2_1_626; void x_2_1_627; void*x_2_1_628; void*x_2_1_629; void*x_2_1_630; void*x_2_1_631; const void*x_2_1_632; void*x_2_1_633; void*x_2_1_634; void*x_2_1_635; out const void*x_2_1_636; short x_2_1_637; void*x_2_1_638; unsigned short x_2_1_639; long x_2_1_640; int x_2_1_641; double x_2_1_642; void*x_2_1_643; short x_2_1_644; void*x_2_1_645; out void*x_2_1_646; void*x_2_1_647; int x_2_1_648; void*x_2_1_649; void*x_2_1_650; float x_2_1_651; const void*x_2_1_652; void*x_2_1_653; void*x_2_1_654; void*x_2_1_655; out const void*x_2_1_656; void*x_2_1_657; void*x_2_1_658; const void*x_2_1_659; void*x_2_1_660; void*x_2_1_661; void*x_2_1_662; out const void*x_2_1_663; short x_2_1_664; void*x_2_1_665; bycopy void*x_2_1_666; void*x_2_1_667; short x_2_1_668; void*x_2_1_669; out void*x_2_1_670; in double x_2_1_671; void*x_2_1_672; void*x_2_1_673; int x_2_1_674; out in void*x_2_1_675; float x_2_1_676; const void*x_2_1_677; void*x_2_1_678; void*x_2_1_679; void*x_2_1_680; out const void*x_2_1_681; void*x_2_1_682; bycopy void*x_2_1_683; void*x_2_1_684; short x_2_1_685; void*x_2_1_686; out void*x_2_1_687; in double x_2_1_688; void*x_2_1_689; void*x_2_1_690; int x_2_1_691; out in void*x_2_1_692; void*x_2_1_693; void*x_2_1_694; void*x_2_1_695; long long x_2_1_696; bool x_2_1_697; void*x_2_1_698; void*x_2_1_699; void*x_2_1_700; void*x_2_1_701; void*x_2_1_702; void*x_2_1_703; void*x_2_1_704; void*x_2_1_705; void*x_2_1_706; void*x_2_1_707; void*x_2_1_708; void*x_2_1_709; void*x_2_1_710; void*x_2_1_711; void*x_2_1_712; void*x_2_1_713; unsigned short x_2_1_714; void*x_2_1_715; short x_2_1_716; void*x_2_1_717; void*x_2_1_718; void*x_2_1_719; void*x_2_1_720; unsigned long x_2_1_721; int x_2_1_722; unsigned int x_2_1_723/* : ? */; const void*x_2_1_724; const void*x_2_1_725; void*x_2_1_726; void*x_2_1_727; const int x_2_1_728; void x_2_1_729; void*x_2_1_730; void*x_2_1_731; void*x_2_1_732; void*x_2_1_733; const void*x_2_1_734; void*x_2_1_735; void*x_2_1_736; void*x_2_1_737; out const void*x_2_1_738; short x_2_1_739; void*x_2_1_740; unsigned short x_2_1_741; long x_2_1_742; int x_2_1_743; double x_2_1_744; void*x_2_1_745; short x_2_1_746; void*x_2_1_747; out void*x_2_1_748; void*x_2_1_749; int x_2_1_750; void*x_2_1_751; void*x_2_1_752; float x_2_1_753; const void*x_2_1_754; void*x_2_1_755; void*x_2_1_756; void*x_2_1_757; out const void*x_2_1_758; void*x_2_1_759; void*x_2_1_760; const void*x_2_1_761; void*x_2_1_762; void*x_2_1_763; void*x_2_1_764; out const void*x_2_1_765; short x_2_1_766; void*x_2_1_767; bycopy void*x_2_1_768; void*x_2_1_769; short x_2_1_770; void*x_2_1_771; out void*x_2_1_772; in double x_2_1_773; void*x_2_1_774; void*x_2_1_775; int x_2_1_776; out in void*x_2_1_777; float x_2_1_778; const void*x_2_1_779; void*x_2_1_780; void*x_2_1_781; void*x_2_1_782; out const void*x_2_1_783; void*x_2_1_784; bycopy void*x_2_1_785; void*x_2_1_786; short x_2_1_787; void*x_2_1_788; out void*x_2_1_789; in double x_2_1_790; void*x_2_1_791; void*x_2_1_792; int x_2_1_793; out in void*x_2_1_794; void*x_2_1_795; void*x_2_1_796; void*x_2_1_797; long long x_2_1_798; bool x_2_1_799; void*x_2_1_800; void*x_2_1_801; void*x_2_1_802; void*x_2_1_803; void*x_2_1_804; void*x_2_1_805; void*x_2_1_806; void*x_2_1_807; void*x_2_1_808; void*x_2_1_809; void*x_2_1_810; void*x_2_1_811; void*x_2_1_812; void*x_2_1_813; void*x_2_1_814; void*x_2_1_815; unsigned short x_2_1_816; void*x_2_1_817; short x_2_1_818; void*x_2_1_819; void*x_2_1_820; void*x_2_1_821; void*x_2_1_822; unsigned long x_2_1_823; int x_2_1_824; unsigned int x_2_1_825/* : ? */; const void*x_2_1_826; const void*x_2_1_827; void*x_2_1_828; void*x_2_1_829; const int x_2_1_830; void x_2_1_831; void*x_2_1_832; void*x_2_1_833; void*x_2_1_834; void*x_2_1_835; const void*x_2_1_836; void*x_2_1_837; void*x_2_1_838; void*x_2_1_839; out const void*x_2_1_840; short x_2_1_841; void*x_2_1_842; unsigned short x_2_1_843; long x_2_1_844; int x_2_1_845; double x_2_1_846; void*x_2_1_847; short x_2_1_848; void*x_2_1_849; out void*x_2_1_850; void*x_2_1_851; int x_2_1_852; void*x_2_1_853; void*x_2_1_854; float x_2_1_855; const void*x_2_1_856; void*x_2_1_857; void*x_2_1_858; void*x_2_1_859; out const void*x_2_1_860; void*x_2_1_861; void*x_2_1_862; const void*x_2_1_863; void*x_2_1_864; void*x_2_1_865; void*x_2_1_866; out const void*x_2_1_867; short x_2_1_868; void*x_2_1_869; bycopy void*x_2_1_870; void*x_2_1_871; short x_2_1_872; void*x_2_1_873; out void*x_2_1_874; in double x_2_1_875; void*x_2_1_876; void*x_2_1_877; int x_2_1_878; out in void*x_2_1_879; float x_2_1_880; const void*x_2_1_881; void*x_2_1_882; void*x_2_1_883; void*x_2_1_884; out const void*x_2_1_885; void*x_2_1_886; bycopy void*x_2_1_887; void*x_2_1_888; short x_2_1_889; void*x_2_1_890; out void*x_2_1_891; in double x_2_1_892; void*x_2_1_893; void*x_2_1_894; int x_2_1_895; out in void*x_2_1_896; void*x_2_1_897; void*x_2_1_898; void*x_2_1_899; long long x_2_1_900; bool x_2_1_901; void*x_2_1_902; void*x_2_1_903; void*x_2_1_904; void*x_2_1_905; void*x_2_1_906; void*x_2_1_907; void*x_2_1_908; void*x_2_1_909; void*x_2_1_910; void*x_2_1_911; void*x_2_1_912; void*x_2_1_913; void*x_2_1_914; void*x_2_1_915; void*x_2_1_916; void*x_2_1_917; unsigned short x_2_1_918; void*x_2_1_919; short x_2_1_920; void*x_2_1_921; void*x_2_1_922; void*x_2_1_923; void*x_2_1_924; unsigned long x_2_1_925; int x_2_1_926; unsigned int x_2_1_927/* : ? */; const void*x_2_1_928; const void*x_2_1_929; void*x_2_1_930; void*x_2_1_931; const int x_2_1_932; void x_2_1_933; void*x_2_1_934; void*x_2_1_935; void*x_2_1_936; void*x_2_1_937; const void*x_2_1_938; void*x_2_1_939; void*x_2_1_940; void*x_2_1_941; out const void*x_2_1_942; short x_2_1_943; void*x_2_1_944; unsigned short x_2_1_945; long x_2_1_946; int x_2_1_947; double x_2_1_948; void*x_2_1_949; short x_2_1_950; void*x_2_1_951; out void*x_2_1_952; void*x_2_1_953; int x_2_1_954; void*x_2_1_955; void*x_2_1_956; float x_2_1_957; const void*x_2_1_958; void*x_2_1_959; void*x_2_1_960; void*x_2_1_961; out const void*x_2_1_962; void*x_2_1_963; void*x_2_1_964; const void*x_2_1_965; void*x_2_1_966; void*x_2_1_967; void*x_2_1_968; out const void*x_2_1_969; short x_2_1_970; void*x_2_1_971; bycopy void*x_2_1_972; void*x_2_1_973; short x_2_1_974; void*x_2_1_975; out void*x_2_1_976; in double x_2_1_977; void*x_2_1_978; void*x_2_1_979; int x_2_1_980; out in void*x_2_1_981; float x_2_1_982; const void*x_2_1_983; void*x_2_1_984; void*x_2_1_985; void*x_2_1_986; out const void*x_2_1_987; void*x_2_1_988; bycopy void*x_2_1_989; void*x_2_1_990; short x_2_1_991; void*x_2_1_992; out void*x_2_1_993; in double x_2_1_994; void*x_2_1_995; void*x_2_1_996; int x_2_1_997; out in void*x_2_1_998; void*x_2_1_999; void*x_2_1_1000; void*x_2_1_1001; long long x_2_1_1002; bool x_2_1_1003; void*x_2_1_1004; void*x_2_1_1005; void*x_2_1_1006; void*x_2_1_1007; void*x_2_1_1008; void*x_2_1_1009; void*x_2_1_1010; void*x_2_1_1011; void*x_2_1_1012; void*x_2_1_1013; void*x_2_1_1014; void*x_2_1_1015; void*x_2_1_1016; void*x_2_1_1017; void*x_2_1_1018; void*x_2_1_1019; unsigned short x_2_1_1020; void*x_2_1_1021; short x_2_1_1022; void*x_2_1_1023; void*x_2_1_1024; void*x_2_1_1025; void*x_2_1_1026; unsigned long x_2_1_1027; int x_2_1_1028; unsigned int x_2_1_1029/* : ? */; const void*x_2_1_1030; const void*x_2_1_1031; void*x_2_1_1032; void*x_2_1_1033; const int x_2_1_1034; void x_2_1_1035; void*x_2_1_1036; void*x_2_1_1037; void*x_2_1_1038; void*x_2_1_1039; const void*x_2_1_1040; void*x_2_1_1041; void*x_2_1_1042; void*x_2_1_1043; out const void*x_2_1_1044; short x_2_1_1045; void*x_2_1_1046; unsigned short x_2_1_1047; long x_2_1_1048; int x_2_1_1049; double x_2_1_1050; void*x_2_1_1051; short x_2_1_1052; void*x_2_1_1053; out void*x_2_1_1054; void*x_2_1_1055; int x_2_1_1056; void*x_2_1_1057; void*x_2_1_1058; float x_2_1_1059; const void*x_2_1_1060; void*x_2_1_1061; void*x_2_1_1062; void*x_2_1_1063; out const void*x_2_1_1064; void*x_2_1_1065; void*x_2_1_1066; const void*x_2_1_1067; void*x_2_1_1068; void*x_2_1_1069; void*x_2_1_1070; out const void*x_2_1_1071; short x_2_1_1072; void*x_2_1_1073; bycopy void*x_2_1_1074; void*x_2_1_1075; short x_2_1_1076; void*x_2_1_1077; out void*x_2_1_1078; in double x_2_1_1079; void*x_2_1_1080; void*x_2_1_1081; int x_2_1_1082; out in void*x_2_1_1083; float x_2_1_1084; const void*x_2_1_1085; void*x_2_1_1086; void*x_2_1_1087; void*x_2_1_1088; out const void*x_2_1_1089; void*x_2_1_1090; bycopy void*x_2_1_1091; void*x_2_1_1092; short x_2_1_1093; void*x_2_1_1094; out void*x_2_1_1095; in double x_2_1_1096; void*x_2_1_1097; void*x_2_1_1098; int x_2_1_1099; out in void*x_2_1_1100; void*x_2_1_1101; void*x_2_1_1102; void*x_2_1_1103; void*x_2_1_1104; void*x_2_1_1105; void*x_2_1_1106; void*x_2_1_1107; void*x_2_1_1108; void*x_2_1_1109; void*x_2_1_1110; void*x_2_1_1111; void*x_2_1_1112; void*x_2_1_1113; void*x_2_1_1114; void*x_2_1_1115; void*x_2_1_1116; void*x_2_1_1117; void*x_2_1_1118; void*x_2_1_1119; void*x_2_1_1120; void*x_2_1_1121; void*x_2_1_1122; void*x_2_1_1123; void*x_2_1_1124; void*x_2_1_1125; void*x_2_1_1126; void*x_2_1_1127; void*x_2_1_1128; unsigned int x_2_1_1129/* : ? */; void*x_2_1_1130; void*x_2_1_1131; void*x_2_1_1132; void*x_2_1_1133; void*x_2_1_1134; void*x_2_1_1135; void*x_2_1_1136; unsigned int x_2_1_1137/* : ? */; void*x_2_1_1138; void*x_2_1_1139; void*x_2_1_1140; void*x_2_1_1141; void*x_2_1_1142; void*x_2_1_1143; void*x_2_1_1144; BOOL x_2_1_1145; void*x_2_1_1146; void*x_2_1_1147; void*x_2_1_1148; void*x_2_1_1149; void*x_2_1_1150; void*x_2_1_1151; void*x_2_1_1152; BOOL x_2_1_1153; void*x_2_1_1154; void*x_2_1_1155; void*x_2_1_1156; void*x_2_1_1157; void*x_2_1_1158; void*x_2_1_1159; void*x_2_1_1160; double x_2_1_1161; void*x_2_1_1162; void*x_2_1_1163; void*x_2_1_1164; void*x_2_1_1165; void*x_2_1_1166; void*x_2_1_1167; id x_2_1_1168; void*x_2_1_1169; void*x_2_1_1170; void*x_2_1_1171; void*x_2_1_1172; void*x_2_1_1173; void*x_2_1_1174; void*x_2_1_1175; void*x_2_1_1176; void*x_2_1_1177; void*x_2_1_1178; void*x_2_1_1179; void*x_2_1_1180; void*x_2_1_1181; void*x_2_1_1182; void*x_2_1_1183; void*x_2_1_1184; void*x_2_1_1185; void*x_2_1_1186; void*x_2_1_1187; void*x_2_1_1188; void*x_2_1_1189; void*x_2_1_1190; void*x_2_1_1191; void*x_2_1_1192; void*x_2_1_1193; void*x_2_1_1194; void*x_2_1_1195; void*x_2_1_1196; void*x_2_1_1197; void*x_2_1_1198; id x_2_1_1199; void*x_2_1_1200; void*x_2_1_1201; void*x_2_1_1202; void*x_2_1_1203; void*x_2_1_1204; void*x_2_1_1205; void*x_2_1_1206; int x_2_1_1207; void*x_2_1_1208; void*x_2_1_1209; void*x_2_1_1210; void*x_2_1_1211; void*x_2_1_1212; void*x_2_1_1213; void*x_2_1_1214; int x_2_1_1215; void*x_2_1_1216; void*x_2_1_1217; void*x_2_1_1218; void*x_2_1_1219; void*x_2_1_1220; void*x_2_1_1221; void*x_2_1_1222; int x_2_1_1223; void*x_2_1_1224; void*x_2_1_1225; void*x_2_1_1226; void*x_2_1_1227; void*x_2_1_1228; void*x_2_1_1229; void*x_2_1_1230; long x_2_1_1231; void*x_2_1_1232; void*x_2_1_1233; void*x_2_1_1234; void*x_2_1_1235; void*x_2_1_1236; void*x_2_1_1237; id x_2_1_1238; void*x_2_1_1239; void*x_2_1_1240; void*x_2_1_1241; void*x_2_1_1242; void*x_2_1_1243; void*x_2_1_1244; void*x_2_1_1245; out void*x_2_1_1246; void*x_2_1_1247; void*x_2_1_1248; void*x_2_1_1249; void*x_2_1_1250; void*x_2_1_1251; id x_2_1_1252; void*x_2_1_1253; void*x_2_1_1254; void*x_2_1_1255; void*x_2_1_1256; void*x_2_1_1257; void*x_2_1_1258; void*x_2_1_1259; long long x_2_1_1260; void*x_2_1_1261; void*x_2_1_1262; void*x_2_1_1263; void*x_2_1_1264; void*x_2_1_1265; void*x_2_1_1266; id x_2_1_1267; void*x_2_1_1268; void*x_2_1_1269; void*x_2_1_1270; void*x_2_1_1271; void*x_2_1_1272; void*x_2_1_1273; void*x_2_1_1274; void*x_2_1_1275; void*x_2_1_1276; void*x_2_1_1277; void*x_2_1_1278; void*x_2_1_1279; void*x_2_1_1280; void*x_2_1_1281; void*x_2_1_1282; void*x_2_1_1283; void*x_2_1_1284; void*x_2_1_1285; void*x_2_1_1286; void*x_2_1_1287; void*x_2_1_1288; void*x_2_1_1289; void*x_2_1_1290; void x_2_1_1291; void*x_2_1_1292; void*x_2_1_1293; void*x_2_1_1294; void*x_2_1_1295; void*x_2_1_1296; void*x_2_1_1297; void*x_2_1_1298; void*x_2_1_1299; void*x_2_1_1300; void*x_2_1_1301; void*x_2_1_1302; void*x_2_1_1303; void*x_2_1_1304; void*x_2_1_1305; void*x_2_1_1306; struct x_2_1_1307; void*x_2_1_1308; void*x_2_1_1309; void*x_2_1_1310; void*x_2_1_1311; void*x_2_1_1312; void*x_2_1_1313; void*x_2_1_1314; void*x_2_1_1315; void*x_2_1_1316; void*x_2_1_1317; void*x_2_1_1318; void*x_2_1_1319; void*x_2_1_1320; void*x_2_1_1321; void*x_2_1_1322; void*x_2_1_1323; void*x_2_1_1324; void*x_2_1_1325; void*x_2_1_1326; void*x_2_1_1327; void*x_2_1_1328; void*x_2_1_1329; void*x_2_1_1330; void*x_2_1_1331; void*x_2_1_1332; void*x_2_1_1333; void*x_2_1_1334; void*x_2_1_1335; void*x_2_1_1336; void*x_2_1_1337; void*x_2_1_1338; void*x_2_1_1339; void*x_2_1_1340; void*x_2_1_1341; void*x_2_1_1342; void*x_2_1_1343; void*x_2_1_1344; void*x_2_1_1345; void*x_2_1_1346; void*x_2_1_1347; void*x_2_1_1348; void*x_2_1_1349; void*x_2_1_1350; void*x_2_1_1351; void*x_2_1_1352; double x_2_1_1353; void*x_2_1_1354; void*x_2_1_1355; void*x_2_1_1356; void*x_2_1_1357; void*x_2_1_1358; void*x_2_1_1359; void*x_2_1_1360; double x_2_1_1361; void*x_2_1_1362; void*x_2_1_1363; void*x_2_1_1364; void*x_2_1_1365; void*x_2_1_1366; void*x_2_1_1367; void*x_2_1_1368; double x_2_1_1369; void*x_2_1_1370; void*x_2_1_1371; void*x_2_1_1372; void*x_2_1_1373; void*x_2_1_1374; void*x_2_1_1375; void*x_2_1_1376; double x_2_1_1377; void*x_2_1_1378; void*x_2_1_1379; void*x_2_1_1380; void*x_2_1_1381; void*x_2_1_1382; void*x_2_1_1383; void*x_2_1_1384; double x_2_1_1385; void*x_2_1_1386; void*x_2_1_1387; void*x_2_1_1388; void*x_2_1_1389; void*x_2_1_1390; void*x_2_1_1391; void*x_2_1_1392; double x_2_1_1393; void*x_2_1_1394; void*x_2_1_1395; void*x_2_1_1396; void*x_2_1_1397; void*x_2_1_1398; void*x_2_1_1399; void*x_2_1_1400; double x_2_1_1401; void*x_2_1_1402; void*x_2_1_1403; void*x_2_1_1404; void*x_2_1_1405; void*x_2_1_1406; void*x_2_1_1407; void*x_2_1_1408; double x_2_1_1409; void*x_2_1_1410; void*x_2_1_1411; void*x_2_1_1412; void*x_2_1_1413; void*x_2_1_1414; void*x_2_1_1415; void*x_2_1_1416; void*x_2_1_1417; void x_2_1_1418; void*x_2_1_1419; void*x_2_1_1420; void*x_2_1_1421; void*x_2_1_1422; void*x_2_1_1423; void*x_2_1_1424; void*x_2_1_1425; const void*x_2_1_1426; void*x_2_1_1427; void*x_2_1_1428; void*x_2_1_1429; void*x_2_1_1430; } x2; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; char *x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; long long x177; bool x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; unsigned short x195; void*x196; short x197; void*x198; void*x199; void*x200; void*x201; unsigned long x202; int x203; unsigned int x204/* : ? */; const void*x205; const void*x206; void*x207; void*x208; const int x209; void x210; void*x211; void*x212; void*x213; void*x214; const void*x215; void*x216; void*x217; void*x218; out const void*x219; short x220; void*x221; unsigned short x222; long x223; int x224; double x225; void*x226; short x227; void*x228; out void*x229; void*x230; int x231; void*x232; void*x233; float x234; const void*x235; void*x236; void*x237; void*x238; out const void*x239; void*x240; void*x241; const void*x242; void*x243; void*x244; void*x245; out const void*x246; short x247; void*x248; bycopy void*x249; void*x250; short x251; void*x252; out void*x253; in double x254; void*x255; void*x256; int x257; out in void*x258; float x259; const void*x260; void*x261; void*x262; void*x263; out const void*x264; void*x265; bycopy void*x266; void*x267; short x268; void*x269; out void*x270; in double x271; void*x272; void*x273; int x274; out in void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void x290; void*x291; void*x292; void*x293; void*x294; void*x295; struct x296; void*x297; void*x298; void*x299; void*x300; struct x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void x308; void*x309; void*x310; void*x311; void*x312; void*x313; })geometryResourceWithPrimitiveType:(int)arg1;
- (id)initWithSeries:(id)arg1 creator:(id)arg2;
- (id)normal;
- (void)regenerate;
- (void)regenerateBounds;
- (void)regenerateForChild:(id)arg1;
- (id)texcoord;
- (id)vertex;

@end
