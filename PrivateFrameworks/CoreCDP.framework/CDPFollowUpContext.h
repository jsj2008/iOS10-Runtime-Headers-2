/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    NSString * _followUpType;
    bool  _shouldNotify;
}

@property (nonatomic, copy) NSString *followUpType;
@property (nonatomic) bool shouldNotify;

+ (id)contextForOfflinePasscodeChange;
+ (id)contextForStateRepair;
+ (id)contextWithType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpType;
- (id)initWithCoder:(id)arg1;
- (void)setFollowUpType:(id)arg1;
- (void)setShouldNotify:(bool)arg1;
- (bool)shouldNotify;

@end
