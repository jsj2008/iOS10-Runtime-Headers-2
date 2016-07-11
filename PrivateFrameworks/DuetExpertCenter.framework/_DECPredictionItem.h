/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionItem : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    _DECItem * _item;
}

@property (nonatomic) double confidence;
@property (nonatomic, readonly) _DECItem *item;

+ (id)predictionItemWithItem:(id)arg1 confidence:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 confidence:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)setConfidence:(double)arg1;

@end
