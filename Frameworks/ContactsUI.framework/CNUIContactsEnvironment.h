/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIContactsEnvironment : NSObject {
    CNUIAccountsFacade * _accountsFacade;
    long long  _accountsFacade_once;
    <CNUIPRLikenessResolver> * _cachingLikenessResolver;
    long long  _cachingLikenessResolver_once;
    CNContactsEnvironment * _cnEnvironment;
    CNContactStore * _contactStore;
    long long  _contactStore_once;
    <CNSchedulerProvider> * _defaultSchedulerProvider;
    long long  _defaultSchedulerProvider_once;
    _DECConsumer * _duetConsumer;
    long long  _duetConsumer_once;
    CNUIFMFFacade * _fmfFacade;
    long long  _fmfFacade_once;
    CNUIMeContactMonitor * _meMonitor;
    long long  _meMonitor_once;
    PRPersonaStore * _personaStore;
    long long  _personaStore_once;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
    long long  _placeholderProviderFactory_once;
    CNUIContactsEnvironmentServicesProvider * _servicesProvider;
}

@property (nonatomic, retain) CNUIAccountsFacade *accountsFacade;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *cachingLikenessResolver;
@property (nonatomic, readonly) CNContactsEnvironment *cnEnvironment;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNSchedulerProvider> *defaultSchedulerProvider;
@property (nonatomic, retain) _DECConsumer *duetConsumer;
@property (nonatomic, retain) CNUIFMFFacade *fmfFacade;
@property (nonatomic, retain) CNUIMeContactMonitor *meMonitor;
@property (nonatomic, retain) PRPersonaStore *personaStore;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic, readonly) CNUIContactsEnvironmentServicesProvider *servicesProvider;

+ (id)currentEnvironment;

- (void).cxx_destruct;
- (id)accountsFacade;
- (id)cachingLikenessResolver;
- (id)cnEnvironment;
- (id)contactStore;
- (id)defaultSchedulerProvider;
- (id)duetConsumer;
- (id)fmfFacade;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)meMonitor;
- (id)personaStore;
- (id)placeholderProviderFactory;
- (id)servicesProvider;
- (void)setAccountsFacade:(id)arg1;
- (void)setCachingLikenessResolver:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDefaultSchedulerProvider:(id)arg1;
- (void)setDuetConsumer:(id)arg1;
- (void)setFmfFacade:(id)arg1;
- (void)setMeMonitor:(id)arg1;
- (void)setPersonaStore:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;

@end
