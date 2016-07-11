/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoSockPuppetObject : PBCodable <NSCopying> {
    SPProtoCacheMessage * _cacheMessage;
    struct { 
        unsigned int ndouble : 1; 
        unsigned int nint64 : 1; 
        unsigned int nuint64 : 1; 
        unsigned int nfloat : 1; 
        unsigned int nint32 : 1; 
        unsigned int nuint32 : 1; 
        unsigned int subtype : 1; 
        unsigned int nbool : 1; 
    }  _has;
    NSString * _key;
    bool  _nbool;
    double  _ndouble;
    float  _nfloat;
    int  _nint32;
    long long  _nint64;
    unsigned int  _nuint32;
    unsigned long long  _nuint64;
    NSData * _object;
    int  _subtype;
    NSString * _text;
    int  _type;
}

@property (nonatomic, retain) SPProtoCacheMessage *cacheMessage;
@property (nonatomic, readonly) bool hasCacheMessage;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasNbool;
@property (nonatomic) bool hasNdouble;
@property (nonatomic) bool hasNfloat;
@property (nonatomic) bool hasNint32;
@property (nonatomic) bool hasNint64;
@property (nonatomic) bool hasNuint32;
@property (nonatomic) bool hasNuint64;
@property (nonatomic, readonly) bool hasObject;
@property (nonatomic) bool hasSubtype;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool nbool;
@property (nonatomic) double ndouble;
@property (nonatomic) float nfloat;
@property (nonatomic) int nint32;
@property (nonatomic) long long nint64;
@property (nonatomic) unsigned int nuint32;
@property (nonatomic) unsigned long long nuint64;
@property (nonatomic, retain) NSData *object;
@property (nonatomic) int subtype;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)cacheMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheMessage;
- (bool)hasKey;
- (bool)hasNbool;
- (bool)hasNdouble;
- (bool)hasNfloat;
- (bool)hasNint32;
- (bool)hasNint64;
- (bool)hasNuint32;
- (bool)hasNuint64;
- (bool)hasObject;
- (bool)hasSubtype;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)nbool;
- (double)ndouble;
- (float)nfloat;
- (int)nint32;
- (long long)nint64;
- (unsigned int)nuint32;
- (unsigned long long)nuint64;
- (id)object;
- (bool)readFrom:(id)arg1;
- (void)setCacheMessage:(id)arg1;
- (void)setHasNbool:(bool)arg1;
- (void)setHasNdouble:(bool)arg1;
- (void)setHasNfloat:(bool)arg1;
- (void)setHasNint32:(bool)arg1;
- (void)setHasNint64:(bool)arg1;
- (void)setHasNuint32:(bool)arg1;
- (void)setHasNuint64:(bool)arg1;
- (void)setHasSubtype:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNbool:(bool)arg1;
- (void)setNdouble:(double)arg1;
- (void)setNfloat:(float)arg1;
- (void)setNint32:(int)arg1;
- (void)setNint64:(long long)arg1;
- (void)setNuint32:(unsigned int)arg1;
- (void)setNuint64:(unsigned long long)arg1;
- (void)setObject:(id)arg1;
- (void)setSubtype:(int)arg1;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (int)subtype;
- (id)text;
- (int)type;
- (void)writeTo:(id)arg1;

@end
