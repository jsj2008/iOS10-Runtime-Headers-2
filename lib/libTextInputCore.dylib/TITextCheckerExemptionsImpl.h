/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TITextCheckerExemptionsImpl : NSObject {
    NSSet * _addressBookTokens;
    id /* block */  _contactObserver;
    unsigned long long  _observerAssertionCount;
    id  _userDictionaryObserver;
    NSSet * _userDictionaryTokens;
}

@property (retain) NSSet *addressBookTokens;
@property (retain) NSSet *userDictionaryTokens;

+ (id)sharedTextCheckerExemptionsImpl;

- (void)addObserverAssertion;
- (id)addressBookTokens;
- (void)dealloc;
- (void)removeObserverAssertion;
- (void)setAddressBookTokens:(id)arg1;
- (void)setUserDictionaryTokens:(id)arg1;
- (bool)stringIsExemptFromChecker:(id)arg1;
- (id)userDictionaryTokens;

@end
