/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETHeartbeatMessage : ETMessage {
    float  _beatsPerMinute;
    bool  _broken;
    SKUniform * _burTexUniform;
    int  _duration;
    float  _hapticLoopPeriod;
    SKSpriteNode * _heart;
    SKSpriteNode * _heartLines;
    SKNode * _heartNode;
    SKNode * _heartScale;
    SKShader * _heartShader;
    SKEmitterNode * _heartWisp;
    SKTexture * _heartbreakAtlas;
    double  _heartbreakTime;
    SKShader * _linesShader;
    SKUniform * _noiseTexUniform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedCenter;
    double  _rotation;
    float  _scale;
    SKUniform * _scaleUniform;
    SKUniform * _shaderTimeUniform;
    SKUniform * _speedUniform;
    SKUniform * _warpedTexAtlasUniform;
}

@property (nonatomic) float beatsPerMinute;
@property (getter=isBroken, nonatomic, readonly) bool broken;
@property (nonatomic) int duration;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedCenter;
@property (nonatomic) double rotation;
@property (nonatomic) float scale;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (void)_displayInScene:(id)arg1 useDuration:(bool)arg2;
- (void)_displayInScene:(id)arg1 useDuration:(bool)arg2 fastStart:(bool)arg3;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (id)archiveData;
- (float)beatsPerMinute;
- (void)breakHeart;
- (id)description;
- (void)displayInScene:(id)arg1;
- (int)duration;
- (id)initWithArchiveData:(id)arg1;
- (bool)isBroken;
- (double)messageDuration;
- (id)messageTypeAsString;
- (void)moveHeartNodeByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
- (struct CGPoint { double x1; double x2; })normalizedCenter;
- (void)playBeatWithDuration:(double)arg1;
- (double)rotation;
- (float)scale;
- (void)setBeatsPerMinute:(float)arg1;
- (void)setDuration:(int)arg1;
- (void)setMute:(bool)arg1;
- (void)setNormalizedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(float)arg1;
- (void)startHeartbeat:(id)arg1;
- (void)startHeartbeat:(id)arg1 fastStart:(bool)arg2;
- (void)stopPlaying;

@end
