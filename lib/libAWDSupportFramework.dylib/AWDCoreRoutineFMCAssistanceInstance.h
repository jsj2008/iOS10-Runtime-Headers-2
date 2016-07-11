/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCAssistanceInstance : PBCodable <NSCopying> {
    int  _assistanceType;
    int  _assistanceValue;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int assistanceType : 1; 
        unsigned int assistanceValue : 1; 
        unsigned int uiPlacement : 1; 
    }  _has;
    NSString * _parkingId;
    unsigned long long  _timestamp;
    int  _uiPlacement;
}

@property (nonatomic) int assistanceType;
@property (nonatomic) int assistanceValue;
@property (nonatomic) bool hasAssistanceType;
@property (nonatomic) bool hasAssistanceValue;
@property (nonatomic, readonly) bool hasParkingId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUiPlacement;
@property (nonatomic, retain) NSString *parkingId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int uiPlacement;

- (int)assistanceType;
- (int)assistanceValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssistanceType;
- (bool)hasAssistanceValue;
- (bool)hasParkingId;
- (bool)hasTimestamp;
- (bool)hasUiPlacement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parkingId;
- (bool)readFrom:(id)arg1;
- (void)setAssistanceType:(int)arg1;
- (void)setAssistanceValue:(int)arg1;
- (void)setHasAssistanceType:(bool)arg1;
- (void)setHasAssistanceValue:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUiPlacement:(bool)arg1;
- (void)setParkingId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUiPlacement:(int)arg1;
- (unsigned long long)timestamp;
- (int)uiPlacement;
- (void)writeTo:(id)arg1;

@end
