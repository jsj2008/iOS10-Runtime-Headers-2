/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECABHelper : NSObject {
    NSDictionary * _abGroupContents;
    NSString * _groupIdentifier;
}

@property (nonatomic, readonly) NSDictionary *abGroupContents;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (unsigned long long)cachedSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)incrementalSaltedIndex:(unsigned long long)arg1;
+ (unsigned char)indexForDevice;
+ (void)initialize;
+ (unsigned long long)randomSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)saltedIndex:(unsigned long long)arg1;
+ (void)setDefaultDeviceIndexPolicy;
+ (void)setIndexForDevice:(id /* block */)arg1;
+ (void)setStaticIndexForDevice:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)abGroupContents;
- (id)groupIdentifier;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssetContents:(id)arg1;
- (id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2;

@end
