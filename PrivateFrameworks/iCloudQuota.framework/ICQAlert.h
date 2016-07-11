/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQAlert : NSObject {
    NSLock * _alertLock;
    NSObject<OS_dispatch_queue> * _alertQueue;
    NSObject<OS_dispatch_semaphore> * _alertSema;
    long long  _alertState;
    struct __CFUserNotification { } * _cfAlert;
    bool  _handleActionsBeforeCallingCompletionHandler;
    ICQOffer * _offer;
    bool  _showOnlyInSpringboard;
}

@property (nonatomic) bool handleActionsBeforeCallingCompletionHandler;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic) bool showOnlyInSpringboard;

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (bool)shouldShowForOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLink:(id)arg1;
- (void)dealloc;
- (void)dismissAlert;
- (bool)handleActionsBeforeCallingCompletionHandler;
- (id)init;
- (id)initWithOffer:(id)arg1;
- (id)offer;
- (void)setHandleActionsBeforeCallingCompletionHandler:(bool)arg1;
- (void)setShowOnlyInSpringboard:(bool)arg1;
- (bool)showAlertWithCompletion:(id /* block */)arg1;
- (bool)showOnlyInSpringboard;

@end
