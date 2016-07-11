/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOpenInAppActivity : UIActivity <LSOpenResourceOperationDelegate> {
    bool  _actionIsImport;
    LSApplicationProxy * _applicationProxy;
    LSDocumentProxy * _documentProxy;
    bool  _sourceIsManaged;
}

@property (nonatomic) bool actionIsImport;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) LSDocumentProxy *documentProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;

+ (id)activitiesForFileURL:(id)arg1 sourceIsManaged:(bool)arg2;
+ (long long)activityCategory;
+ (id)openInActivitiesForItems:(id)arg1 sourceIsManaged:(bool)arg2;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (id)_nonImportActivityTitle;
- (void)_performOpenWithUserInfo:(id)arg1;
- (bool)actionIsImport;
- (id)activityTitle;
- (id)activityType;
- (id)applicationProxy;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)documentProxy;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 sourceIsManaged:(bool)arg3 actionIsImport:(bool)arg4;
- (void)performActivity;
- (void)setActionIsImport:(bool)arg1;
- (void)setApplicationProxy:(id)arg1;
- (void)setDocumentProxy:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
