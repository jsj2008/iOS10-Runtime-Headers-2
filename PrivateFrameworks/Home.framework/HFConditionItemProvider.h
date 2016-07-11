/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFConditionItemProvider : HFItemProvider {
    NSMutableSet * _conditionItems;
    bool  _includeSuggestions;
    HFTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) NSMutableSet *conditionItems;
@property (nonatomic, readonly) bool includeSuggestions;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_suggestedConditionBuilders;
- (id)conditionItems;
- (bool)includeSuggestions;
- (id)initWithHome:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 includeSuggestions:(bool)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setConditionItems:(id)arg1;
- (id)triggerBuilder;

@end
