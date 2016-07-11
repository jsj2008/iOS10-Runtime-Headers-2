/* Generated by RuntimeBrowser.
 */

@protocol TUCallCapabilitiesXPCServerActions <NSObject>

@required

- (void)cancelPinRequestFromPrimaryDevice;
- (void)endEmergencyCallbackMode;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)requestPinFromPrimaryDevice;
- (void)setRelayCallingEnabled:(bool)arg1;
- (void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(NSString *)arg2;
- (void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(NSString *)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedDevice:(bool)arg1;
- (void)setThumperCallingEnabled:(bool)arg1;
- (void)setVoLTECallingEnabled:(bool)arg1;
- (void)setWiFiCallingEnabled:(bool)arg1;

@end
