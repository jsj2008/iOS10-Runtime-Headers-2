/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {
    int  _backgroundReadersWaiting;
    NSMutableSet * _cache;
    unsigned long long  _cacheGeneration;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    unsigned long long  _cacheSize;
    NSMapTable * _checkoutMap;
    NSObject<OS_dispatch_queue> * _checkoutQueue;
    <HDSQLiteDatabasePoolDelegate> * _delegate;
    unsigned long long  _maxConcurrentBackgroundReaders;
    unsigned long long  _maxConcurrentWriters;
    NSObject<OS_dispatch_semaphore> * _readerSemaphore;
    NSObject<OS_dispatch_semaphore> * _writerSemaphore;
    int  _writersWaiting;
}

@property (readonly) unsigned long long backgroundReadersWaiting;
@property unsigned long long cacheSize;
@property (readonly, copy) NSString *debugDescription;
@property <HDSQLiteDatabasePoolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long maxConcurrentBackgroundReaders;
@property (readonly) unsigned long long maxConcurrentWriters;
@property (readonly) Class superclass;
@property (readonly) unsigned long long writersWaiting;

- (void).cxx_destruct;
- (id)_databaseWithType:(long long)arg1 error:(id*)arg2;
- (id)_semaphoreForDatabaseType:(long long)arg1 waitCounter:(int**)arg2;
- (unsigned long long)backgroundReadersWaiting;
- (unsigned long long)cacheSize;
- (void)checkInDatabase:(id)arg1 closeImmediately:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)flush;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (unsigned long long)maxConcurrentBackgroundReaders;
- (unsigned long long)maxConcurrentWriters;
- (id)readerDatabaseWithPriority:(long long)arg1 error:(id*)arg2;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)writerDatabaseWithError:(id*)arg1;
- (unsigned long long)writersWaiting;

@end
