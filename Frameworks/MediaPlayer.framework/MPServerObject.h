/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObject : NSObject {
    struct { unsigned int x1[8]; } * _clientAuditToken;
    int  _clientPID;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; }*clientAuditToken;
@property (nonatomic, readonly) int clientPID;

+ (id)_center;

- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)_registerNotificationsForSelectors;
- (struct { unsigned int x1[8]; }*)clientAuditToken;
- (int)clientPID;
- (id)init;

@end
