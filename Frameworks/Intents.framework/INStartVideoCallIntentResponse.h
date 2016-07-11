/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartVideoCallIntentResponse : INIntentResponse {
    _INPBStartVideoCallIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic) long long audioRoute;
@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSArray *targetContacts;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_responseMessagePBRepresentation;
- (long long)audioRoute;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setStatus:(id)arg1;
- (void)setTargetContacts:(id)arg1;
- (id)status;
- (id)targetContacts;

@end
