/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFDBFeedSegment : NSManagedObject

@property (nonatomic) unsigned long long bottom;
@property (nonatomic, retain) NSData *ckCursor;
@property (nonatomic, retain) NSNumber *feedItemCount;
@property (nonatomic, readonly) FCFeedRange *feedRange;
@property (nonatomic) bool reachedNext;
@property (nonatomic) unsigned long long top;

- (void)awakeFromFetch;
- (id)description;
- (id)feedRange;
- (void)willTurnIntoFault;

@end
