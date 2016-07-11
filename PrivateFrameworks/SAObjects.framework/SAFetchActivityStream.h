/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFetchActivityStream : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSNumber *limit;
@property (nonatomic, copy) NSArray *streamTypes;
@property (nonatomic, copy) NSString *taskType;
@property (nonatomic, copy) NSDate *toDate;
@property (nonatomic, copy) NSString *visibility;

+ (id)fetchActivityStream;
+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)activityType;
- (id)encodedClassName;
- (id)fromDate;
- (id)groupIdentifier;
- (id)limit;
- (bool)requiresResponse;
- (void)setActivityType:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setStreamTypes:(id)arg1;
- (void)setTaskType:(id)arg1;
- (void)setToDate:(id)arg1;
- (void)setVisibility:(id)arg1;
- (id)streamTypes;
- (id)taskType;
- (id)toDate;
- (id)visibility;

@end
