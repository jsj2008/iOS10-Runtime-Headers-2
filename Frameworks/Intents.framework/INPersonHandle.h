/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPersonHandle : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (id)value;

@end
