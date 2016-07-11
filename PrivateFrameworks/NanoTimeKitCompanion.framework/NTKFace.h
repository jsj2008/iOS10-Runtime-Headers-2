/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFace : NSObject <NSCopying, NSSecureCoding, NTKEditModeMapping, NTKRestrictedApplicationsChangeObserver> {
    bool  _beingEdited;
    long long  _complicationPickerStyle;
    NSDictionary * _complicationSlotDescriptors;
    NTKFaceConfiguration * _configuration;
    bool  _configurationChangedWhileSuppressingNotifications;
    bool  _editOptionsPrepared;
    long long  _faceStyle;
    bool  _isLibraryFace;
    long long  _mostRecentEditMode;
    NSHashTable * _observers;
    NSString * _resourceDirectory;
    bool  _resourceDirectoryIsHardLink;
    NSMutableDictionary * _selectedSlotsByEditMode;
    bool  _suppressingConfigurationChangeNotifications;
}

@property (nonatomic) bool beingEdited;
@property (nonatomic, readonly) long long complicationPickerStyle;
@property (nonatomic, readonly) NTKFaceConfiguration *configuration;
@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editModeForCustomEditViewController;
@property (nonatomic, readonly) NSArray *editModes;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly) long long faceStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLibraryFace;
@property (nonatomic) long long mostRecentEditMode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSString *resourceDirectory;
@property (getter=isSingular, nonatomic, readonly) bool singular;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unadornedSnapshotKey;
@property (nonatomic, readonly) bool wantsUnadornedSnapshot;

+ (id)PPTBlankFace;
+ (bool)_complication:(id)arg1 isValidForSlot:(id)arg2;
+ (id)_complicationSlotDescriptors;
+ (long long)_customEditModeForUniqueConfiguration;
+ (bool)_customEditModeIsColor:(long long)arg1;
+ (bool)_customEditModeIsPosition:(long long)arg1;
+ (bool)_customEditModeIsShowSeconds:(long long)arg1;
+ (id)_customEditModes;
+ (id)_dateComplicationSlot;
+ (unsigned long long)_dateComplicationSlotSupportedStyles;
+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_defaultSelectedComplicationSlot;
+ (id)_defaultSelectedSlotForCustomEditMode:(long long)arg1;
+ (Class)_faceClassForStyle:(long long)arg1;
+ (id)_linkedResourceRootDirectory;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;
+ (id)_monogramComplicationSlot;
+ (id)_sampleFaceDifferentFromFaces:(id)arg1;
+ (id)_slotsForCustomEditMode:(long long)arg1;
+ (bool)customEditModeIsColor:(long long)arg1;
+ (bool)customEditModeIsPosition:(long long)arg1;
+ (bool)customEditModeIsShowSeconds:(long long)arg1;
+ (id)customEditModes;
+ (id)dateSlot;
+ (id)defaultFaceOfStyle:(long long)arg1;
+ (id)faceWithJSONObjectRepresentation:(id)arg1;
+ (id)fixedComplicationSlots;
+ (id)localizedNameForCustomEditMode:(long long)arg1;
+ (unsigned long long)maximumRemoteComplicationsOnAnyFace;
+ (id)monogramSlot;
+ (id)sampleFaceOfStyle:(long long)arg1 differentFromFaces:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_allowedComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2;
- (bool)_allowsEditing;
- (bool)_applyConfiguration:(id)arg1 allowFailure:(bool)arg2;
- (void)_cleanupEditOptions;
- (bool)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2;
- (id)_configurationFromOldEncodingWithCoder:(id)arg1;
- (id)_defaultComplicationOfType:(unsigned long long)arg1 forSlot:(id)arg2;
- (id)_defaultName;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (id)_faceDescription;
- (id)_faceDescriptionForLibrary;
- (id)_faceDescriptionKey;
- (id)_faceDescriptionKeyForLibrary;
- (bool)_hasCustomSwitcherSelectionAction;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_migratedComplicationSlotForSlot:(id)arg1;
- (void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4;
- (void)_notifyObserversFaceConfigurationDidChange;
- (void)_notifyObserversOptionsDidChangeForEditMode:(long long)arg1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_option:(id)arg1 isValidForCustomEditMode:(long long)arg2 slot:(id)arg3;
- (bool)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_orderedComplicationSlots;
- (void)_performCustomSwitcherSelectionAction;
- (void)_prepareEditOptions;
- (void)_prepareForDeletion;
- (id)_resourceDirectorySnapshotKey;
- (void)_selectDefaultSlots;
- (void)_setResourceDirectory:(id)arg1;
- (bool)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)_sortedComplicationSlots;
- (void)_updateComplicationTombstones;
- (bool)_verifyCompatibilityOfConfiguration:(id)arg1;
- (bool)_wantsUnadornedSnapshot;
- (void)addObserver:(id)arg1;
- (unsigned long long)allowedComplicationTypesForSlot:(id)arg1;
- (id)allowedComplicationsForSlot:(id)arg1;
- (id)allowedComplicationsForSlot:(id)arg1 includingComplication:(id)arg2;
- (bool)applyConfiguration:(id)arg1;
- (void)applyDefaultComplicationConfiguration;
- (void)applyDefaultConfiguration;
- (void)applyUniqueConfigurationWithExistingFaces:(id)arg1;
- (bool)beingEdited;
- (void)cleanupEditOptions;
- (void)clearComplicationTombstones;
- (long long)complicationFamilyForSlot:(id)arg1;
- (id)complicationForSlot:(id)arg1;
- (long long)complicationPickerStyle;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dailySnapshotKey;
- (void)dealloc;
- (id)description;
- (void)didMoveToLibrary;
- (id)displayNameForComplicationSlot:(id)arg1;
- (long long)editModeForCustomEditViewController;
- (id)editModes;
- (Class)editOptionClassFromEditMode:(long long)arg1;
- (id)editOptionsForCustomEditModes;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateComplicationSlotsWithBlock:(id /* block */)arg1;
- (void)enumerateCustomEditModesWithBlock:(id /* block */)arg1;
- (void)enumerateSlotsForCustomEditMode:(long long)arg1 withBlock:(id /* block */)arg2;
- (id)faceDescription;
- (id)faceDescriptionForLibrary;
- (long long)faceStyle;
- (bool)hasCustomSwitcherSelectionAction;
- (unsigned long long)indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isEquivalentToFace:(id)arg1;
- (bool)isLibraryFace;
- (bool)isSingular;
- (long long)mostRecentEditMode;
- (id)name;
- (id)nameOfSelectedOptionForCustomEditMode:(long long)arg1;
- (id)namesOfSelectedOptionsForCustomEditModes;
- (unsigned long long)numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)orderedComplicationSlots;
- (void)performCustomSwitcherSelectionAction;
- (void)prepareEditOptions;
- (void)prepareForDeletion;
- (void)removeObserver:(id)arg1;
- (id)resourceDirectory;
- (void)restrictedApplicationsDidChange;
- (void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)selectedOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)selectedOptionsForCustomEditModes;
- (id)selectedSlotForEditMode:(long long)arg1;
- (void)setBeingEdited:(bool)arg1;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setIsLibraryFace:(bool)arg1;
- (void)setMostRecentEditMode:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setResourceDirectory:(id)arg1;
- (void)setResourceDirectoryByHardLinkingDirectory:(id)arg1;
- (void)setSelectedSlot:(id)arg1 forEditMode:(long long)arg2;
- (id)slotsForCustomEditMode:(long long)arg1;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)unadornedSnapshotKey;
- (bool)wantsUnadornedSnapshot;

@end
