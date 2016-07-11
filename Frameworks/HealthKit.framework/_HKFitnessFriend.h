/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriend : NSObject <NSCopying, NSSecureCoding> {
    _HKFitnessFriendContact * _contact;
    NSDictionary * _friendAchievements;
    NSDictionary * _friendWorkouts;
    NSDictionary * _snapshots;
}

@property (nonatomic, readonly) bool canSeeMyActivityData;
@property (nonatomic, retain) _HKFitnessFriendContact *contact;
@property (nonatomic, readonly) NSDate *dateForLatestDataHidden;
@property (nonatomic, readonly) NSDate *dateForLatestDataHiddenFromMe;
@property (nonatomic, readonly) NSDate *dateForLatestDataShown;
@property (nonatomic, readonly) NSDate *dateForLatestDataShownToMe;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingInviteRequest;
@property (nonatomic, readonly) NSDate *dateForLatestRelationshipStart;
@property (nonatomic, retain) NSDictionary *friendAchievements;
@property (readonly) NSUUID *friendUUID;
@property (nonatomic, retain) NSDictionary *friendWorkouts;
@property (nonatomic, readonly) bool hasInviteRequestFromMe;
@property (nonatomic, readonly) bool isActivityDataCurrentlyVisibleToMe;
@property (nonatomic, readonly) bool isAwaitingInviteResponseFromMe;
@property (nonatomic, readonly) bool isFriendshipCurrentlyActive;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool sentInviteRequestToMe;
@property (nonatomic, retain) NSDictionary *snapshots;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_mostRecentSnapshot;
- (bool)canSeeMyActivityData;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDateComponents;
- (id)currentSnapshot;
- (id)dateForLatestDataHidden;
- (id)dateForLatestDataHiddenFromMe;
- (id)dateForLatestDataShown;
- (id)dateForLatestDataShownToMe;
- (id)dateForLatestOutgoingInviteRequest;
- (id)dateForLatestRelationshipStart;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)friendAchievements;
- (id)friendUUID;
- (id)friendWorkouts;
- (bool)hasInviteRequestFromMe;
- (id)init;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isActivityDataCurrentlyVisibleToMe;
- (bool)isActivityDataVisibleToMeForDate:(id)arg1;
- (bool)isAwaitingInviteResponseFromMe;
- (bool)isFriendshipCurrentlyActive;
- (bool)isMuted;
- (bool)sentInviteRequestToMe;
- (void)setContact:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendWorkouts:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (id)snapshots;

// Image: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends

- (id)detailedSharingDurationString;
- (id)fullName;
- (id)invitedDurationString;
- (bool)isMe;
- (id)name;
- (id)simpleHiddenFromString;
- (id)simpleSharingDurationString;
- (id)snapshotForIndex:(long long)arg1;

@end
