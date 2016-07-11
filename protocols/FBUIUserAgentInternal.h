/* Generated by RuntimeBrowser.
 */

@protocol FBUIUserAgentInternal <FBUIUserAgent>

@required

- (bool)isSystemApp;
- (FBSDisplay *)mainDisplay;
- (FBSSerialQueue *)mainQueue;
- (FBSScene *)mainScene;
- (<FBUIProcessManagerInternal> *)processManager;
- (<FBUISceneManager> *)sceneManager;
- (void)setSystemApp:(bool)arg1;

@end
