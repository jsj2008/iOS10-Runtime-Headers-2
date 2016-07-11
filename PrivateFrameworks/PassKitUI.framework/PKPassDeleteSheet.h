/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate> {
    UIActionSheet * _actionSheet;
    <PKPassDeleteDelegate> * _delegate;
    PKPassGroupView * _groupView;
    PKPassView * _passView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) PKPassGroupView *groupView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) PKPassView *passView;
@property (readonly) Class superclass;

+ (void)performPassbookDeleteWithView:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_registerForEnterBackgroundNotification;
- (void)_startAnimation;
- (void)_unregisterForEnterBackgroundNotification;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)finished:(bool)arg1;
- (void)forceDeleteAnimation;
- (id)groupView;
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;
- (id)passView;
- (void)setDelegate:(id)arg1;
- (void)showInView:(id)arg1;

@end
