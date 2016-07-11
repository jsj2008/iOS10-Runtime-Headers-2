/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) bool requiresBillingAddress;

+ (long long)dataType;

- (id)billingAddress;
- (bool)isValidWithError:(id*)arg1;
- (id)pass;
- (id)paymentApplication;
- (bool)requiresBillingAddress;
- (long long)status;

@end
