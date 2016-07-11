/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertTone : NSObject {
    TLSystemSound * _actualSound;
    unsigned int  _actualSoundID;
    TLSystemSound * _previewSound;
    unsigned int  _previewSoundID;
    NSURL * _soundFileURL;
    NSURL * _vibrationPatternFileURL;
}

@property (nonatomic, readonly) TLSystemSound *actualSound;
@property (nonatomic, readonly) TLSystemSound *previewSound;
@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) NSURL *vibrationPatternFileURL;

- (void).cxx_destruct;
- (id)actualSound;
- (id)initWithSoundFileURL:(id)arg1 vibrationPatternFileURL:(id)arg2 actualSoundID:(unsigned int)arg3 previewSoundID:(unsigned int)arg4;
- (id)previewSound;
- (id)soundFileURL;
- (id)vibrationPatternFileURL;

@end
