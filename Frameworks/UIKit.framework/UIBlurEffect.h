/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBlurEffect : UIVisualEffect {
    bool  _invertAutomaticStyle;
    long long  _style;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) bool _invertAutomaticStyle;
@property (nonatomic, readonly) long long _style;

+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(bool)arg3;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_invertAutomaticStyle;
- (bool)_isATVStyle;
- (long long)_style;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
