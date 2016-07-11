/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying> {
    GEODownloadMetadata * _metadata;
    GEOSupportedTileSets * _tileSets;
}

@property (nonatomic, retain) GEODownloadMetadata *metadata;
@property (nonatomic, retain) GEOSupportedTileSets *tileSets;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)tileSets;
- (void)writeTo:(id)arg1;

@end
