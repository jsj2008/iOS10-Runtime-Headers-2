/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAnalyzerNDAPI : NSObject {
    struct IntNovDetect { unsigned int x1; int x2; int x3; struct NString { int (**x_4_1_1)(); unsigned int x_4_1_2; char *x_4_1_3; } x4; bool x5; struct TSAcAnal { struct NWavChunk2HTKFrames { struct NArray<float> { int (**x_1_3_1)(); float *x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; struct NFrame { int (**x_2_3_1)(); float *x_2_3_2; unsigned int x_2_3_3; } x_1_2_2; struct AccelStaticMFCC { bool x_3_3_1; struct NArray<float> { int (**x_2_4_1)(); float *x_2_4_2; unsigned int x_2_4_3; } x_3_3_2; struct NArray<float> { int (**x_3_4_1)(); float *x_3_4_2; unsigned int x_3_4_3; } x_3_3_3; struct NArray<short> { int (**x_4_4_1)(); short *x_4_4_2; unsigned int x_4_4_3; } x_3_3_4; unsigned int x_3_3_5; float x_3_3_6; struct AccelWin2MFCC { bool x_7_4_1; struct AccelWindow { unsigned int x_2_5_1; bool x_2_5_2; bool x_2_5_3; bool x_2_5_4; struct NArray<float> { int (**x_5_6_1)(); float *x_5_6_2; unsigned int x_5_6_3; } x_2_5_5; int x_2_5_6; } x_7_4_2; struct AccelFFT { struct vDSP_DFT_SetupStruct {} *x_3_5_1; bool x_3_5_2; unsigned int x_3_5_3; unsigned int x_3_5_4; unsigned int x_3_5_5; struct NArray<float> { int (**x_6_6_1)(); float *x_6_6_2; unsigned int x_6_6_3; } x_3_5_6; } x_7_4_3; struct AccelPSD { unsigned int x_4_5_1; bool x_4_5_2; unsigned int x_4_5_3; bool x_4_5_4; } x_7_4_4; struct AccelMelFilter { unsigned int x_5_5_1; unsigned int x_5_5_2; unsigned int x_5_5_3; bool x_5_5_4; struct NArray<unsigned int> { int (**x_5_6_1)(); unsigned int *x_5_6_2; unsigned int x_5_6_3; } x_5_5_5; struct NArray<unsigned int> { int (**x_6_6_1)(); unsigned int *x_6_6_2; unsigned int x_6_6_3; } x_5_5_6; struct NArray<NArray<float> > { int (**x_7_6_1)(); struct NArray<float> {} *x_7_6_2; unsigned int x_7_6_3; } x_5_5_7; struct NArray<float> { int (**x_8_6_1)(); float *x_8_6_2; unsigned int x_8_6_3; } x_5_5_8; } x_7_4_5; struct AccelLoga { unsigned int x_6_5_1; bool x_6_5_2; float x_6_5_3; float x_6_5_4; } x_7_4_6; struct AccelCosine { unsigned int x_7_5_1; unsigned int x_7_5_2; unsigned int x_7_5_3; bool x_7_5_4; struct N2DArray<float> { int (**x_5_6_1)(); struct NArray<float> {} *x_5_6_2; unsigned int x_5_6_3; unsigned int x_5_6_4; unsigned int x_5_6_5; } x_7_5_5; struct NArray<float> { int (**x_6_6_1)(); float *x_6_6_2; unsigned int x_6_6_3; } x_7_5_6; } x_7_4_7; struct DSPSplitComplex { float *x_8_5_1; float *x_8_5_2; } x_7_4_8; struct NArray<float> { int (**x_9_5_1)(); float *x_9_5_2; unsigned int x_9_5_3; } x_7_4_9; float x_7_4_10; unsigned int x_7_4_11; unsigned int x_7_4_12; bool x_7_4_13; unsigned int x_7_4_14; unsigned int x_7_4_15; bool x_7_4_16; float x_7_4_17; bool x_7_4_18; unsigned int x_7_4_19; unsigned int x_7_4_20; float x_7_4_21; float x_7_4_22; float x_7_4_23; float x_7_4_24; unsigned int x_7_4_25; unsigned int x_7_4_26; } x_3_3_7; unsigned int x_3_3_8; unsigned int x_3_3_9; unsigned int x_3_3_10; float x_3_3_11; int x_3_3_12; int x_3_3_13; short *x_3_3_14; unsigned int x_3_3_15; } x_1_2_3; struct NDynamicMFCC { struct NArray<float> { int (**x_1_4_1)(); float *x_1_4_2; unsigned int x_1_4_3; } x_4_3_1; bool x_4_3_2; bool x_4_3_3; struct NLinkedList<NArray<float> > { int (**x_4_4_1)(); struct NElement {} *x_4_4_2; struct NElement {} *x_4_4_3; unsigned int x_4_4_4; } x_4_3_4; struct NLinkedList<NArray<float> > { int (**x_5_4_1)(); struct NElement {} *x_5_4_2; struct NElement {} *x_5_4_3; unsigned int x_5_4_4; } x_4_3_5; unsigned int x_4_3_6; unsigned int x_4_3_7; unsigned int x_4_3_8; unsigned int x_4_3_9; unsigned int x_4_3_10; unsigned int x_4_3_11; unsigned int x_4_3_12; struct NDelta { bool x_13_4_1; unsigned int x_13_4_2; unsigned int x_13_4_3; float x_13_4_4; bool x_13_4_5; struct NArray<float> { int (**x_6_5_1)(); float *x_6_5_2; unsigned int x_6_5_3; } x_13_4_6; } x_4_3_13; struct NDelta { bool x_14_4_1; unsigned int x_14_4_2; unsigned int x_14_4_3; float x_14_4_4; bool x_14_4_5; struct NArray<float> { int (**x_6_5_1)(); float *x_6_5_2; unsigned int x_6_5_3; } x_14_4_6; } x_4_3_14; } x_1_2_4; bool x_1_2_5; bool x_1_2_6; struct NString { int (**x_7_3_1)(); unsigned int x_7_3_2; char *x_7_3_3; } x_1_2_7; struct NString { int (**x_8_3_1)(); unsigned int x_8_3_2; char *x_8_3_3; } x_1_2_8; struct NString { int (**x_9_3_1)(); unsigned int x_9_3_2; char *x_9_3_3; } x_1_2_9; struct NString { int (**x_10_3_1)(); unsigned int x_10_3_2; char *x_10_3_3; } x_1_2_10; unsigned int x_1_2_11; float x_1_2_12; bool x_1_2_13; bool x_1_2_14; float x_1_2_15; bool x_1_2_16; float x_1_2_17; bool x_1_2_18; unsigned int x_1_2_19; float x_1_2_20; float x_1_2_21; float x_1_2_22; float x_1_2_23; unsigned int x_1_2_24; bool x_1_2_25; unsigned int x_1_2_26; float x_1_2_27; float x_1_2_28; unsigned int x_1_2_29; unsigned int x_1_2_30; unsigned int x_1_2_31; bool x_1_2_32; unsigned int x_1_2_33; unsigned int x_1_2_34; } x_6_1_1; struct NResizingQueue<NFrame> { int (**x_2_2_1)(); struct NLinkedList<NArray<NResizingQueue<NFrame>::NElement> > { int (**x_2_3_1)(); struct NElement {} *x_2_3_2; struct NElement {} *x_2_3_3; unsigned int x_2_3_4; } x_2_2_2; struct NElement {} *x_2_2_3; struct NElement {} *x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; bool x_2_2_8; unsigned int x_2_2_9; float x_2_2_10; } x_6_1_2; struct NFrame { int (**x_3_2_1)(); float *x_3_2_2; unsigned int x_3_2_3; } x_6_1_3; bool x_6_1_4; struct NString { int (**x_5_2_1)(); unsigned int x_5_2_2; char *x_5_2_3; } x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; float x_6_1_8; bool x_6_1_9; bool x_6_1_10; } x6; struct NLocalCepNorm { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; struct NArray<NFrame> { int (**x_7_2_1)(); struct NFrame {} *x_7_2_2; unsigned int x_7_2_3; } x_7_1_7; struct NFrame { int (**x_8_2_1)(); float *x_8_2_2; unsigned int x_8_2_3; } x_7_1_8; float x_7_1_9; bool x_7_1_10; } x7; struct TSHMMDetector { int (**x_8_1_1)(); struct NDistribution {} *x_8_1_2; struct NDistribution {} *x_8_1_3; struct NPhoneHMMArray { int (**x_4_2_1)(); struct NPhoneHMM {} *x_4_2_2; unsigned int x_4_2_3; struct NStringHash<unsigned int> { int (**x_4_3_1)(); struct NHash<NMap<NString, unsigned int>::HashItem> { int (**x_2_4_1)(); struct NLinkedList<NMap<NString, unsigned int>::HashItem> {} *x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; } x_4_3_2; } x_4_2_4; } x_8_1_4; struct NFrameWindow { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; struct NFrame { int (**x_8_3_1)(); float *x_8_3_2; unsigned int x_8_3_3; } x_5_2_8; bool x_5_2_9; bool x_5_2_10; } x_8_1_5; struct NLRHMMTraceback { struct N2DArray<bool> { int (**x_1_3_1)(); struct NArray<bool> {} *x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; } x_8_1_6; struct NArray<float> { int (**x_7_2_1)(); float *x_7_2_2; unsigned int x_7_2_3; } x_8_1_7; struct NArray<float> { int (**x_8_2_1)(); float *x_8_2_2; unsigned int x_8_2_3; } x_8_1_8; struct NArray<unsigned int> { int (**x_9_2_1)(); unsigned int *x_9_2_2; unsigned int x_9_2_3; } x_8_1_9; unsigned int x_8_1_10; unsigned int x_8_1_11; unsigned int x_8_1_12; struct NFrame { int (**x_13_2_1)(); float *x_13_2_2; unsigned int x_13_2_3; } x_8_1_13; struct NArray<float> { int (**x_14_2_1)(); float *x_14_2_2; unsigned int x_14_2_3; } x_8_1_14; struct NArray<float> { int (**x_15_2_1)(); float *x_15_2_2; unsigned int x_15_2_3; } x_8_1_15; struct NArray<float> { int (**x_16_2_1)(); float *x_16_2_2; unsigned int x_16_2_3; } x_8_1_16; struct NArray<unsigned int> { int (**x_17_2_1)(); unsigned int *x_17_2_2; unsigned int x_17_2_3; } x_8_1_17; struct NArray<bool> { int (**x_18_2_1)(); bool *x_18_2_2; unsigned int x_18_2_3; } x_8_1_18; float x_8_1_19; unsigned int x_8_1_20; float x_8_1_21; unsigned int x_8_1_22; unsigned int x_8_1_23; unsigned int x_8_1_24; unsigned int x_8_1_25; bool x_8_1_26; bool x_8_1_27; bool x_8_1_28; bool x_8_1_29; bool x_8_1_30; } x8; struct TSHMMDetector { int (**x_9_1_1)(); struct NDistribution {} *x_9_1_2; struct NDistribution {} *x_9_1_3; struct NPhoneHMMArray { int (**x_4_2_1)(); struct NPhoneHMM {} *x_4_2_2; unsigned int x_4_2_3; struct NStringHash<unsigned int> { int (**x_4_3_1)(); struct NHash<NMap<NString, unsigned int>::HashItem> { int (**x_2_4_1)(); struct NLinkedList<NMap<NString, unsigned int>::HashItem> {} *x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; } x_4_3_2; } x_4_2_4; } x_9_1_4; struct NFrameWindow { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; struct NFrame { int (**x_8_3_1)(); float *x_8_3_2; unsigned int x_8_3_3; } x_5_2_8; bool x_5_2_9; bool x_5_2_10; } x_9_1_5; struct NLRHMMTraceback { struct N2DArray<bool> { int (**x_1_3_1)(); struct NArray<bool> {} *x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; } x_9_1_6; struct NArray<float> { int (**x_7_2_1)(); float *x_7_2_2; unsigned int x_7_2_3; } x_9_1_7; struct NArray<float> { int (**x_8_2_1)(); float *x_8_2_2; unsigned int x_8_2_3; } x_9_1_8; struct NArray<unsigned int> { int (**x_9_2_1)(); unsigned int *x_9_2_2; unsigned int x_9_2_3; } x_9_1_9; unsigned int x_9_1_10; unsigned int x_9_1_11; unsigned int x_9_1_12; struct NFrame { int (**x_13_2_1)(); float *x_13_2_2; unsigned int x_13_2_3; } x_9_1_13; struct NArray<float> { int (**x_14_2_1)(); float *x_14_2_2; unsigned int x_14_2_3; } x_9_1_14; struct NArray<float> { int (**x_15_2_1)(); float *x_15_2_2; unsigned int x_15_2_3; } x_9_1_15; struct NArray<float> { int (**x_16_2_1)(); float *x_16_2_2; unsigned int x_16_2_3; } x_9_1_16; struct NArray<unsigned int> { int (**x_17_2_1)(); unsigned int *x_17_2_2; unsigned int x_17_2_3; } x_9_1_17; struct NArray<bool> { int (**x_18_2_1)(); bool *x_18_2_2; unsigned int x_18_2_3; } x_9_1_18; float x_9_1_19; unsigned int x_9_1_20; float x_9_1_21; unsigned int x_9_1_22; unsigned int x_9_1_23; unsigned int x_9_1_24; unsigned int x_9_1_25; bool x_9_1_26; bool x_9_1_27; bool x_9_1_28; bool x_9_1_29; bool x_9_1_30; } x9; struct TSSupervectorScorer { int (**x_10_1_1)(); struct NDistribution {} *x_10_1_2; unsigned int x_10_1_3; struct NFrame { int (**x_4_2_1)(); float *x_4_2_2; unsigned int x_4_2_3; } x_10_1_4; struct NArray<float> { int (**x_5_2_1)(); float *x_5_2_2; unsigned int x_5_2_3; } x_10_1_5; bool x_10_1_6; } x10; struct TSSATScorer { int (**x_11_1_1)(); struct NDistribution {} *x_11_1_2; struct NSATImpostor { int (**x_3_2_1)(); struct NString { int (**x_2_3_1)(); unsigned int x_2_3_2; char *x_2_3_3; } x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; float *x_3_2_7; float *x_3_2_8; bool x_3_2_9; } x_11_1_3; struct NSATSpeaker { int (**x_4_2_1)(); struct NString { int (**x_2_3_1)(); unsigned int x_2_3_2; char *x_2_3_3; } x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; unsigned int x_4_2_7; float *x_4_2_8; float x_4_2_9; unsigned int x_4_2_10; bool x_4_2_11; bool x_4_2_12; bool x_4_2_13; bool x_4_2_14; bool x_4_2_15; struct NString { int (**x_16_3_1)(); unsigned int x_16_3_2; char *x_16_3_3; } x_4_2_16; struct NString { int (**x_17_3_1)(); unsigned int x_17_3_2; char *x_17_3_3; } x_4_2_17; } x_11_1_4; struct NFrame { int (**x_5_2_1)(); float *x_5_2_2; unsigned int x_5_2_3; } x_11_1_5; struct NArray<float> { int (**x_6_2_1)(); float *x_6_2_2; unsigned int x_6_2_3; } x_11_1_6; unsigned int x_11_1_7; unsigned int x_11_1_8; unsigned int x_11_1_9; unsigned int x_11_1_10; bool x_11_1_11; float x_11_1_12; unsigned int x_11_1_13; bool x_11_1_14; bool x_11_1_15; bool x_11_1_16; bool x_11_1_17; bool x_11_1_18; } x11; struct NRingDropBuffer { struct NArray<NFrame> { int (**x_1_2_1)(); struct NFrame {} *x_1_2_2; unsigned int x_1_2_3; } x_12_1_1; unsigned int x_12_1_2; unsigned int x_12_1_3; } x12; struct NFrame { int (**x_13_1_1)(); float *x_13_1_2; unsigned int x_13_1_3; } x13; struct NString { int (**x_14_1_1)(); unsigned int x_14_1_2; char *x_14_1_3; } x14; struct _ndresult { unsigned int x_15_1_1; unsigned int x_15_1_2; unsigned int x_15_1_3; float x_15_1_4; bool x_15_1_5; } x15; struct _ndsupervec { float *x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; struct _ndsupervec { float *x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; unsigned int x_17_1_4; unsigned int x_17_1_5; unsigned int x_17_1_6; } x17; struct NArray<float> { int (**x_18_1_1)(); float *x_18_1_2; unsigned int x_18_1_3; } x18; struct _ndsvscore { float x_19_1_1; } x19; struct NArray<unsigned int> { int (**x_20_1_1)(); unsigned int *x_20_1_2; unsigned int x_20_1_3; } x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; float x30; float x31; float x32; float x33; float x34; bool x35; bool x36; bool x37; bool x38; bool x39; bool x40; bool x41; struct NConfigSection { struct NString { int (**x_1_2_1)(); unsigned int x_1_2_2; char *x_1_2_3; } x_42_1_1; struct NMap<NString, NString> { int (**x_2_2_1)(); struct NHash<NMap<NString, NString>::HashItem> { int (**x_2_3_1)(); struct NLinkedList<NMap<NString, NString>::HashItem> {} *x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned int x_2_3_5; } x_2_2_2; } x_42_1_2; } x42; struct NFrame {} *x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; struct NArray<short> { int (**x_48_1_1)(); short *x_48_1_2; unsigned int x_48_1_3; } x48; } * _novDetect;
}

- (bool)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(bool)arg2;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (const char *)_getOptionValueFromConfigurationName:(id)arg1;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (const struct _ndsvscore { float x1; }*)analyzeSAT:(const float*)arg1 size:(unsigned int)arg2;
- (void)analyzeWavData:(const short*)arg1 length:(int)arg2;
- (void)dealloc;
- (void)deleteVectorIndex:(int)arg1;
- (const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)getAnalyzedResult;
- (bool)getDoSAT;
- (bool)getDoSupervectorSecondaryTest;
- (double)getExtraSamplesAtStart;
- (double)getLoggingThreshold;
- (id)getRecognizerConfig;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (int)getSATVectorCount;
- (const struct _ndsvscore { float x1; }*)getScoreSuperVector:(const float*)arg1 size:(unsigned int)arg2;
- (double)getSecondChanceThreshold;
- (const struct _ndsupervec { float *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)getSuperVectorWithEndPoint:(unsigned int)arg1;
- (double)getThresholdPresuperVector;
- (double)getThresholdSAT;
- (double)getTriggerThreshold;
- (id)getTriggerTokens;
- (bool)getUseRecognizer;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (bool)initializeSAT:(id)arg1;
- (void)reset;
- (void)resetBest;
- (void)updateSAT;

@end
