/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUserPhotoFace : NTKBasePhotoFace <NTKSafeLocketReaderDelegate> {
    bool  _canEdit;
    NSString * _photoIdentifier;
    NTKSafeLocketReader * _reader;
}

@property (nonatomic) bool canEdit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *photoIdentifier;
@property (nonatomic, retain) NTKSafeLocketReader *reader;
@property (readonly) Class superclass;

+ (id)_customEditModes;
+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;
+ (id)_photoIdentifierFromResourceDirectory:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (void)_updateCanEdit;
- (bool)canEdit;
- (long long)editModeForCustomEditViewController;
- (void)firstUnlockDidOccur;
- (id)init;
- (id)photoIdentifier;
- (id)reader;
- (void)setCanEdit:(bool)arg1;
- (void)setPhotoIdentifier:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setResourceDirectory:(id)arg1;

@end
