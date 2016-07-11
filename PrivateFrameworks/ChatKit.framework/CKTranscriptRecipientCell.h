/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptRecipientCell : UITableViewCell {
    CKAvatarView * _contactAvatarView;
    UILabel * _handleLabel;
    double  _margin;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) CKAvatarView *contactAvatarView;
@property (nonatomic, retain) UILabel *handleLabel;
@property (nonatomic) double margin;
@property (nonatomic, retain) UILabel *nameLabel;

+ (id)identifier;
+ (double)marginWidth;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (id)contactAvatarView;
- (id)handleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)margin;
- (id)nameLabel;
- (void)setContactAvatarView:(id)arg1;
- (void)setHandleLabel:(id)arg1;
- (void)setMargin:(double)arg1;
- (void)setNameLabel:(id)arg1;

@end