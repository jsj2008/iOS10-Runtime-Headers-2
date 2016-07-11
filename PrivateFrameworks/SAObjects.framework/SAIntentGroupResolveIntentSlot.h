/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *intentSlotKeyPath;

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentSlotKeyPath;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;
- (void)setIntentSlotKeyPath:(id)arg1;

@end
