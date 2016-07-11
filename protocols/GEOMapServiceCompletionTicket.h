/* Generated by RuntimeBrowser.
 */

@protocol GEOMapServiceCompletionTicket <NSObject>

@required

- (void)applyToSuggestionEntry:(GEORPSuggestionEntry *)arg1 withAutocompleteSearchResultMuid:(unsigned long long)arg2;
- (void)applyToSuggestionList:(GEORPSuggestionList *)arg1;
- (void)cancel;
- (bool)isRapEnabled;
- (bool)matchesFragment:(NSString *)arg1;
- (NSDictionary *)responseUserInfo;
- (void)submitWithAutoCompletionHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOCompletion> *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
