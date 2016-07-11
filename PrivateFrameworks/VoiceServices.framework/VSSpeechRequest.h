/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechRequest : NSObject <NSSecureCoding> {
    NSAttributedString * _attributedText;
    unsigned int  _audioQueueFlags;
    unsigned int  _audioSessionID;
    bool  _audioSessionIDIsValid;
    NSString * _clientBundleIdentifier;
    long long  _footprint;
    long long  _gender;
    NSString * _languageCode;
    bool  _maintainsInput;
    NSURL * _outputPath;
    id /* block */  _pauseHandler;
    double  _pitch;
    double  _rate;
    NSURL * _resourceListURL;
    NSURL * _resourceSearchPathURL;
    id /* block */  _stopHandler;
    NSString * _text;
    bool  _useCustomVoice;
    NSString * _voiceName;
    long long  _voiceType;
    double  _volume;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool audioSessionIDIsValid;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) bool maintainsInput;
@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) id /* block */ pauseHandler;
@property (nonatomic) double pitch;
@property (nonatomic) double rate;
@property (nonatomic, copy) NSURL *resourceListURL;
@property (nonatomic, copy) NSURL *resourceSearchPathURL;
@property (nonatomic, copy) id /* block */ stopHandler;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool useCustomVoice;
@property (nonatomic, copy) NSString *voiceName;
@property (nonatomic) long long voiceType;
@property (nonatomic) double volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedText;
- (unsigned int)audioQueueFlags;
- (unsigned int)audioSessionID;
- (bool)audioSessionIDIsValid;
- (id)clientBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)initWithCoder:(id)arg1;
- (id)languageCode;
- (bool)maintainsInput;
- (id)outputPath;
- (id /* block */)pauseHandler;
- (double)pitch;
- (double)rate;
- (id)resourceListURL;
- (id)resourceSearchPathURL;
- (void)setAttributedText:(id)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(bool)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMaintainsInput:(bool)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setPauseHandler:(id /* block */)arg1;
- (void)setPitch:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setResourceListURL:(id)arg1;
- (void)setResourceSearchPathURL:(id)arg1;
- (void)setStopHandler:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setUseCustomVoice:(bool)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setVoiceType:(long long)arg1;
- (void)setVolume:(double)arg1;
- (id /* block */)stopHandler;
- (id)text;
- (bool)useCustomVoice;
- (id)voiceName;
- (long long)voiceType;
- (double)volume;

@end
