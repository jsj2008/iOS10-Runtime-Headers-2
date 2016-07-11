/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext> {
    TSDGLState * _GLState;
    KNAnimatedBuild * _animatedBuild;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRectOnCanvas;
    unsigned long long  _direction;
    double  _duration;
    bool  _isMotionBlurred;
    bool  _isPreview;
    bool  _isWarmingUp;
    NSArray * _magicMoveMatches;
    double  _percent;
    KNAnimationRandomGenerator * _randomGenerator;
    long long  _rendererType;
    TSDRep * _rep;
    NSArray * _textures;
    NSDictionary * _transitionAttributes;
}

@property (nonatomic, retain) TSDGLState *GLState;
@property (nonatomic) KNAnimatedBuild *animatedBuild;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRectOnCanvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBuild;
@property (nonatomic, readonly) bool isFrameRenderer;
@property (nonatomic, readonly) bool isMagicMove;
@property (nonatomic) bool isMotionBlurred;
@property (nonatomic) bool isPreview;
@property (nonatomic, readonly) bool isTransition;
@property (nonatomic) bool isWarmingUp;
@property (nonatomic) NSArray *magicMoveMatches;
@property (nonatomic) double percent;
@property (nonatomic, readonly) KNAnimationRandomGenerator *randomGenerator;
@property (nonatomic) long long rendererType;
@property (nonatomic) TSDRep *rep;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *textures;
@property (nonatomic) NSDictionary *transitionAttributes;

- (id)GLState;
- (id)animatedBuild;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectOnCanvas;
- (void)dealloc;
- (id)description;
- (unsigned long long)direction;
- (double)duration;
- (bool)isBuild;
- (bool)isFrameRenderer;
- (bool)isMagicMove;
- (bool)isMotionBlurred;
- (bool)isPreview;
- (bool)isTransition;
- (bool)isWarmingUp;
- (id)magicMoveMatches;
- (double)percent;
- (id)randomGenerator;
- (long long)rendererType;
- (id)rep;
- (void)setAnimatedBuild:(id)arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundingRectOnCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setGLState:(id)arg1;
- (void)setIsMotionBlurred:(bool)arg1;
- (void)setIsPreview:(bool)arg1;
- (void)setIsWarmingUp:(bool)arg1;
- (void)setMagicMoveMatches:(id)arg1;
- (void)setPercent:(double)arg1;
- (void)setRendererType:(long long)arg1;
- (void)setRep:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTransitionAttributes:(id)arg1;
- (id)textures;
- (id)transitionAttributes;

@end
