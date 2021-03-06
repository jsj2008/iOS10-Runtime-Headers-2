/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSuggestionViewController : UITableViewController {
    CNPropertySuggestionAction * _action;
    UILabel * _contentLabel;
    UILabel * _dateLabel;
    NSString * _foundInAppName;
    UILabel * _fromLabel;
    SGOrigin * _origin;
    CNPropertyCell * _propertyCell;
    UILabel * _subjectLabel;
}

@property (nonatomic, retain) CNPropertySuggestionAction *action;
@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic, retain) UILabel *dateLabel;
@property (retain) NSString *foundInAppName;
@property (nonatomic, retain) UILabel *fromLabel;
@property (nonatomic, retain) SGOrigin *origin;
@property (nonatomic, retain) CNPropertyCell *propertyCell;
@property (nonatomic, retain) UILabel *subjectLabel;

+ (id)viewControllerWithOrigin:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)addToContact:(id)arg1;
- (id)contentLabel;
- (id)dateLabel;
- (id)foundInAppName;
- (id)fromLabel;
- (void)ignore:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)origin;
- (id)propertyCell;
- (void)setAction:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setFoundInAppName:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPropertyCell:(id)arg1;
- (void)setSubjectLabel:(id)arg1;
- (void)showSource:(id)arg1;
- (id)subjectLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updatePreview;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
