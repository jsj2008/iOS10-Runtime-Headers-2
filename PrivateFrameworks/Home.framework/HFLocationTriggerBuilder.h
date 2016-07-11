/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationTriggerBuilder : HFTriggerBuilder {
    CLCircularRegion * _region;
}

@property (nonatomic, copy) CLCircularRegion *region;

+ (bool)supportsConditions;

- (void).cxx_destruct;
- (id)_performValidation;
- (id)_updateRegion;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)region;
- (void)setRegion:(id)arg1;

@end
