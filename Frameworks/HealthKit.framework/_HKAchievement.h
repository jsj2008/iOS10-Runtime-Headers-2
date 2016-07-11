/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievement : NSObject <HDCoding, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _alerted;
    NSDate * _completedDate;
    NSString * _definitionIdentifier;
    NSNumber * _value;
    bool  _viewed;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (getter=isAlerted, nonatomic) bool alerted;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (getter=isViewed, nonatomic) bool viewed;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_achievementWithUUID:(id)arg1 definitionIdentifier:(id)arg2 completedDate:(id)arg3 value:(id)arg4 extraData:(id)arg5 alerted:(bool)arg6;
+ (id)_allAchievementTypeNames;
+ (Class)_classForDefinitionIdentifier:(id)arg1;
+ (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2;
+ (id)_nextUUID;
+ (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 context:(id)arg3;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
+ (void)setOverridenUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_achievementDefinition;
- (id)_buildKeyWithPrefix:(id)arg1 definitionIdentifier:(id)arg2 includingUserName:(bool)arg3 isWheelchairUser:(bool)arg4;
- (void)_decodeExtraDataWithCoder:(id)arg1;
- (void)_encodeExtraDataWithCoder:(id)arg1;
- (void)_getLocalizedStringTable:(id*)arg1 bundle:(id*)arg2 includesDefinitionIdentifier:(bool*)arg3;
- (bool)_hasExtraData;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3;
- (bool)_isWheelchairUser;
- (id)_localizedStringWithContext:(id)arg1;
- (id)_pluralizeLocalizedString:(id)arg1 completeNumberOfTimes:(long long)arg2;
- (id)_replacePlaceholdersInString:(id)arg1 withContext:(id)arg2;
- (bool)_validateConfiguration;
- (id)completedDate;
- (id)definitionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAlerted;
- (bool)isEqual:(id)arg1;
- (bool)isViewed;
- (id)localizedDescription;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedDescriptionForNewUnearnedAlert;
- (id)localizedDescriptionForNewUnearnedAlertBadgeBack;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedTitle;
- (id)localizedTitleWithIsWheelchairUser:(bool)arg1;
- (void)setAlerted:(bool)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setExtraData:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setViewed:(bool)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (id)_fiui_badgeAssetNameSuffix;
- (id)_fiui_badgeContainerPath;
- (id)_fiui_pathForAssetNamed:(id)arg1 ofType:(id)arg2;
- (id)fiui_badgeModelFilename;
- (id)fiui_badgePlistPath;
- (id)fiui_badgeTexturePath;
- (id)fiui_compressedBadgeModelPath;
- (id)fiui_imageForSizeClass:(long long)arg1;
- (id)fiui_stickerBundle;
- (id)fiui_stickerURLs;
- (id)fiui_uniqueBadgeModelIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (bool)isEquivalentToAchievement:(id)arg1 inCalendar:(id)arg2 requireSameDateToCalendarUnit:(unsigned long long)arg3 sameValue:(bool)arg4;

@end
