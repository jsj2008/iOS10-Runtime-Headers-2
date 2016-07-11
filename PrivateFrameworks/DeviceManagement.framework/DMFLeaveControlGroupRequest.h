/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFLeaveControlGroupRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
    NSArray * _leaderIdentifiers;
}

@property (nonatomic, copy) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic, copy) NSArray *leaderIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)leaderIdentifiers;
- (void)setGroupIdentifier:(id)arg1;
- (void)setLeaderIdentifiers:(id)arg1;

@end
