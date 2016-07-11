/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayLink : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long frameInterval;
@property (nonatomic, readonly) double heartbeatRate;
@property (nonatomic, readonly) double maximumRefreshRate;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (nonatomic, readonly) double minimumRefreshRate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) float preferredFrameRate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) id userInfo;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem { struct Display {} *x1; void *x2; SEL x3; void *x4; int x5; int x6; int x7; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_8_1_1; } x8; struct Condition { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_9_1_1; } x9; struct _opaque_pthread_t {} *x10; id x11; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x12; void*x13; float x14; void*x15; unsigned char x16; SEL x17; SEL x18; long doublex19; int x20; short x21; void*x22; long x23; void*x24; void*x25; SEL x26; SEL x27; long doublex28; int x29; short x30; void*x31; long x32; void*x33; void*x34; unsigned long x35; int x36; in void*x37; void*x38; void*x39; struct DisplayLink {} *x40; }*)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (double)duration;
- (long long)frameInterval;
- (double)heartbeatRate;
- (void)invalidate;
- (bool)isPaused;
- (double)maximumRefreshRate;
- (long long)minimumFrameDuration;
- (double)minimumRefreshRate;
- (float)preferredFrameRate;
- (long long)preferredFramesPerSecond;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameRate:(float)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (double)targetTimestamp;
- (double)timestamp;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)naui_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)rc_displayWithFrameInterval:(long long)arg1 handlerBlock:(id /* block */)arg2;

@end
