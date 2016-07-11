/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    bool  __singleFeedbackList;
    unsigned long long  _feedbackCollectionType;
    NSArray * _feedbackKeys;
    NSMutableDictionary * _feedbackValues;
    NSArray * _negativeFeedbackKeys;
    NSMutableDictionary * _negativeFeedbackValues;
    NSArray * _positiveFeedbackKeys;
    NSMutableDictionary * _positiveFeedbackValues;
    UITableViewController * _tableViewController;
    bool  _userLikedIt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (id)_feedbackKeyForIndexPath:(id)arg1;
- (bool)_isSelectedRow:(id)arg1 inSection:(long long)arg2;
- (void)_markCell:(id)arg1 asSelected:(bool)arg2;
- (void)_setSelectionStateForKey:(id)arg1 inSection:(long long)arg2 to:(bool)arg3;
- (id)initWithCollectionType:(unsigned long long)arg1 keys:(id)arg2 userLikedIt:(bool)arg3;
- (id)initWithCollectionType:(unsigned long long)arg1 positiveKeys:(id)arg2 negativeKeys:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendFeedback:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewController;
- (void)viewDidLoad;

@end
