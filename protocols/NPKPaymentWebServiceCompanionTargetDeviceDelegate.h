/* Generated by RuntimeBrowser.
 */

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>

@required

- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 shouldUnregister:(bool)arg2;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handlePushToken:(NSString *)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)shouldArchiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)shouldArchiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)shouldSendWebServiceContextToWatch;
- (void)shouldSetNewAuthRandom:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
