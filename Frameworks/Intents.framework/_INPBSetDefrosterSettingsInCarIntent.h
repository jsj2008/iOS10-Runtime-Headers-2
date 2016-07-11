/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <NSCopying> {
    int  _defroster;
    bool  _enable;
    struct { 
        unsigned int defroster : 1; 
        unsigned int enable : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int defroster;
@property (nonatomic) bool enable;
@property (nonatomic) bool hasDefroster;
@property (nonatomic) bool hasEnable;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)defroster;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enable;
- (bool)hasDefroster;
- (bool)hasEnable;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDefroster:(int)arg1;
- (void)setEnable:(bool)arg1;
- (void)setHasDefroster:(bool)arg1;
- (void)setHasEnable:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
