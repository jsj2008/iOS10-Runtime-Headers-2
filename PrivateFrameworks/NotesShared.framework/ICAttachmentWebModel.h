/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentWebModel : ICAttachmentModel <WKNavigationDelegate, WKScriptMessageHandler> {
    id /* block */  _pendingFetchCompletionHandler;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ pendingFetchCompletionHandler;
@property (readonly) Class superclass;
@property (retain) WKWebView *webView;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)sharedWKProcessPool;

- (void).cxx_destruct;
- (void)didCancelPreviewGeneratorOperation;
- (void)downloadWebIcons:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMetadataFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)generateAsynchronousPreviews;
- (void)generatePreviews;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)hasPreviews;
- (bool)needToGeneratePreviews;
- (id /* block */)pendingFetchCompletionHandler;
- (id)rootURLFromURL:(id)arg1;
- (void)saveWebIcons:(id)arg1;
- (void)setPendingFetchCompletionHandler:(id /* block */)arg1;
- (void)setWebView:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)standardWebIconsForURL:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;

@end
