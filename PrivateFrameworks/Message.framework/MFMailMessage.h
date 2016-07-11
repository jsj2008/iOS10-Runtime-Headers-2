/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessage : MFMessage <MFBaseMessage, MFMailboxPredictionMessage> {
    MFMessageInfo * _info;
    unsigned long long  _messageFlags;
    unsigned long long  _modSequenceNumber;
    bool  _shouldUseMailDrop;
    unsigned char  _subjectPrefixLength;
}

@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flagged;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isVIP;
@property (getter=isKnownToHaveAttachments, nonatomic, readonly) bool knownToHaveAttachments;
@property (nonatomic, readonly) unsigned int mailboxID;
@property (nonatomic, readonly) long long messageIDHash;
@property unsigned long long modSequenceNumber;
@property (nonatomic, readonly) bool read;
@property (nonatomic) bool shouldUseMailDrop;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int uid;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(bool)arg1;
+ (unsigned int)validatePriority:(int)arg1;

- (id)URL;
- (id)account;
- (id)bestAlternativePart;
- (id)bestAlternativePart:(bool*)arg1;
- (id)ccAddressList;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (void)dealloc;
- (bool)deleted;
- (id)externalConversationID;
- (id)firstSenderAddress;
- (bool)flagged;
- (bool)isKnownToHaveAttachments;
- (bool)isVIP;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)mailMessageStore;
- (id)mailbox;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (unsigned long long)messageFlags;
- (id)messageStore;
- (unsigned long long)modSequenceNumber;
- (unsigned short)numberOfAttachments;
- (id)originalMailboxURL;
- (int)priority;
- (bool)read;
- (id)remoteMailboxURL;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setShouldUseMailDrop:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setSummary:(id)arg1;
- (bool)shouldSetSummary;
- (bool)shouldUseMailDrop;
- (id)subject;
- (id)subjectAndPrefixLength:(unsigned int*)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)toAddressList;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (void)_loadMailCoreFramework;
+ (id)sg_messageWithRFC822Data:(id)arg1;

- (id)sg_bestAlternativePart;

@end
