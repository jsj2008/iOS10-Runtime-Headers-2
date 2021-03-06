/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRConfigurationResponse : TRNearbyServicesCommunicationAbstractMessage {
    bool  _needsLanguage;
    bool  _needsNetwork;
    bool  _needsRegion;
    NSSet * _unauthenticatedAccountServices;
}

@property (nonatomic) bool needsLanguage;
@property (nonatomic) bool needsNetwork;
@property (nonatomic) bool needsRegion;
@property (nonatomic, retain) NSSet *unauthenticatedAccountServices;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsLanguage;
- (bool)needsNetwork;
- (bool)needsRegion;
- (void)setNeedsLanguage:(bool)arg1;
- (void)setNeedsNetwork:(bool)arg1;
- (void)setNeedsRegion:(bool)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (id)unauthenticatedAccountServices;

@end
