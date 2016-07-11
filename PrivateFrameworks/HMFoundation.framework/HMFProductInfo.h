/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFProductInfo : NSObject <NSSecureCoding> {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    long long  _productClass;
    long long  _productPlatform;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly) long long productClass;
@property (nonatomic, readonly) long long productPlatform;

+ (struct { long long x1; long long x2; long long x3; })decodeOperatingSystemVersionWithCoder:(id)arg1;
+ (void)encodeOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1 withCoder:(id)arg2;
+ (id)productInfo;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg3;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (long long)productClass;
- (long long)productPlatform;
- (id)shortDescription;

@end
