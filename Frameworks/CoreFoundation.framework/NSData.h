/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSData : NSObject <CKDParsedObject, CKRecordValue, FCKeyValueStoreCoding, NSCopying, NSMutableCopying, NSSecureCoding, PQLValuable, TSPSplitableData>

@property (nonatomic, readonly) NSData *NRSHA256;
@property (nonatomic, readonly) NSData *SHA1Data;
@property (nonatomic, readonly) NSString *SHA1HexString;
@property (nonatomic, readonly) unsigned int br_qtnFlags;
@property (nonatomic, readonly) NSString *brc_hexadecimalString;
@property (nonatomic, readonly) NSData *brc_signature;
@property (nonatomic, readonly) bool brc_signatureIsPackage;
@property (nonatomic, readonly) bool brc_signatureIsPendingPlaceHolder;
@property (nonatomic, readonly) bool brc_signatureIsValid;
@property (readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fm_hexString;
@property (nonatomic, readonly, copy) NSData *fm_md5Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha1Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha256Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha512Hash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hexString;
@property (readonly) unsigned long long length;
@property (nonatomic, readonly) NSString *md5;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (bool)supportsSecureCoding;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (bool)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inEncoding:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_isSafeResumeDataForBackgroundDownload;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDataFromBase64URLSafeString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)CKBase64URLSafeString;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKSHA256;
- (id)CKUppercaseHexStringWithoutSpaces;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;

- (bool)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(bool)arg1 withOptions:(unsigned long long)arg2;
- (bool)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long long)_cfTypeID;
- (bool)_copyWillRetain;
- (id)_createDispatchData;
- (bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(struct { bool x1; bool x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (bool)_isCompact;
- (bool)_isDispatchData;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_parseRFC822HeaderFields;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (bool)isNSData__;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (unsigned long long)hk_countOfUUIDs;
- (void)hk_enumerateUUIDsUsingBlock:(id /* block */)arg1;
- (id)hk_stripCorruptedUUIDs;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)generateSHA1;
- (id)stringInHexFormat;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)makeArchive:(const void*)arg1 length:(unsigned long long)arg2 level:(float)arg3;

- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)encodeCGPath:(struct CGPath { }*)arg1;
+ (struct CGPath { }*)newCGPathDecodedFromData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_hexString;

// Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit

+ (id)dataGZipDeflatedWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_dataByCompressingWithGzip;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_hexString;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_dataWithVMAllocatedBytes:(const void*)arg1 length:(unsigned long long)arg2;

- (void*)bs_bytesForMIG;
- (unsigned int)bs_lengthForMIG;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)dataWithIOSurface:(void*)arg1 usedSize:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

- (id)CertUIHexString;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_pendingPlaceholderForPackage:(bool)arg1;

- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (bool)brc_signatureIsPackage;
- (bool)brc_signatureIsPendingPlaceHolder;
- (bool)brc_signatureIsValid;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplQueryCursorDescription;
- (id)cplQueryCursorSimpleDescription;
- (id)cplSyncAnchorDescription;
- (id)cplSyncAnchorSimpleDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)_CUTCopyGzippedData;
- (id)_CUTDecompressData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_dataFromHexString:(id)arg1;

- (id)_cn_SHA256HashDataWithSalt:(id)arg1;
- (id)_cn_decodeBase64;
- (id)_cn_decodeBase64IgnoringWhitespace;
- (id)_cn_hexString;
- (id)_cn_writeToURL:(id)arg1 options:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiSHA1Hash;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_MD5Hash;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)cr_md5DigestHexString;

// Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit

- (id)md5;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_dataWithHexString:(id)arg1;
+ (id)da_dataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

- (id)fm_hexString;
- (id)fm_md5Hash;
- (id)fm_sha1Hash;
- (id)fm_sha256Hash;
- (id)fm_sha512Hash;
- (id)hexString;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTCopyGzippedData;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)_FTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 queue:(id)arg2 imageQueue:(id)arg3 handler:(id /* block */)arg4;
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;

- (id)_gkBase64EncodedString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)initWithBase64EncodedString_gk:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices

+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (bool)CDXTicketIsHolePunch;
- (bool)CDXTicketIsReflected;
- (bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (bool)CDXTicketIsStub;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
- (unsigned long long)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (bool)CDXTicketWellFormed;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dataForHexString:(id)arg1;
+ (id)dataWithCPPData:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(bool)arg2;

- (id)_geo_MD5Hash;
- (id)_geo_SHA1Hash;
- (id)_geo_hexString;
- (id)_geo_newXPCData;
- (id)_geo_uppercaseMD5HashString;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })cppData;
- (id)initWithCPPData:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)compress;
- (id)generateSHA1;
- (id)stringInHexFormat;
- (id)uncompress;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)subdataWithRangeNoCopy:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;

- (id)SHA1Data;
- (id)SHA1HexString;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dataWithMessageSummaryInfoDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (id)hexRepresentationWithSpaces_AS:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)dataWithEncodedSequenceData:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedSequenceString:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedString:(id)arg1 error:(id*)arg2;

- (bool)decodeSequenceData:(id*)arg1 data:(id*)arg2 error:(id*)arg3;
- (bool)decodeSequenceString:(id*)arg1 data:(id*)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_MD5Digest;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(bool)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (bool)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned long long)arg1;
- (id)mf_subdataToIndex:(unsigned long long)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;

- (id)MCBase64String;
- (id)MCHexString;
- (id)MCInitWithBase64String:(id)arg1;
- (bool)MCSCWriteToFile:(id)arg1 atomically:(bool)arg2;
- (bool)MCSCWriteToFile:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)MCSCWriteToFile:(id)arg1 atomically:(bool)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (bool)MCSCWriteToURL:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)MCSCWriteToURL:(id)arg1 atomically:(bool)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (id)MCSHA1Hash;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

+ (id)dataFromHexadecimalString:(id)arg1;

- (id)hexadecimalString;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)compressedData;
- (id)decompressedData;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;

- (id)NRSHA256;
- (void)NRSHA256:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber

- (void)MD5:(unsigned char)arg1;
- (id)hexString;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)md5;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 error:(id*)arg4;
+ (id)random128BitData:(id*)arg1;
+ (id)randomDataOfLength:(unsigned long long)arg1 error:(id*)arg2;

- (id)TT_gzipDeflate;
- (id)TT_gzipInflate;
- (id)decryptedDataWithKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(id*)arg4;
- (id)encryptedDataWithKey:(id)arg1 tag:(id*)arg2 initialVector:(id*)arg3 error:(id*)arg4;
- (id)unwrapWithKey:(id)arg1 error:(id*)arg2;
- (id)wrapWithKey:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; bool x7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;
+ (id)tsu_decodeFromHexidecimalString:(id)arg1;

- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;
- (id)tsu_encodeToHexidecimalString;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dataWithCGImage:(struct CGImage { }*)arg1;

- (id)SHA1Hash;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)hexEncoding;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

- (struct { unsigned char x1[16]; })md5sum;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)hexString;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;

- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned long long)pl_advisoryLength;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(bool)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(bool)arg3 error:(id*)arg4;

- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (bool)safari_dataAppearsToBeCompressed;
- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

+ (id)pu_dataFromHexString:(id)arg1;

- (id)pu_hex;
- (long long)sd_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (bool)AES128CheckVerifier:(id)arg1 withPassword:(id)arg2;
+ (id)AES128GenerateVerifierWithPassword:(id)arg1;

- (id)AES128DecryptWithPassword:(id)arg1;
- (id)AES128EncryptWithPassword:(id)arg1;
- (id)dictionaryFromNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parentResult:(id)arg2 isParentContent:(bool)arg3;
- (id)hexaStringRepresentation;
- (id)hmacSha1Hash:(id)arg1;
- (id)md5Hash;
- (id)searchDataByXPathQuery:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 query:(id)arg2;
- (id)searchHTMLContentByXPathQuery:(id)arg1;
- (id)sha1Hash;
- (id)stringWithEncoding:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)sb_hexadecimalEncodedString;

// Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper

+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;

- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;

- (bool)writeToURL:(id)arg1 encryptionKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (id)MD5HashString;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (bool)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (long long)_web_locationAfterFirstBlankLine;
- (bool)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

+ (id)wl_dataFromHexEncodedData:(id)arg1;
+ (id)wl_dataFromHexEncodedString:(id)arg1;
+ (id)wl_hmacSHA256DataForData:(id)arg1 key:(id)arg2;
+ (id)wl_lengthPrefixedBlobSequenceFromDataArray:(id)arg1;

- (id)wl_arrayOfDataFromLengthPrefixedBlobSequenceWithExpectedCount:(unsigned long long)arg1;
- (bool)wl_blobIsComplete;
- (id)wl_dataFromLengthPrefixedBlob;
- (id)wl_hexEncodedData;
- (id)wl_hexEncodedString;
- (id)wl_lengthPrefixedBlob;
- (id)wl_subdataWithRangeExcludingTrailingCrnl:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)wl_utf8String;

// Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube

- (id)webSafeBase64Data;

// Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper

- (id)copyDeflatedData;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;
+ (id)tsu_decodeFromHexidecimalString:(id)arg1;

- (id)tsp_dispatchData;
- (id)tsp_dispatchDataWithApplier:(id /* block */)arg1;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id /* block */)arg2;
- (bool)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;
- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;
- (id)tsu_encodeToHexidecimalString;

// Image: /System/Library/PrivateFrameworks/vCard.framework/vCard

+ (unsigned long long)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1;

- (id)_cn_MD5Hash;
- (id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;

// Image: /usr/lib/libnfshared.dylib

+ (id)NF_dataWithHexString:(id)arg1;

- (id)NF_asHexString;
- (bool)NF_isZeroed;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
