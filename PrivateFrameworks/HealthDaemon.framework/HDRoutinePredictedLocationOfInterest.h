/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRoutinePredictedLocationOfInterest : NSObject {
    double  _confidence;
    HDRoutineLocationOfInterest * _locationOfInterest;
    long long  _modeOfTransportation;
    NSDate * _nextEntryTime;
    long long  _sourceType;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) HDRoutineLocationOfInterest *locationOfInterest;
@property (nonatomic) long long modeOfTransportation;
@property (nonatomic, retain) NSDate *nextEntryTime;
@property (nonatomic) long long sourceType;

- (void).cxx_destruct;
- (double)confidence;
- (id)initWithCodable:(id)arg1;
- (id)initWithPredictedLocationOfInterest:(id)arg1;
- (id)locationOfInterest;
- (long long)modeOfTransportation;
- (id)nextEntryTime;
- (void)setConfidence:(double)arg1;
- (void)setLocationOfInterest:(id)arg1;
- (void)setModeOfTransportation:(long long)arg1;
- (void)setNextEntryTime:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (long long)sourceType;

@end
