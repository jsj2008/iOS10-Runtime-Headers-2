/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonPluginDataSource : NSObject {
    NSURL * _URLToOpenOnTapAction;
    NSArray * _attachmentGUIDs;
    NSString * _bundleID;
    IMChat * _chat;
    NSArray * _consumedPayloads;
    DDScannerResult * _dataDetectedResult;
    NSString * _guidOfLastMessageInSession;
    bool  _hasInvalidatedSize;
    bool  _initialMessageIsFromMe;
    bool  _isLast;
    NSString * _messageGUID;
    long long  _messageIDOfLastMessageInSession;
    bool  _payloadInShelf;
    NSArray * _pendingAttachmentData;
    IMPluginPayload * _pluginPayload;
    IMPluginPayload * _pluginPayloadPendingSend;
    NSMutableSet * _temporaryAttachmentURLs;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URLToOpenOnTapAction;
@property (nonatomic, readonly) NSArray *allPayloads;
@property (nonatomic, retain) NSArray *attachmentGUIDs;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, retain) NSArray *consumedPayloads;
@property (nonatomic, retain) DDScannerResult *dataDetectedResult;
@property (nonatomic, readonly, retain) NSString *guidOfLastMessageInSession;
@property (nonatomic) bool hasInvalidatedSize;
@property (nonatomic, readonly) IMMessage *imMessage;
@property (nonatomic) bool initialMessageIsFromMe;
@property (nonatomic, readonly) bool isFromMe;
@property (setter=setLast:, nonatomic) bool isLast;
@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, readonly) long long messageIDOfLastMessageInSession;
@property (nonatomic, readonly, retain) NSData *messagePayloadDataForSending;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool payloadInShelf;
@property (nonatomic, retain) NSArray *pendingAttachmentData;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;
@property (nonatomic, readonly, retain) IMPluginPayload *pluginPayloadPendingSend;
@property (nonatomic, readonly, retain) NSString *statusString;
@property (nonatomic, retain) NSMutableSet *temporaryAttachmentURLs;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly) bool wantsReplyFromContentView;
@property (nonatomic, readonly) bool wantsStatusItem;

+ (id)previewSummary;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4;
+ (bool)supportsIndividualPreviewSummaries;
+ (bool)supportsURL:(id)arg1;

- (void).cxx_destruct;
- (id)URLToOpenOnTapAction;
- (id)_handlesByIdentifier;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)_removeTemporaryAttachmentURLs;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
- (bool)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (id)allPayloads;
- (id)attachmentGUIDs;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (id)bundleID;
- (id)chat;
- (id)consumedPayloads;
- (id)dataDetectedResult;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (id)description;
- (id)displayNameForHandleIdentifier:(id)arg1;
- (void)endShowingLastConsumedBreadcrumb;
- (id)guidOfLastMessageInSession;
- (bool)hasInvalidatedSize;
- (id)imMessage;
- (id)individualPreviewAttachmentFileAndUTI:(id*)arg1;
- (id)individualPreviewSummary;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;
- (id)initWithPluginPayload:(id)arg1;
- (bool)initialMessageIsFromMe;
- (bool)isFromMe;
- (bool)isLast;
- (bool)isPlayed;
- (void)markAsPlayed;
- (id)messageGUID;
- (long long)messageIDOfLastMessageInSession;
- (id)messagePayloadDataForSending;
- (void)needsResize;
- (id)payload;
- (void)payloadDidChange;
- (bool)payloadInShelf;
- (void)payloadWillEnterShelf;
- (void)payloadWillSendFromShelf;
- (id)pendingAttachmentData;
- (unsigned long long)playbackType;
- (void)playbackWithCompletionBlock:(id /* block */)arg1;
- (id)pluginPayload;
- (void)pluginPayloadDidChange:(unsigned long long)arg1;
- (id)pluginPayloadPendingSend;
- (void)sendPayload:(id)arg1;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (void)setAttachmentGUIDs:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setConsumedPayloads:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setHasInvalidatedSize:(bool)arg1;
- (void)setInitialMessageIsFromMe:(bool)arg1;
- (void)setLast:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
- (void)setPayloadInShelf:(bool)arg1;
- (void)setPendingAttachmentData:(id)arg1;
- (void)setPluginPayload:(id)arg1;
- (void)setTemporaryAttachmentURLs:(id)arg1;
- (void)setUrl:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusString;
- (void)statusStringNeedsUpdate;
- (void)stopPlayback;
- (id)temporaryAttachmentURLs;
- (void)thumbnailURLWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)updatePayload:(id)arg1;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (id)url;
- (bool)wantsReplyFromContentView;
- (bool)wantsStatusItem;

@end
