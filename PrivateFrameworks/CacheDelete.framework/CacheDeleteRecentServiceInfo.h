/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteRecentServiceInfo : CacheDeleteRecent <NSCopying, NSSecureCoding> {
    NSDictionary * diagnostics;
    struct { 
        double timestamp; 
        unsigned long long amount; 
    }  urgencies;
}

+ (id)cacheDeleteRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 pushed:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountAtUrgency:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticsAtUrgency:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAmount:(id)arg1 atUrgency:(int)arg2 pushed:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)log;
- (bool)updateAmount:(id)arg1 atUrgency:(int)arg2;
- (void)updateDiagnostics:(id)arg1 atUrgency:(int)arg2;
- (bool)validate:(double)arg1 atUrgency:(int)arg2;

@end
