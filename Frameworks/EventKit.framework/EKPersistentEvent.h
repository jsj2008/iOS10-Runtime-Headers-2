/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent : EKPersistentCalendarItem {
    struct { 
        int years; 
        int months; 
        int days; 
        int hours; 
        int minutes; 
        double seconds; 
    }  _cachedDurationUnits;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) bool allowsParticipationStatusModifications;
@property (nonatomic) long long availability;
@property (nonatomic, readonly) int birthdayID;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } durationUnits;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic) bool firedTTL;
@property (getter=isFloating, nonatomic, readonly) bool floating;
@property (getter=isInvitation, nonatomic, readonly) bool invitation;
@property (nonatomic, readonly) unsigned int invitationChangedProperties;
@property (nonatomic) unsigned long long invitationStatus;
@property (nonatomic) long long locationPredictionState;
@property (getter=isMeeting, nonatomic, readonly) bool meeting;
@property (nonatomic) unsigned int modifiedProperties;
@property (nonatomic) bool needsOccurrenceCacheUpdate;
@property (nonatomic, copy) NSDate *originalStartDate;
@property (nonatomic) long long participationStatus;
@property (nonatomic, readonly) long long pendingParticipationStatus;
@property (nonatomic) long long privacyLevel;
@property (nonatomic, copy) NSDate *proposedStartDate;
@property (nonatomic, copy) NSString *responseComment;
@property (nonatomic) long long status;
@property (nonatomic, retain) EKPersistentSuggestedEventInfo *suggestedEventInfo;
@property (nonatomic) long long travelAdvisoryBehavior;
@property (nonatomic, copy) NSNumber *travelTime;

+ (id)defaultPropertiesToLoad;
+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (id)relations;

- (id)URL;
- (void)_adjustForNewCalendar;
- (bool)_areDurationUnitsCached;
- (bool)_hasExternalIDOrDeliverySource;
- (void)_invalidateCachedDurationUnits;
- (void)_updateSelfFromDetachedEventIfNeededForDelete;
- (id)actions;
- (void)addAction:(id)arg1;
- (bool)allowsParticipationStatusModifications;
- (long long)availability;
- (int)birthdayID;
- (long long)birthdayId;
- (bool)canForward;
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;
- (id)committedStartDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteFromOccurrenceDateOnward:(id)arg1;
- (id)description;
- (bool)disallowProposeNewTime;
- (double)duration;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })durationUnits;
- (id)endDate;
- (int)entityType;
- (id)eventIdentifier;
- (void)filterExceptionDates;
- (bool)firedTTL;
- (bool)hasValidEventAction;
- (id)initCommon;
- (unsigned int)invitationChangedProperties;
- (unsigned long long)invitationStatus;
- (bool)isEditable;
- (bool)isFloating;
- (bool)isInvitation;
- (bool)isMeeting;
- (long long)locationPredictionState;
- (unsigned int)modifiedProperties;
- (bool)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (long long)participationStatus;
- (long long)pendingParticipationStatus;
- (void)primitiveValueChangedForKey:(id)arg1;
- (long long)privacyLevel;
- (id)proposedStartDate;
- (bool)refresh;
- (void)removeAction:(id)arg1;
- (id)responseComment;
- (bool)responseMustApplyToAll;
- (void)setActions:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFiredTTL:(bool)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setLocationPredictionState:(long long)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(bool)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setParticipationStatus:(long long)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSuggestedEventInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (void)setTravelTime:(id)arg1;
- (void)setURL:(id)arg1;
- (long long)status;
- (id)suggestedEventInfo;
- (long long)travelAdvisoryBehavior;
- (id)travelTime;
- (bool)validate:(id*)arg1;

@end
