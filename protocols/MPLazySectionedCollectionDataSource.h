/* Generated by RuntimeBrowser.
 */

@protocol MPLazySectionedCollectionDataSource <NSObject>

@required

- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@optional

- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (NSArray *)sectionIndexTitles;

@end
