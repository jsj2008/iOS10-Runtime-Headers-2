/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactsFilter : NSObject {
    void * _addressBook;
    void * _directorySource;
    NSArray * _groups;
    bool  _showsAllContacts;
    NSArray * _sources;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly) void*directorySource;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly) void*groupForNewRecords;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool shouldChangeModelSelectionWhenDisplayed;
@property (nonatomic, readonly) bool showsAllContacts;
@property (nonatomic, readonly) void*sourceForNewRecords;
@property (nonatomic, readonly) NSArray *sources;

+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (void*)_defaultSourceForAccountContainingSource:(void*)arg1;
- (void)_getWritableSource:(const void**)arg1 andGroup:(const void**)arg2;
- (id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2;
- (void*)addressBook;
- (id)copyDictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (void*)directorySource;
- (void*)groupForNewRecords;
- (id)groups;
- (unsigned long long)hash;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2;
- (id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3;
- (void)invalidateSourcesForAllContacts;
- (bool)isDirectory;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)shouldChangeModelSelectionWhenDisplayed;
- (bool)showsAllContacts;
- (id)sortedGroupsForGroups:(id)arg1;
- (id)sortedSourcesForSources:(id)arg1;
- (void*)sourceForNewRecords;
- (id)sources;

@end
