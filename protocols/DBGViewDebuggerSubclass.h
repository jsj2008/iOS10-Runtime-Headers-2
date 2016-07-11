/* Generated by RuntimeBrowser.
 */

@protocol DBGViewDebuggerSubclass <NSObject>

@required

+ (NSArray *)appWindows;
+ (NSString *)displayNameForView:(id)arg1;
+ (bool)isViewSubclass:(id)arg1;
+ (CALayer *)layerForView:(id)arg1;
+ (id)primaryWindowFromWindows:(NSArray *)arg1;
+ (double)screenBackingScaleForWindow:(id)arg1;
+ (NSString *)snapshotMethodForView:(id)arg1;
+ (NSData *)snapshotView:(id)arg1 errorString:(id*)arg2;
+ (id)windowContentViewForWindow:(id)arg1;

@end
