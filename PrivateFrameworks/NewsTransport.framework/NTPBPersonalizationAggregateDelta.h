/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {
    double  _defaultClicks;
    double  _defaultImpressions;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _events;
    NSString * _featureKey;
    struct { 
        unsigned int defaultClicks : 1; 
        unsigned int defaultImpressions : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) double defaultClicks;
@property (nonatomic) double defaultImpressions;
@property (nonatomic, readonly) unsigned int*events;
@property (nonatomic, readonly) unsigned long long eventsCount;
@property (nonatomic, retain) NSString *featureKey;
@property (nonatomic) bool hasDefaultClicks;
@property (nonatomic) bool hasDefaultImpressions;
@property (nonatomic, readonly) bool hasFeatureKey;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void)addEvents:(unsigned int)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)defaultClicks;
- (double)defaultImpressions;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int*)events;
- (unsigned int)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (id)featureKey;
- (bool)hasDefaultClicks;
- (bool)hasDefaultImpressions;
- (bool)hasFeatureKey;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDefaultClicks:(double)arg1;
- (void)setDefaultImpressions:(double)arg1;
- (void)setEvents:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setFeatureKey:(id)arg1;
- (void)setHasDefaultClicks:(bool)arg1;
- (void)setHasDefaultImpressions:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)addAction:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (bool)applyToAggregate:(id)arg1 withTreatment:(id)arg2;
- (void)applyToDelta:(id)arg1;
- (void)fc_swizzle_addEvents:(unsigned int)arg1;

@end
