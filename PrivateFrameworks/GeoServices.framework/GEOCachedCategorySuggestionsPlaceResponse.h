/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _language;
    GEOPDPlaceResponse * _response;
    NSString * _sourceURL;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) GEOPDPlaceResponse *response;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasLanguage;
- (bool)hasResponse;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setCountryCode:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
