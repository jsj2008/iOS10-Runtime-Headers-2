/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int placeTypeLimit : 1; 
        unsigned int preserveOriginalLocation : 1; 
    }  _has;
    NSMutableArray * _locations;
    int  _placeTypeLimit;
    bool  _preserveOriginalLocation;
}

@property (nonatomic) bool hasPlaceTypeLimit;
@property (nonatomic) bool hasPreserveOriginalLocation;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic) int placeTypeLimit;
@property (nonatomic) bool preserveOriginalLocation;

+ (Class)locationType;

- (int)StringAsPlaceTypeLimit:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceTypeLimit;
- (bool)hasPreserveOriginalLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (int)placeTypeLimit;
- (id)placeTypeLimitAsString:(int)arg1;
- (bool)preserveOriginalLocation;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceTypeLimit:(bool)arg1;
- (void)setHasPreserveOriginalLocation:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (void)setPreserveOriginalLocation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
