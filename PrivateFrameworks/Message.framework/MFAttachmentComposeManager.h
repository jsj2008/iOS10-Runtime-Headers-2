/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentComposeManager : MFAttachmentManager {
    NSMutableArray * _composeAttachmentURLs;
}

- (id)_composeAttachmentDataProviderForContext:(id)arg1;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (id)attachmentsForContext:(id)arg1;
- (void)dealloc;
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)removeAttachmentForURL:(id)arg1;
- (bool)updateAttachment:(id)arg1 withNewData:(id)arg2;

@end
