/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)get;

- (id)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(bool)arg3;
- (id)getLocalizedCallerIdLabelForRecord:(void*)arg1 withMultiValueId:(id)arg2 withCallerIdIsEmail:(bool)arg3;
- (id)getPersonsNameForRecord:(void*)arg1;
- (id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(bool)arg3;
- (bool)isABContactASuggestion;

@end
