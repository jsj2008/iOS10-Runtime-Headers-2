/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterFace : NTKFace {
    unsigned long long  _character;
}

+ (id)_complicationSlotDescriptors;
+ (long long)_customEditModeForUniqueConfiguration;
+ (id)_customEditModes;
+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_defaultSelectedComplicationSlot;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;

- (id)_defaultName;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (id)_faceDescriptionKey;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_orderedComplicationSlots;
- (void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;

@end
