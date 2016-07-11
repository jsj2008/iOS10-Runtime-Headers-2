/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIButtonViewElement : SKUIViewElement {
    bool  _autoIncrementCount;
    NSString * _badgeResourceName;
    bool  _bigHitButton;
    double  _bigHitSize;
    NSString * _bundleIdentifier;
    SKUIViewElementText * _buttonText;
    long long  _buttonViewSubType;
    long long  _buttonViewType;
    SKUIBuyButtonDescriptor * _buyButtonDescriptor;
    NSString * _confirmationText;
    long long  _dataPlaybackId;
    bool  _disabledButSelectable;
    BOOL  _enabled;
    long long  _itemIdentifier;
    NSString * _nonToggledText;
    NSString * _playItemIdentifier;
    bool  _selected;
    bool  _showOnDemand;
    NSString * _sizeVariant;
    SKUIStoreIdentifier * _storeIdentifier;
    NSString * _toggleItemIdentfier;
    NSString * _toggleItemIdentifier;
    bool  _toggled;
    NSString * _toggledText;
    NSString * _variantIdentifier;
    IKDOMElement * _xml;
}

@property (nonatomic, readonly) SKUIImageViewElement *additionalButtonImage;
@property (nonatomic, readonly) bool autoIncrementCount;
@property (nonatomic, readonly) NSString *badgeResourceName;
@property (getter=isBigHitButton, nonatomic, readonly) bool bigHitButton;
@property (nonatomic, readonly) double bigHitSize;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) SKUIImageViewElement *buttonImage;
@property (nonatomic, readonly) SKUIViewElementText *buttonText;
@property (nonatomic, readonly) IKViewElementStyle *buttonTitleStyle;
@property (nonatomic, readonly) long long buttonViewSubType;
@property (nonatomic, readonly) long long buttonViewType;
@property (nonatomic, readonly) SKUIBuyButtonDescriptor *buyButtonDescriptor;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) long long dataPlaybackId;
@property (getter=isDisabledButSelectable, nonatomic, readonly) bool disabledButSelectable;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *nonToggledText;
@property (nonatomic, readonly) NSString *playItemIdentifier;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) bool showOnDemand;
@property (nonatomic, readonly) NSString *sizeVariant;
@property (nonatomic, readonly) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic, readonly) NSString *toggledText;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)additionalButtonImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)autoIncrementCount;
- (id)badgeResourceName;
- (double)bigHitSize;
- (id)bundleIdentifier;
- (id)buttonImage;
- (id)buttonText;
- (id)buttonTitleStyle;
- (long long)buttonViewSubType;
- (long long)buttonViewType;
- (id)buyButtonDescriptor;
- (id)confirmationText;
- (long long)dataPlaybackId;
- (void)dealloc;
- (id)description;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isBigHitButton;
- (bool)isDisabledButSelectable;
- (bool)isEnabled;
- (bool)isSelected;
- (bool)isToggled;
- (long long)itemIdentifier;
- (id)nonToggledText;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;
- (id)playItemIdentifier;
- (void)setToggled:(bool)arg1;
- (bool)showOnDemand;
- (id)sizeVariant;
- (id)storeIdentifier;
- (id)toggleItemIdentifier;
- (id)toggledText;
- (id)variantIdentifier;

@end