/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBestAppSuggestionManager : NSObject {
    int  _bestAppNotificationCount;
    NSXPCConnection * _connection;
    <LSBestAppSuggestionManagerDelegate> * _delegate;
    LSBestAppSuggestion * _lastBestAppSuggestion;
    bool  _listeningForBestAppSuggestions;
}

@property (retain) NSXPCConnection *connection;
@property <LSBestAppSuggestionManagerDelegate> *delegate;

- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;

@end
