/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapService : NSObject {
    int  _additionalEnabledMarketsChangedToken;
    int  _overriddenResultProviderID;
    NSObject<OS_dispatch_queue> * _placeDataObserverQueue;
    NSMutableArray * _placeDataObservers;
    NSArray * _preferredLanguages;
    NSLock * _preferredLanguagesLock;
}

+ (void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(id /* block */)arg4;
+ (id)sharedService;

- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;
- (void)_countryCodeChanged:(id)arg1;
- (id)_geoMapItemForData:(id)arg1;
- (id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2;
- (id)_geoMapItemsForPlacesInDetails:(id)arg1;
- (void)_geoMapItemsForResponseData:(id)arg1 handler:(id /* block */)arg2;
- (int)_loadOverriddenResultProviderID;
- (void)_localeChanged:(id)arg1;
- (id)_preferredLanguages;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 includeETA:(bool)arg4 preserveOriginalLocation:(bool)arg5 traits:(id)arg6;
- (id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (void)addPlaceDataRequestObserver:(id)arg1;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)dealloc;
- (id)defaultTraits;
- (id)handleForMapItem:(id)arg1;
- (id)init;
- (int)localSearchProviderID;
- (void)notifyPlaceDataRequestObserversThatTicket:(id)arg1 didCompleteWithMapItems:(id)arg2;
- (void)removePlaceDataRequestObserver:(id)arg1;
- (void)resolveMapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serializedClientMetadataForParsec;
- (id)serializedClientMetadataForSiri;
- (id)serializedClientMetadataForTraits:(id)arg1;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForFreshBusinessClaimComponentWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (id)ticketForFreshMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 categoryFilter:(id)arg2 traits:(id)arg3;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)ticketForNearestTransitStation:(unsigned long long)arg1 coordinate:(struct { double x1; double x2; })arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)ticketForOptInToProblemSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)ticketForPlaceRefinementRequestForContentProvider:(id)arg1 coordinate:(struct { double x1; double x2; }*)arg2 addressLine:(id)arg3 placeName:(id)arg4 traits:(id)arg5;
- (id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct { double x1; double x2; }*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 placeForStartDirectionsSearchInput:(id)arg3 placeForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeETA:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 includeETA:(bool)arg4 preserveOriginalLocation:(bool)arg5 traits:(id)arg6;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(bool)arg4 includeETA:(bool)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned int)arg4 includeETA:(bool)arg5 traits:(id)arg6;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSpatialLookupParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForSpotlightCategoryListWithTraits:(id)arg1;
- (id)ticketForTransitLines:(id)arg1 withTraits:(id)arg2;
- (id)ticketForTransitMUIDs:(id)arg1 includeETA:(bool)arg2 endDateForPlacecardSchedulesForThisBatch:(id)arg3 traits:(id)arg4;
- (id)ticketForURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
- (id)ticketforCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (void)trackMapItem:(id)arg1;

@end
