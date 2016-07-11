/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactValue : PBCodable <NSCopying> {
    _INPBContactHandle * _contactHandle;
    NSString * _customIdentifier;
    NSString * _firstName;
    NSString * _fullName;
    _INPBImageValue * _image;
    NSString * _lastName;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBContactHandle *contactHandle;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) bool hasContactHandle;
@property (nonatomic, readonly) bool hasCustomIdentifier;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)contactHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)fullName;
- (bool)hasContactHandle;
- (bool)hasCustomIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasImage;
- (bool)hasLastName;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactHandle:(id)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
