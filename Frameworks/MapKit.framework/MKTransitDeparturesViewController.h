/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesViewController : _MKTableViewController <MKDynamicTransitUIContainer, MKTransitDeparturesCellDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKTransitConnectionCellDelegate> {
    bool  _allowsTransitLineSelection;
    NSMutableDictionary * _cachedColumnCenteringWidths;
    NSMapTable * _cachedDirectionsForSystem;
    NSMutableDictionary * _cachedMaxImageWidths;
    NSMapTable * _cachedSectionHeaders;
    NSMutableDictionary * _cachedSequencesForSection;
    NSMapTable * _cachedSystemHasInactiveLines;
    <MKTransitDepaturesViewControllerDelegate> * _delegate;
    NSDate * _departureCutoffDate;
    bool  _fetchingTransitInfo;
    NSMutableSet * _hiddenSections;
    MKTransitItemIncidentsController * _incidentsController;
    NSString * _infoRefreshErrorDescription;
    bool  _isInSiri;
    bool  _isTransitioningSize;
    NSDate * _lastCutoffDateWithValidSchedule;
    long long  _lastFailureDiagnosis;
    bool  _lastInfoRefreshFailed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastMaxWidthBounds;
    MKMapItem * _mapItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _newSize;
    NSMutableDictionary * _sectionControllers;
    NSMutableArray * _sections;
    bool  _showDisambiguation;
    NSMutableArray * _shownIncidentTitles;
}

@property (nonatomic, readonly) bool allowsTransitLineSelection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitDepaturesViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInSiri;
@property (nonatomic, retain) NSDate *lastCutoffDateWithValidSchedule;
@property (nonatomic) long long lastFailureDiagnosis;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool showDisambiguation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_blockedIncidentEntities;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (double)_columnCenteringImageWidthForSection:(long long)arg1;
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_configureLeadingForDeparturesCell:(id)arg1 width:(double)arg2 compressed:(bool)arg3;
- (id)_connectionCellForRow:(long long)arg1;
- (id)_controllerForSection:(long long)arg1;
- (id)_departureCutoffDateForLine:(id)arg1;
- (id)_departureCutoffDateForSequence:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(bool*)arg2 outNextLineIsSame:(bool*)arg3;
- (long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
- (long long)_departureSequenceFrequencyTypeForSection:(long long)arg1;
- (id)_departureSequencesForSection:(long long)arg1;
- (id)_departuresControllerForSection:(long long)arg1;
- (id)_directionForSection:(long long)arg1;
- (id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out bool*)arg2;
- (id)_dominantIncidentForSequence:(id)arg1;
- (bool)_hasConnectionsSection;
- (bool)_hasIncidentsSection;
- (bool)_hasPlaceCardMessageSection;
- (double)_heightForFooterInSection:(long long)arg1;
- (id)_identifierForSection:(long long)arg1;
- (id)_identifierForSequence:(id)arg1;
- (id)_identifierForSystem:(id)arg1;
- (id)_imageForLine:(id)arg1 inSection:(long long)arg2;
- (id)_imageForLine:(id)arg1 size:(long long)arg2;
- (id)_imageWithArtworkDataSource:(id)arg1;
- (id)_inactiveLinesControllerForSection:(long long)arg1;
- (id)_inactiveLinesForSystem:(id)arg1;
- (id)_incidentCellForRow:(long long)arg1;
- (void)_incidentDetailsButtonSelected;
- (id)_incidentsFilteredToOnePerLine:(bool)arg1;
- (void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2;
- (id)_indexPathWithHeader:(id)arg1;
- (id)_indexPathWithoutHeader:(id)arg1;
- (bool)_isCompressed;
- (bool)_isCompressedWithTraits:(id)arg1;
- (bool)_isImageCandidateForColumnCentering:(id)arg1 source:(id)arg2;
- (bool)_isInfoExpired;
- (bool)_isLastSectionForSystem:(long long)arg1;
- (bool)_isStuckWithExpiredInfo;
- (long long)_lineImageSizeForSection:(long long)arg1;
- (void)_localeDidChange;
- (double)_maxImageWidthForSection:(long long)arg1;
- (double)_maxImageWidthForSection:(long long)arg1 passingTest:(id /* block */)arg2;
- (id)_messageCellForSection:(long long)arg1;
- (long long)_numberOfDeparturesSectionsForSystem:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (id)_operatingHoursDescriptionForSequence:(id)arg1;
- (id)_pagingPromptForSection:(long long)arg1;
- (void)_rebuildSections;
- (void)_refreshCells;
- (void)_refreshTransitInfoIfNeeded;
- (void)_refreshTransitInfoIfNeededForIncidents:(bool)arg1;
- (long long)_sectionForIdentifier:(id)arg1;
- (bool)_sectionHasFooter:(long long)arg1;
- (bool)_sectionHasHeader:(long long)arg1;
- (void)_sectionHeaderButtonPressed:(id)arg1;
- (long long)_sectionTypeForSection:(long long)arg1;
- (long long)_sectionsCount;
- (bool)_shouldPageSection:(long long)arg1;
- (id)_smallerImageWithArtworkDataSource:(id)arg1;
- (id)_startEndDatesForSequence:(id)arg1 date:(id)arg2;
- (id)_systemForSection:(long long)arg1;
- (id)_systemForSection:(long long)arg1 directionIndex:(out long long*)arg2;
- (bool)_systemHasInactiveLines:(id)arg1;
- (bool)_systemHasIncidents:(id)arg1;
- (int)_transitCategoryForSection:(long long)arg1;
- (int)_transitCategoryForSequence:(id)arg1;
- (void)_transitInfoUpdated;
- (void)_updateDepartureCutoffDate;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (bool)allowsTransitLineSelection;
- (int)currentTransitCategory;
- (void)dealloc;
- (id)delegate;
- (id)departureCutoffDate;
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;
- (void)infoButtonSelectedInConnectionCell:(id)arg1;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(bool)arg2;
- (bool)isInSiri;
- (id)lastCutoffDateWithValidSchedule;
- (long long)lastFailureDiagnosis;
- (id)mapItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)recordIncidentShown:(id)arg1 system:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setIsInSiri:(bool)arg1;
- (void)setLastCutoffDateWithValidSchedule:(id)arg1;
- (void)setLastFailureDiagnosis:(long long)arg1;
- (void)setMapItem:(id)arg1;
- (void)setShowDisambiguation:(bool)arg1;
- (bool)showDisambiguation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (int)transitCategoryForFrequencyType:(long long)arg1;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
