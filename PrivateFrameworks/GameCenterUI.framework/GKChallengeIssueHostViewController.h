/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKChallengeIssueHostViewController : GKUIRemoteViewController <GKChallengeIssueHostProtocol> {
    GKHostedChallengeIssueController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKHostedChallengeIssueController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)challengeExtension;

- (id)contextForRequestIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)didFinishWithPlayerIDs:(id)arg1 message:(id)arg2;
- (void)remoteViewControllerIsCanceling;
- (void)setChallenge:(id)arg1 withPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(bool)arg4;
- (void)setDelegate:(id)arg1;

@end
