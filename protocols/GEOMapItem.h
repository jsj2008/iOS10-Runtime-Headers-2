/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItem <NSObject>

@required

- (bool)_acceptsApplePay;
- (NSArray *)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (double)_areaInMeters;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (GEOMapItemPlaceAttribution *)_attribution;
- (GEOPDBusinessClaim *)_businessClaim;
- (NSString *)_businessURL;
- (GEOMapItemClientAttributes *)_clientAttributes;
- (NSArray *)_completeOperatingHours;
- (unsigned long long)_customIconID;
- (NSString *)_disambiguationName;
- (<GEOEncyclopedicInfo> *)_encyclopedicInfo;
- (GEORestaurantFeaturesLink *)_featureLink;
- (GEOPDFlyover *)_flyover;
- (NSString *)_flyoverAnnouncementMessage;
- (bool)_goodForKids;
- (bool)_hasAcceptsApplePayAmenity;
- (bool)_hasAnyAmenities;
- (bool)_hasAreaInMeters;
- (bool)_hasBusinessClaim;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFeatureLink;
- (bool)_hasFlyover;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTakesReservationsAmenity;
- (bool)_hasTelephone;
- (bool)_hasTransit;
- (bool)_hasTravelTimeForTransportType:(int)arg1;
- (bool)_hasUserRatingScore;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (<GEOMapItem> *)_mapItemByStrippingOptionalData;
- (unsigned long long)_muid;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (NSArray *)_operatingHours;
- (bool)_optsOutOfTelephoneAds;
- (NSArray *)_photos;
- (GEOMapItemPhotosAttribution *)_photosAttribution;
- (GEOPlace *)_place;
- (GEOPDPlace *)_placeData;
- (NSData *)_placeDataAsData;
- (int)_placeType;
- (NSString *)_poiPinpointURLString;
- (NSString *)_poiSurveyURLString;
- (unsigned int)_priceRange;
- (NSURL *)_providerURL;
- (int)_recommendedTransportType;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (NSString *)_resultSnippetLocationString;
- (NSArray *)_reviews;
- (GEOMapItemReviewsAttribution *)_reviewsAttribution;
- (NSArray *)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEOFeatureStyleAttributes *)_styleAttributes;
- (bool)_takesReservations;
- (NSString *)_telephone;
- (NSArray *)_tips;
- (<GEOTransitAttribution> *)_transitAttribution;
- (<GEOMapItemTransitInfo> *)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (NSString *)_vendorID;
- (NSURL *)_webURL;
- (NSDictionary *)addressDictionary;
- (GEOAddressObject *)addressObject;
- (NSArray *)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (bool)contactIsMe;
- (NSString *)contactName;
- (NSString *)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (GEOMapItemDetourInfo *)detourInfo;
- (GEOMapRegion *)displayMapRegion;
- (GEOMapRegion *)displayMapRegionOrNil;
- (NSData *)encodedData;
- (NSDate *)eventDate;
- (NSString *)eventName;
- (GEOAddress *)geoAddress;
- (GEOMapRegion *)geoFenceMapRegion;
- (bool)hasExpiredComponents;
- (bool)isDisputed;
- (bool)isEventAllDay;
- (bool)isValid;
- (NSString *)name;
- (int)referenceFrame;
- (NSArray *)spatialMappedCategories;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
- (NSTimeZone *)timezone;
- (NSString *)weatherDisplayName;

@end
