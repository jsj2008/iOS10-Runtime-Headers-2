/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLArchiveEntry : PLEntry {
    NSString * _crPath;
    bool  _systemTimeOffsetModified;
}

@property (nonatomic, readonly) NSString *compressedPath;
@property (nonatomic, readonly) NSString *crPath;
@property (readonly) NSDate *endDate;
@property (readonly) bool fullMode;
@property (nonatomic) long long mainDBSizeAtStart;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned long long numAttempts;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) bool removed;
@property (nonatomic, retain) NSDate *removedDate;
@property (nonatomic) long long stage;
@property (readonly) NSDate *startDate;
@property (nonatomic, readonly) bool syncedOff;
@property (nonatomic, retain) NSDate *syncedOffDate;
@property (nonatomic) double systemTimeOffset;
@property (readonly) bool systemTimeOffsetModified;
@property (readonly) NSString *uuid;

+ (id)entryKey;
+ (void)load;
+ (id)storageQueue;

- (void).cxx_destruct;
- (id)compressedPath;
- (id)crPath;
- (id)endDate;
- (bool)fullMode;
- (id)initEntryWithRawData:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 andUUID:(id)arg3;
- (void)log;
- (long long)mainDBSizeAtStart;
- (id)name;
- (unsigned long long)numAttempts;
- (id)path;
- (bool)removed;
- (id)removedDate;
- (void)setMainDBSizeAtStart:(long long)arg1;
- (void)setNumAttempts:(unsigned long long)arg1;
- (void)setRemovedDate:(id)arg1;
- (void)setStage:(long long)arg1;
- (void)setSyncedOffDate:(id)arg1;
- (void)setSystemTimeOffset:(double)arg1;
- (long long)stage;
- (id)startDate;
- (bool)syncedOff;
- (id)syncedOffDate;
- (double)systemTimeOffset;
- (bool)systemTimeOffsetModified;
- (id)uuid;

@end
