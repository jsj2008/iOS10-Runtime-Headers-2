/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRaiseGesture : NSObject {
    SEL  _action;
    bool  _enabled;
    CMGestureManager * _gestureManager;
    long long  _gestureState;
    bool  _proximityState;
    id  _target;
    int  proximityToken;
}

@property (nonatomic) SEL action;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) CMGestureManager *gestureManager;
@property (nonatomic) long long gestureState;
@property (nonatomic) bool proximityState;
@property (getter=isRecognized, nonatomic, readonly) bool recognized;
@property (nonatomic) id target;

+ (bool)isRaiseGestureEnabled;
+ (bool)isRaiseGestureSupported;

- (void).cxx_destruct;
- (SEL)action;
- (void)dealloc;
- (id)gestureManager;
- (long long)gestureState;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (bool)isRecognized;
- (bool)proximityState;
- (void)proximityStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureManager:(id)arg1;
- (void)setGestureState:(long long)arg1;
- (void)setProximityMonitoringEnabled:(bool)arg1;
- (void)setProximityState:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
