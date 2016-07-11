/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned int  _audioOnly;
    unsigned int  _clientAuthMs;
    unsigned int  _clientBonjourMs;
    unsigned int  _clientConnectMs;
    unsigned int  _clientInfoMs;
    NSString * _clientModel;
    unsigned int  _clientPostAuthMs;
    unsigned int  _clientSecureConnectionMs;
    NSString * _clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int clientAuthMs : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientInfoMs : 1; 
        unsigned int clientPostAuthMs : 1; 
        unsigned int clientSecureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
    unsigned int  _type;
}

@property (nonatomic) unsigned int audioOnly;
@property (nonatomic) unsigned int clientAuthMs;
@property (nonatomic) unsigned int clientBonjourMs;
@property (nonatomic) unsigned int clientConnectMs;
@property (nonatomic) unsigned int clientInfoMs;
@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic) unsigned int clientPostAuthMs;
@property (nonatomic) unsigned int clientSecureConnectionMs;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic) bool hasAudioOnly;
@property (nonatomic) bool hasClientAuthMs;
@property (nonatomic) bool hasClientBonjourMs;
@property (nonatomic) bool hasClientConnectMs;
@property (nonatomic) bool hasClientInfoMs;
@property (nonatomic, readonly) bool hasClientModel;
@property (nonatomic) bool hasClientPostAuthMs;
@property (nonatomic) bool hasClientSecureConnectionMs;
@property (nonatomic, readonly) bool hasClientVersion;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)clientAuthMs;
- (unsigned int)clientBonjourMs;
- (unsigned int)clientConnectMs;
- (unsigned int)clientInfoMs;
- (id)clientModel;
- (unsigned int)clientPostAuthMs;
- (unsigned int)clientSecureConnectionMs;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioOnly;
- (bool)hasClientAuthMs;
- (bool)hasClientBonjourMs;
- (bool)hasClientConnectMs;
- (bool)hasClientInfoMs;
- (bool)hasClientModel;
- (bool)hasClientPostAuthMs;
- (bool)hasClientSecureConnectionMs;
- (bool)hasClientVersion;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setClientAuthMs:(unsigned int)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (void)setClientInfoMs:(unsigned int)arg1;
- (void)setClientModel:(id)arg1;
- (void)setClientPostAuthMs:(unsigned int)arg1;
- (void)setClientSecureConnectionMs:(unsigned int)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setHasClientAuthMs:(bool)arg1;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setHasClientInfoMs:(bool)arg1;
- (void)setHasClientPostAuthMs:(bool)arg1;
- (void)setHasClientSecureConnectionMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
