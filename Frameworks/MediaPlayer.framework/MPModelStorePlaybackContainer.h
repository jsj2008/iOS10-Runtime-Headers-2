/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackContainer : MPModelObject <MPModelPlayEventProviding> {
    MPModelAlbum * _album;
    unsigned long long  _containerType;
    MPModelPlaylist * _playlist;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic) unsigned long long containerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (readonly) Class superclass;

+ (id)__MPModelPropertyStorePlaybackContainerContainerType__PROPERTY;
+ (id)__MPModelRelationshipStorePlaybackContainerAlbum__PROPERTY;
+ (id)__MPModelRelationshipStorePlaybackContainerPlaylist__PROPERTY;
+ (id)__album__KEY;
+ (id)__containerType__KEY;
+ (id)__playlist__KEY;
+ (id)playEventRequestedProperties;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;

- (void).cxx_destruct;
- (id)album;
- (unsigned long long)containerType;
- (id)descriptionWithType:(long long)arg1;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)playEvent;
- (id)playlist;
- (void)setAlbum:(id)arg1;
- (void)setContainerType:(unsigned long long)arg1;
- (void)setPlaylist:(id)arg1;

@end
