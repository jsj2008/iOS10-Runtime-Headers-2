/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDesiredVersion : BRCVersion <PQLBindable> {
    NSError * _downloadError;
    union { 
        unsigned int value; 
        struct { 
            unsigned int isFault : 1; 
            unsigned int startDownload : 1; 
            unsigned int wantsThumbnail : 1; 
            unsigned int userInitiated : 1; 
        } ; 
    }  _flags;
    NSString * _serverName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *downloadError;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFault;
@property (nonatomic) unsigned int options;
@property (nonatomic, readonly) NSString *serverName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly) bool wantsContent;
@property (nonatomic, readonly) bool wantsThumbnail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)downloadError;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (bool)isFault;
- (bool)isStillValidForEtag:(id)arg1;
- (unsigned int)options;
- (id)serverName;
- (void)setDownloadError:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (bool)userInitiated;
- (bool)wantsContent;
- (bool)wantsThumbnail;

@end
