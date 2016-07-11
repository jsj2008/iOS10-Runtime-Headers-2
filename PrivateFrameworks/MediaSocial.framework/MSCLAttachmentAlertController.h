/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentAlertController : UIAlertController <MSCLPhotoPickerDelegate> {
    <MSCLAttachmentAlertDelegate> * _MSCLDelegate;
    UIAlertAction * _action0;
    SKUIClientContext * _clientContext;
    MSCLConfiguration * _configuration;
    MSCLPhotoPickerShelfViewController * _photoPickerViewController;
}

@property (nonatomic) <MSCLAttachmentAlertDelegate> *MSCLDelegate;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly, copy) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *selectedAttachments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MSCLDelegate;
- (void)MSCLPhotoPickerSelectedAttachmentsDidChange:(id)arg1;
- (id)_cameraButtonTitle;
- (id)_cancelButtonTitle;
- (id)_chooseSongButtonTitle;
- (void)_finishWithAttachmentResult:(long long)arg1;
- (void)_music_button0Action;
- (id)_photoLibraryButtonTitle;
- (id)_recordAudioTitle;
- (id)_uploadAudioTitle;
- (id)clientContext;
- (id)configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 clientContext:(id)arg2;
- (id)selectedAttachments;
- (void)setMSCLDelegate:(id)arg1;

@end
