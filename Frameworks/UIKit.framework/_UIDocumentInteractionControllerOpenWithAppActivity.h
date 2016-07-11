/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentInteractionControllerOpenWithAppActivity : UIActivity {
    NSString * _activityType;
    bool  _appIsOwner;
    LSApplicationProxy * _appProxy;
    UIDocumentInteractionController * _documentInteractionController;
}

@property (nonatomic, readonly) LSApplicationProxy *appProxy;
@property (nonatomic) UIDocumentInteractionController *documentInteractionController;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_shouldOpenInPlace;
- (id)activityTitle;
- (id)activityType;
- (id)appProxy;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)documentInteractionController;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2 appIsOwner:(bool)arg3;
- (void)performActivity;
- (void)setDocumentInteractionController:(id)arg1;

@end
