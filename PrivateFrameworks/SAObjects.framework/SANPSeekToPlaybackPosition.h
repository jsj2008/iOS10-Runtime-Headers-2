/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSeekToPlaybackPosition : SADomainCommand

@property (nonatomic, copy) NSNumber *positionInMilliseconds;

+ (id)seekToPlaybackPosition;
+ (id)seekToPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)positionInMilliseconds;
- (bool)requiresResponse;
- (void)setPositionInMilliseconds:(id)arg1;

@end
