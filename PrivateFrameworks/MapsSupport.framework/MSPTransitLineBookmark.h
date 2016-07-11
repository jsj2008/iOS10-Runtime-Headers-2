/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {
    MSPTransitStorageLine * _transitLineStorage;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTransitLineStorage;
@property (nonatomic, retain) MSPTransitStorageLine *transitLineStorage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitLineStorage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTransitLineStorage:(id)arg1;
- (id)transitLineStorage;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
