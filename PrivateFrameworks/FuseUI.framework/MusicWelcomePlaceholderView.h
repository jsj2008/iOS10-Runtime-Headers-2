/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicWelcomePlaceholderView : UIView <MusicClientContextConsuming> {
    UIImageView * _backgroundImageView;
    MusicClientContext * _clientContext;
    double  _logoImageTopInset;
    UIImageView * _logoImageView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleUpdatableAssetsControllerDidChangeNotification:(id)arg1;
- (void)_reloadWelcomePlaceholderImages;
- (id)_resourceNameForWelcomeScreenImageConfiguration:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setClientContext:(id)arg1;

@end
