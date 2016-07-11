/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDataStoreReceipt : NSObject {
    NSArray * _addedObjects;
    NSArray * _removedObjects;
    NSArray * _replacedObjects;
}

@property (nonatomic, readonly) NSArray *addedObjects;
@property (nonatomic, readonly) NSArray *removedObjects;
@property (nonatomic, readonly) NSArray *replacedObjects;

+ (id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 removedObjects:(id)arg3;

- (void).cxx_destruct;
- (id)addedObjects;
- (bool)hasChanges;
- (id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 removedObjects:(id)arg3;
- (id)removedObjects;
- (id)replacedObjects;

@end
