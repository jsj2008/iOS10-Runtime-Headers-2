/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseContentItem : MPModelObject {
    MPModelAlbum * _album;
    MPModelArtist * _artist;
    MPModelCurator * _curator;
    long long  _detailedItemType;
    unsigned long long  _itemType;
    MPModelPlaylist * _playlist;
    MPModelRadioStation * _radioStation;
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, retain) MPModelCurator *curator;
@property (nonatomic) long long detailedItemType;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelSong *song;

+ (id)__MusicStoreBrowseContentItemPropertyDetailedItemType__PROPERTY;
+ (id)__MusicStoreBrowseContentItemPropertyItemType__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipAlbum__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipArtist__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipCurator__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipPlaylist__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipRadioStation__PROPERTY;
+ (id)__MusicStoreBrowseContentItemRelationshipSong__PROPERTY;
+ (id)__album__KEY;
+ (id)__artist__KEY;
+ (id)__curator__KEY;
+ (id)__detailedItemType__KEY;
+ (id)__itemType__KEY;
+ (id)__playlist__KEY;
+ (id)__radioStation__KEY;
+ (id)__song__KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)curator;
- (id)descriptionWithType:(long long)arg1;
- (long long)detailedItemType;
- (id)innerObject;
- (unsigned long long)itemType;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (id)radioStation;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setDetailedItemType:(long long)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setSong:(id)arg1;
- (id)song;

@end
