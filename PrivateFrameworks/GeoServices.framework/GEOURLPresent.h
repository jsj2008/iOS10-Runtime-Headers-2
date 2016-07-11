/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLPresent : PBCodable <NSCopying> {
    NSMutableArray * _items;
    GEOURLOptions * _options;
}

@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) GEOURLOptions *options;

+ (Class)itemType;

- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOptions;
- (unsigned long long)hash;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end