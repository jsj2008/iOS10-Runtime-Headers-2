/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

@interface NRGResourceCache : NSObject

+ (id)cacheDirPathForAppBundleID:(id)arg1 withSentCache:(bool)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)arg1;
+ (id)cachePathForIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cachePathForSendableIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)deleteStaleSendablesWithPairedDeviceStorePath:(id)arg1;
+ (id)iconCacheDirPathForAppBundleID:(id)arg1 withSentCache:(bool)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1;
+ (void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)invalidateBundleID:(id)arg1 withSentCache:(bool)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)invalidatePairedDevice:(id)arg1;
+ (bool)isIconSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (bool)isResourceSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)markIconAsSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(bool)arg5;
+ (void)markResourceAsSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(bool)arg5;
+ (id)resourceCacheDirPathForAppBundleID:(id)arg1 withSentCache:(bool)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)resourceForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)resourcePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)sendableIconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)sendableIconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1;
+ (id)sentCachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)sentCachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)setResource:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)setSendableIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3;

@end
