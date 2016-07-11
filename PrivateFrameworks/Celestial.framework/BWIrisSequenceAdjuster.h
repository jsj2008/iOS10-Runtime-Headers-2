/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisSequenceAdjuster : NSObject {
    bool  _adjustVideoTimesUntilReset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bufferingTime;
    NSMutableArray * _discontinuities;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstIrisAudioOffset;
    NSMutableArray * _interleavingQueues;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieOriginalEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieOriginalStartTime;
    unsigned int * _mediaTypes;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextAdjustedVideoTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    NSMutableArray * _timeSkews;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieOriginalEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieOriginalStartTime;

+ (void)initialize;

- (void)_adjustTimesInAudioInterleavingQueues;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_adjustedTimeForAudioBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_adjustedTimeForMetadataBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_adjustedTimeForVideoBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_audioOffsetForOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 adjustedStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_getPreviousTimeSkewOut:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 andNextTimeSkewOut:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (long long)_indexOfTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_originalDurationForVideoBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)adjustMovieInfoTimes:(id)arg1;
- (void)adjustVideoTimesUntilReset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimeForStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffsetForOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })bufferingTime;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forMediaTypeWithIndex:(long long)arg2;
- (void)enqueueVideoBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithMediaTypes:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieOriginalEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieOriginalStartTime;
- (void)reset;
- (void)setBufferingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieOriginalEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieOriginalStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTargetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameDuration;

@end
