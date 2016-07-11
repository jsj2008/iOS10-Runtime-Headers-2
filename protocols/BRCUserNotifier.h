/* Generated by RuntimeBrowser.
 */

@protocol BRCUserNotifier <NSObject>

@required

- (void)close;
- (void)moveToFront;
- (void)showErrorDeviceOfflineForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorInstallNativeAppForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showErrorItemIsNoLongerSharedForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)showErrorParticipantLimitReachedForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showErrorReasonUnknownForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorServerNotReachableForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorSignInToiCloudForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showErrorTurnOniCloudDriveForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showErroriCloudDriveAppNotVisibleForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showJoinDialogForShareMetadata:(void *)arg1 session:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CKShareMetadata *, BRCAccountSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
