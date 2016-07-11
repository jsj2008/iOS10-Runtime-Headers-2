/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAutomaticReadingListAppExtensionItem : WBSAutomaticReadingListItem {
    UIImage * _profileImage;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *profileImage;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)bestOriginatorProfileImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)biggerOriginatorProfileImageURL;
- (id)continuousBannerDisplayString;
- (id)continuousBannerTitle;
- (id)displayString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })emphasizedTextRange;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (id)originatorProfileImageURL;
- (id)originatorProfileURL;
- (id)profileImage;
- (void)setProfileImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)socialSource;
- (id)sourceRecordURL;
- (id)title;

@end
