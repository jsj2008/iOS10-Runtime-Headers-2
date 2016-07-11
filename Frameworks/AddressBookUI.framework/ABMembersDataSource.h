/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {
    void * _addressBook;
    ABBannerView * _bannerView;
    <ABMembersDataSourceDelegate> * _delegate;
    struct __CFDictionary { } * _displayableSectionHeaderToSectionHeader;
    struct __CFDictionary { } * _displayableSectionIndexToSectionIndex;
    ABUIPerson * _meCard;
    ABModel * _model;
    struct __CFDictionary { } * _sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary { } * _sectionHeaderToSortingIndex;
    NSMutableArray * _sectionIndexTitles;
    struct __CFDictionary { } * _sectionIndexToDisplayableSectionIndex;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) void*addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABMembersDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ABModel *model;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void)_invalidateMeCard;
- (void*)addressBook;
- (id)bannerView;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (void)dealloc;
- (id)delegate;
- (id)displayableSectionHeaderFromSectionHeader:(id)arg1;
- (id)displayableSectionIndexFromSectionIndex:(id)arg1;
- (unsigned long long)displayedMemberIndexForIndexPath:(id)arg1 inTableView:(id)arg2;
- (long long)globalRowForBanner;
- (long long)globalRowForDisplayedMemberIndex:(unsigned long long)arg1;
- (id)indexPathForDisplayedMemberIndex:(unsigned long long)arg1 inTableView:(id)arg2;
- (id)model;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct __CFDictionary { }*)sectionHeaderSortingIndices;
- (id)sectionIndexFromDisplayableSectionIndex:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBannerView:(id)arg1 inTableView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)shouldShowGroups;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)titleForHeaderInSection:(long long)arg1;

@end
