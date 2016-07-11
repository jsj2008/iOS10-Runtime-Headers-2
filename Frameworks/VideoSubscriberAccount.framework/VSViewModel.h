/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewModel : NSObject {
    bool  _beginValidationButtonEnabled;
    NSString * _beginValidationButtonTitle;
    unsigned long long  _deleteAccountState;
    NSError * _error;
    NSString * _footerText;
    UIImage * _logo;
    NSString * _logoAccessibilityLabel;
    NSItemProvider * _logoProvider;
    NSString * _message;
    bool  _showDeleteAccountButton;
    bool  _showFooter;
    NSString * _title;
    unsigned long long  _validationState;
    unsigned long long  _viewState;
}

@property (getter=isBeginValidationButtonEnabled, nonatomic) bool beginValidationButtonEnabled;
@property (nonatomic, copy) NSString *beginValidationButtonTitle;
@property (nonatomic) unsigned long long deleteAccountState;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *footerText;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, copy) NSString *logoAccessibilityLabel;
@property (nonatomic, retain) NSItemProvider *logoProvider;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool showDeleteAccountButton;
@property (nonatomic) bool showFooter;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long validationState;
@property (nonatomic) unsigned long long viewState;

- (void).cxx_destruct;
- (id)beginValidationButtonTitle;
- (unsigned long long)deleteAccountState;
- (id)error;
- (id)footerText;
- (bool)isBeginValidationButtonEnabled;
- (id)logo;
- (id)logoAccessibilityLabel;
- (id)logoProvider;
- (id)message;
- (void)setBeginValidationButtonEnabled:(bool)arg1;
- (void)setBeginValidationButtonTitle:(id)arg1;
- (void)setDeleteAccountState:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoAccessibilityLabel:(id)arg1;
- (void)setLogoProvider:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowDeleteAccountButton:(bool)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValidationState:(unsigned long long)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (bool)showDeleteAccountButton;
- (bool)showFooter;
- (id)title;
- (unsigned long long)validationState;
- (unsigned long long)viewState;

@end
