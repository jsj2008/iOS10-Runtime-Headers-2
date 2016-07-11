/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNDebugInstructionContents : NSObject <MNInstructionContents> {
    MNSpokenInstructionContents * _contents;
}

@property (nonatomic, retain) NSArray *branchNames;
@property (nonatomic) long long context;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic, retain) NSString *exitNumber;
@property (nonatomic, readonly) bool hasServerContent;
@property (nonatomic, retain) NSString *intersectionName;
@property (nonatomic) int junctionAngle;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) bool suppressFallback;
@property (nonatomic) bool suppressNames;
@property (nonatomic) bool toFreeway;
@property (nonatomic, retain) NSArray *towardNames;
@property (nonatomic) int transportType;

- (void).cxx_destruct;
- (id)branchNames;
- (long long)context;
- (id)destinationName;
- (id)exitNumber;
- (bool)hasServerContent;
- (id)init;
- (id)instruction;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)intersectionName;
- (int)junctionAngle;
- (int)maneuverType;
- (id)roadName;
- (void)setBranchNames:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setIntersectionName:(id)arg1;
- (void)setJunctionAngle:(int)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setRoadName:(id)arg1;
- (void)setSuppressFallback:(bool)arg1;
- (void)setSuppressNames:(bool)arg1;
- (void)setToFreeway:(bool)arg1;
- (void)setTowardNames:(id)arg1;
- (void)setTransportType:(int)arg1;
- (id)stringForDistance:(double)arg1;
- (bool)suppressFallback;
- (bool)suppressNames;
- (bool)toFreeway;
- (id)towardNames;
- (int)transportType;

@end
