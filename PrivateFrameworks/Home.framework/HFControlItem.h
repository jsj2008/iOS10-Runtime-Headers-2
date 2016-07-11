/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlItem : HFItem <NSCopying> {
    NSSet * _characteristicTypes;
    NSDictionary * _displayResults;
    <HFAggregatedCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) NSSet *characteristicTypes;
@property (nonatomic, readonly) NSDictionary *displayResults;
@property (nonatomic, readonly) <HFAggregatedCharacteristicValueSource> *valueSource;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicTypes;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayResults;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)normalizedCharacteristicValuesForValues:(id)arg1;
- (id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (long long)sortPriority;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueSource;
- (id)writeValue:(id)arg1;

@end
