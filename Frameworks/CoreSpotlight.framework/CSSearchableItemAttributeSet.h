/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItemAttributeSet : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attributes;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _codedAttributes;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _codedCustomAttributes;
    CSDecoder * _contentDecoder;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _contentObj;
    NSMutableDictionary * _customAttributes;
    CSDecoder * _decoder;
    bool  _hasCodedCustomAttributes;
    NSMutableDictionary * _mutableAttributes;
    long long  _searchableItemFlags;
}

@property (readonly) NSData *HTMLContentDataNoCopy;
@property (copy) NSString *accountType;
@property (copy) NSString *adamID;
@property (copy) NSString *albumPersistentID;
@property (copy) NSString *applicationName;
@property (readonly) NSDictionary *attributes;
@property (copy) NSString *bundleID;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } codedAttributes;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } codedCustomAttributes;
@property (nonatomic, readonly) CSDecoder *contentDecoder;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } contentObj;
@property (readonly) NSString *contentSnippet;
@property (readonly) NSMutableDictionary *customAttributes;
@property (nonatomic, readonly) CSDecoder *decoder;
@property (retain) NSNumber *documentIdentifier;
@property (getter=isExistingThread, retain) NSNumber *existingThread;
@property (retain) NSDate *expirationDate;
@property (retain) NSNumber *extendedContentRating;
@property (retain) NSNumber *fileIdentifier;
@property (copy) NSString *filename;
@property (nonatomic, readonly) bool hasCodedCustomAttributes;
@property (nonatomic, copy) NSString *ic_dataSourceIdentifier;
@property (nonatomic, copy) NSString *ic_managedObjectIDURI;
@property (copy) NSArray *mailAttachmentKinds;
@property (copy) NSArray *mailAttachmentNames;
@property (copy) NSArray *mailAttachmentTypes;
@property (copy) NSString *mailCategory;
@property (copy) NSDate *mailDateLastViewed;
@property (copy) NSDate *mailDateReceived;
@property (copy) NSNumber *mailFlagColor;
@property (copy) NSNumber *mailFlagged;
@property (copy) NSArray *mailGMailLabels;
@property (copy) NSString *mailMessageID;
@property (copy) NSNumber *mailPriority;
@property (copy) NSNumber *mailRead;
@property (copy) NSNumber *mailRepliedTo;
@property (readonly) NSMutableDictionary *mutableAttributes;
@property (retain) NSNumber *parentFileIdentifier;
@property (getter=isPartiallyDownloaded, retain) NSNumber *partiallyDownloaded;
@property (copy) NSString *protectionClass;
@property (readonly) NSArray *queryResultMatchedFields;
@property (copy) NSString *queryResultRelevance;
@property (copy) NSString *relatedAppBundleIdentifier;
@property long long searchableItemFlags;
@property (copy) NSString *subtitle;
@property (readonly) NSString *textContentNoCopy;
@property (copy) NSString *textSelected;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *userActivityType;
@property (copy) NSArray *userTags;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (id)_allKeys;
+ (id)_requiredAttributesForContentType:(id)arg1;
+ (id)_sharedAttributeKeySet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EXIFGPSVersion;
- (id)EXIFVersion;
- (id)GPSAreaInformation;
- (id)GPSDOP;
- (id)GPSDateStamp;
- (id)GPSDestBearing;
- (id)GPSDestDistance;
- (id)GPSDestLatitude;
- (id)GPSDestLongitude;
- (id)GPSDifferental;
- (id)GPSMapDatum;
- (id)GPSMeasureMode;
- (id)GPSProcessingMethod;
- (id)GPSStatus;
- (id)GPSTrack;
- (id)HTMLContentData;
- (id)HTMLContentDataNoCopy;
- (id)ISOSpeed;
- (id)URL;
- (id)_getNonNullValueForKey:(id)arg1;
- (void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2;
- (void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2 copy:(bool)arg3;
- (void)_updateDocumentInfoForContentURL:(id)arg1;
- (id)accountHandles;
- (id)accountIdentifier;
- (id)accountType;
- (id)acquisitionMake;
- (id)acquisitionModel;
- (id)adamID;
- (void)addAttributesFromAttributeSet:(id)arg1;
- (void)addAttributesFromDictionary:(id)arg1;
- (id)addedDate;
- (id)additionalRecipients;
- (id)album;
- (id)albumPersistentID;
- (id)allDay;
- (id)alternateNames;
- (id)altitude;
- (id)aperture;
- (id)appleLoopDescriptors;
- (id)appleLoopsKeyFilterType;
- (id)appleLoopsLoopMode;
- (id)appleLoopsRootKey;
- (id)applicationCategories;
- (id)applicationName;
- (id)artist;
- (id)attachmentNames;
- (id)attachmentPaths;
- (id)attachmentTypes;
- (id)attributeDictionary;
- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (id)audiences;
- (id)audioBitRate;
- (id)audioChannelCount;
- (id)audioEncodingApplication;
- (id)audioSampleRate;
- (id)audioTrackNumber;
- (id)authorAddresses;
- (id)authorEmailAddresses;
- (id)authorNames;
- (id)authors;
- (id)bitsPerSample;
- (id)bundleID;
- (id)bundleIdentifier;
- (id)calendarHolidayIdentifier;
- (id)cameraOwner;
- (id)city;
- (id)codecs;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })codedAttributes;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })codedCustomAttributes;
- (id)colorSpace;
- (id)comment;
- (id)completionDate;
- (id)composer;
- (id)contactKeywords;
- (id)containerDisplayName;
- (id)containerIdentifier;
- (id)containerOrder;
- (id)containerTitle;
- (id)contentCreationDate;
- (id)contentDecoder;
- (id)contentDescription;
- (id)contentModificationDate;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })contentObj;
- (id)contentRating;
- (id)contentSnippet;
- (id)contentSources;
- (id)contentType;
- (id)contentTypeTree;
- (id)contentURL;
- (id)contributors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (id)country;
- (id)coverage;
- (id)creator;
- (id)customAttributeDictionary;
- (id)customAttributes;
- (id)debugDescription;
- (id)decoder;
- (id)deliveryType;
- (id)description;
- (id)director;
- (id)displayName;
- (id)documentIdentifier;
- (id)domainIdentifier;
- (id)downloadedDate;
- (id)dueDate;
- (id)duration;
- (id)editors;
- (id)emailAddresses;
- (id)emailHeaders;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1 includeText:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingApplications;
- (id)endDate;
- (id)executableArchitectures;
- (id)executablePlatform;
- (id)expirationDate;
- (id)exposureMode;
- (id)exposureProgram;
- (id)exposureTime;
- (id)exposureTimeString;
- (id)extendedContentRating;
- (id)fNumber;
- (id)fileIdentifier;
- (id)fileSize;
- (id)filename;
- (id)finderComment;
- (id)focalLength;
- (id)fontNames;
- (id)fullyFormattedAddress;
- (id)genre;
- (id)hasAlphaChannel;
- (bool)hasCodedCustomAttributes;
- (unsigned long long)hash;
- (id)headline;
- (id)hiddenAdditionalRecipients;
- (id)identifier;
- (id)imageDirection;
- (id)importantDates;
- (id)information;
- (id)init;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecoder:(id)arg1 obj:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg2;
- (id)initWithItemContentType:(id)arg1;
- (id)initWithSerializedAttributes:(id)arg1;
- (id)instantMessageAddresses;
- (id)instructions;
- (id)isApplicationManaged;
- (bool)isEqual:(id)arg1;
- (id)isExistingThread;
- (id)isFlashOn;
- (id)isFocalLength35mm;
- (id)isGeneralMIDISequence;
- (id)isLikelyJunk;
- (id)isLocal;
- (id)isPartiallyDownloaded;
- (id)isRedEyeOn;
- (id)isStreamable;
- (bool)isValidAttributeSet;
- (id)keySignature;
- (id)keywords;
- (id)kind;
- (id)languages;
- (id)lastUsedDate;
- (id)latitude;
- (id)layerNames;
- (id)lensModel;
- (id)longitude;
- (id)lyricist;
- (id)mailAttachmentKinds;
- (id)mailAttachmentNames;
- (id)mailAttachmentTypes;
- (id)mailCategory;
- (id)mailDateLastViewed;
- (id)mailDateReceived;
- (id)mailFlagColor;
- (id)mailFlagged;
- (id)mailGMailLabels;
- (id)mailMessageID;
- (id)mailPriority;
- (id)mailRead;
- (id)mailRepliedTo;
- (id)mailboxIdentifiers;
- (id)maxAperture;
- (id)mediaTypes;
- (id)metadataModificationDate;
- (id)meteringMode;
- (id)musicalGenre;
- (id)musicalInstrumentCategory;
- (id)musicalInstrumentName;
- (id)mutableAttributes;
- (id)namedLocation;
- (id)organizations;
- (id)orientation;
- (id)originalFormat;
- (id)originalSource;
- (id)pageCount;
- (id)pageHeight;
- (id)pageWidth;
- (id)parentFileIdentifier;
- (id)participants;
- (id)path;
- (id)performers;
- (id)phoneNumbers;
- (id)pixelCount;
- (id)pixelHeight;
- (id)pixelWidth;
- (id)playCount;
- (id)postalCode;
- (id)primaryRecipients;
- (id)producer;
- (id)profileName;
- (id)projects;
- (id)protectionClass;
- (id)publishers;
- (id)queryResultMatchedFields;
- (id)queryResultRelevance;
- (id)rating;
- (id)ratingDescription;
- (id)recipientAddresses;
- (id)recipientEmailAddresses;
- (id)recipientNames;
- (id)recordingDate;
- (id)relatedAppBundleIdentifier;
- (id)relatedUniqueIdentifier;
- (id)requiredAttributes;
- (id)resolutionHeightDPI;
- (id)resolutionWidthDPI;
- (id)rights;
- (id)role;
- (long long)searchableItemFlags;
- (id)securityMethod;
- (id)serializedAttributes;
- (void)setAccountHandles:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setAcquisitionMake:(id)arg1;
- (void)setAcquisitionModel:(id)arg1;
- (void)setAdamID:(id)arg1;
- (void)setAddedDate:(id)arg1;
- (void)setAdditionalRecipients:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setAlbumPersistentID:(id)arg1;
- (void)setAllDay:(id)arg1;
- (void)setAlternateNames:(id)arg1;
- (void)setAltitude:(id)arg1;
- (void)setAperture:(id)arg1;
- (void)setAppleLoopDescriptors:(id)arg1;
- (void)setAppleLoopsKeyFilterType:(id)arg1;
- (void)setAppleLoopsLoopMode:(id)arg1;
- (void)setAppleLoopsRootKey:(id)arg1;
- (void)setApplicationCategories:(id)arg1;
- (void)setApplicationManaged:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setAttachmentNames:(id)arg1;
- (void)setAttachmentPaths:(id)arg1;
- (void)setAttachmentTypes:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAudiences:(id)arg1;
- (void)setAudioBitRate:(id)arg1;
- (void)setAudioChannelCount:(id)arg1;
- (void)setAudioEncodingApplication:(id)arg1;
- (void)setAudioSampleRate:(id)arg1;
- (void)setAudioTrackNumber:(id)arg1;
- (void)setAuthorAddresses:(id)arg1;
- (void)setAuthorEmailAddresses:(id)arg1;
- (void)setAuthorNames:(id)arg1;
- (void)setAuthors:(id)arg1;
- (void)setBitsPerSample:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCalendarHolidayIdentifier:(id)arg1;
- (void)setCameraOwner:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCodecs:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setContactKeywords:(id)arg1;
- (void)setContainerDisplayName:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerOrder:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setContentCreationDate:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (void)setContentModificationDate:(id)arg1;
- (void)setContentObj:(id)arg1 obj:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg2;
- (void)setContentRating:(id)arg1;
- (void)setContentSources:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentTypeTree:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setContributors:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCoverage:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setDeliveryType:(id)arg1;
- (void)setDirector:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setDownloadedDate:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEXIFGPSVersion:(id)arg1;
- (void)setEXIFVersion:(id)arg1;
- (void)setEditors:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmailHeaders:(id)arg1;
- (void)setEncodingApplications:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExecutableArchitectures:(id)arg1;
- (void)setExecutablePlatform:(id)arg1;
- (void)setExistingThread:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExposureMode:(id)arg1;
- (void)setExposureProgram:(id)arg1;
- (void)setExposureTime:(id)arg1;
- (void)setExposureTimeString:(id)arg1;
- (void)setExtendedContentRating:(id)arg1;
- (void)setFNumber:(id)arg1;
- (void)setFileIdentifier:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFinderComment:(id)arg1;
- (void)setFlashOn:(id)arg1;
- (void)setFocalLength35mm:(id)arg1;
- (void)setFocalLength:(id)arg1;
- (void)setFontNames:(id)arg1;
- (void)setFullyFormattedAddress:(id)arg1;
- (void)setGPSAreaInformation:(id)arg1;
- (void)setGPSDOP:(id)arg1;
- (void)setGPSDateStamp:(id)arg1;
- (void)setGPSDestBearing:(id)arg1;
- (void)setGPSDestDistance:(id)arg1;
- (void)setGPSDestLatitude:(id)arg1;
- (void)setGPSDestLongitude:(id)arg1;
- (void)setGPSDifferental:(id)arg1;
- (void)setGPSMapDatum:(id)arg1;
- (void)setGPSMeasureMode:(id)arg1;
- (void)setGPSProcessingMethod:(id)arg1;
- (void)setGPSStatus:(id)arg1;
- (void)setGPSTrack:(id)arg1;
- (void)setGeneralMIDISequence:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHTMLContentData:(id)arg1;
- (void)setHasAlphaChannel:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setHiddenAdditionalRecipients:(id)arg1;
- (void)setISOSpeed:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageDirection:(id)arg1;
- (void)setImportantDates:(id)arg1;
- (void)setInformation:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setKeySignature:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLanguages:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLayerNames:(id)arg1;
- (void)setLensModel:(id)arg1;
- (void)setLikelyJunk:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setLyricist:(id)arg1;
- (void)setMailAttachmentKinds:(id)arg1;
- (void)setMailAttachmentNames:(id)arg1;
- (void)setMailAttachmentTypes:(id)arg1;
- (void)setMailCategory:(id)arg1;
- (void)setMailDateLastViewed:(id)arg1;
- (void)setMailDateReceived:(id)arg1;
- (void)setMailFlagColor:(id)arg1;
- (void)setMailFlagged:(id)arg1;
- (void)setMailGMailLabels:(id)arg1;
- (void)setMailMessageID:(id)arg1;
- (void)setMailPriority:(id)arg1;
- (void)setMailRead:(id)arg1;
- (void)setMailRepliedTo:(id)arg1;
- (void)setMailboxIdentifiers:(id)arg1;
- (void)setMaxAperture:(id)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setMetadataModificationDate:(id)arg1;
- (void)setMeteringMode:(id)arg1;
- (void)setMusicalGenre:(id)arg1;
- (void)setMusicalInstrumentCategory:(id)arg1;
- (void)setMusicalInstrumentName:(id)arg1;
- (void)setNamedLocation:(id)arg1;
- (void)setOrganizations:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setOriginalFormat:(id)arg1;
- (void)setOriginalSource:(id)arg1;
- (void)setPageCount:(id)arg1;
- (void)setPageHeight:(id)arg1;
- (void)setPageWidth:(id)arg1;
- (void)setParentFileIdentifier:(id)arg1;
- (void)setPartiallyDownloaded:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPerformers:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPixelCount:(id)arg1;
- (void)setPixelHeight:(id)arg1;
- (void)setPixelWidth:(id)arg1;
- (void)setPlayCount:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setPrimaryRecipients:(id)arg1;
- (void)setProducer:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProjects:(id)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)setPublishers:(id)arg1;
- (void)setQueryResultMatchedFields:(id)arg1;
- (void)setQueryResultRelevance:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setRecipientEmailAddresses:(id)arg1;
- (void)setRecipientNames:(id)arg1;
- (void)setRecordingDate:(id)arg1;
- (void)setRedEyeOn:(id)arg1;
- (void)setRelatedAppBundleIdentifier:(id)arg1;
- (void)setRelatedUniqueIdentifier:(id)arg1;
- (void)setResolutionHeightDPI:(id)arg1;
- (void)setResolutionWidthDPI:(id)arg1;
- (void)setRights:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setSearchableItemFlags:(long long)arg1;
- (void)setSecurityMethod:(id)arg1;
- (void)setSpeed:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStateOrProvince:(id)arg1;
- (void)setStreamable:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupportFileType:(id)arg1;
- (void)setSupportsNavigation:(id)arg1;
- (void)setSupportsPhoneCall:(id)arg1;
- (void)setTempo:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setTextSelected:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (void)setThumbnailData:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setTimeSignature:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalBitRate:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setUserTags:(id)arg1;
- (void)setValue:(id)arg1 forCustomKey:(id)arg2;
- (void)setVendorName:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVideoBitRate:(id)arg1;
- (void)setWeakRelatedUniqueIdentifier:(id)arg1;
- (void)setWhiteBalance:(id)arg1;
- (id)speed;
- (id)startDate;
- (id)stateOrProvince;
- (id)subThoroughfare;
- (id)subject;
- (id)subtitle;
- (id)supportFileType;
- (id)supportsNavigation;
- (id)supportsPhoneCall;
- (id)tempo;
- (id)textContent;
- (id)textContentNoCopy;
- (id)textSelected;
- (id)theme;
- (id)thoroughfare;
- (id)thumbnailData;
- (id)thumbnailURL;
- (id)timeSignature;
- (id)timestamp;
- (id)title;
- (id)totalBitRate;
- (id)uniqueIdentifier;
- (id)userActivityType;
- (id)userTags;
- (id)valueForCustomKey:(id)arg1;
- (id)vendorName;
- (id)version;
- (id)videoBitRate;
- (id)weakRelatedUniqueIdentifier;
- (id)whiteBalance;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_itemContentCreationDate;
- (id)__ck_privateMutableAttributesDictionary;
- (id)__ck_spotlightItemSnippet;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)ic_dataSourceIdentifierCustomKey;
+ (id)ic_managedObjectIDCustomKey;

- (id)ic_dataSourceIdentifier;
- (id)ic_managedObjectIDURI;
- (void)setIc_dataSourceIdentifier:(id)arg1;
- (void)setIc_managedObjectIDURI:(id)arg1;

@end
