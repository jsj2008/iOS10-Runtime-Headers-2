/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFTechnologyEvent : NSObject <NSSecureCoding> {
    unsigned int  _technology;
    unsigned char  _valueAddedServiceMode;
}

@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned char valueAddedServiceMode;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (unsigned int)technology;
- (unsigned char)valueAddedServiceMode;

@end
