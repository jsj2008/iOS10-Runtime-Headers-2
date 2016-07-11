/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachedFetchRequestThunk : NSObject {
    NSSQLiteStatement * _limitedStatement;
    NSSQLiteStatement * _unlimitedStatement;
}

@property (nonatomic, retain) NSSQLiteStatement *limitedStatement;
@property (nonatomic, retain) NSSQLiteStatement *unlimitedStatement;

- (void)clearCaches;
- (void)dealloc;
- (id)limitedStatement;
- (void)setLimitedStatement:(id)arg1;
- (void)setUnlimitedStatement:(id)arg1;
- (id)unlimitedStatement;

@end
