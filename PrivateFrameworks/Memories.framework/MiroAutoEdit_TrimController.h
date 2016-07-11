/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEdit_TrimController : NSObject {
    <MiroAutoEditDelegate> * _delegate;
    int  _duration;
    bool  _requestedDurationTrumpsVoiceDuration;
    bool  _unboundedDurations;
    bool  _useAlternateDurations;
}

@property (nonatomic, readonly) MiroBlueprint *blueprint;
@property (nonatomic) <MiroAutoEditDelegate> *delegate;
@property (nonatomic) int duration;
@property (nonatomic, readonly) MiroAutoEditLogger *logger;
@property (nonatomic, readonly) MiroMemory *memory;
@property (nonatomic, readonly) Project *project;
@property (nonatomic) bool requestedDurationTrumpsVoiceDuration;
@property (nonatomic) bool unboundedDurations;
@property (nonatomic) bool useAlternateDurations;

- (void).cxx_destruct;
- (void)_clipClip:(id)arg1;
- (void)_clipClip:(id)arg1 allowMoreThanMax:(bool)arg2;
- (void)_fitToDuration;
- (id)_rangesForClipIncorporatingUserTrim:(id)arg1;
- (void)_saveFreezeBits;
- (id)blueprint;
- (bool)clipIsTitleCard:(id)arg1;
- (id)delegate;
- (int)duration;
- (int)durationOfUserTrimForClip:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (int)lastClipInPoint;
- (void)layoutProject;
- (id)logger;
- (int)maximumDurationForClip:(id)arg1;
- (id)memory;
- (int)minimumDurationForClip:(id)arg1;
- (id)project;
- (bool)requestedDurationTrumpsVoiceDuration;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2 allowMoreThanMax:(bool)arg3;
- (void)setRequestedDurationTrumpsVoiceDuration:(bool)arg1;
- (void)setUnboundedDurations:(bool)arg1;
- (void)setUseAlternateDurations:(bool)arg1;
- (id)sortedRanges:(id)arg1;
- (bool)unboundedDurations;
- (bool)useAlternateDurations;

@end
