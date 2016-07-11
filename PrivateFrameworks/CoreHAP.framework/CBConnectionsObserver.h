/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _central;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasStarted;
    ATVModel * _model;
}

@property CBCentralManager *central;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool hasStarted;
@property (readonly) unsigned long long hash;
@property (retain) ATVModel *model;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)central;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)cleanupWithError:(id*)arg1;
- (id)dispatchQueue;
- (int)getAvailableHAPConnections;
- (id)getStatus;
- (bool)hasStarted;
- (id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id*)arg3;
- (id)model;
- (void)setCentral:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)updateBleStatus:(struct BTRemoteContext { struct { int (*x_1_1_1)(); } x1; int (*x2)(); struct { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); } x3; struct _opaque_pthread_mutex_t { long long x_4_1_1; BOOL x_4_1_2[56]; } x4; struct BTSessionImpl {} *x5; struct BTLocalDeviceImpl {} *x6; struct BTPlatformParams { bool x_7_1_1; unsigned long long x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; float x_7_1_6; int x_7_1_7; float x_7_1_8; float x_7_1_9; float x_7_1_10; float x_7_1_11; } x7; struct BTStatus { unsigned long long x_8_1_1; unsigned long long x_8_1_2; unsigned long long x_8_1_3; unsigned long long x_8_1_4; unsigned long long x_8_1_5; unsigned long long x_8_1_6; unsigned long long x_8_1_7; unsigned long long x_8_1_8; unsigned long long x_8_1_9; unsigned long long x_8_1_10; unsigned long long x_8_1_11; unsigned long long x_8_1_12; unsigned long long x_8_1_13; unsigned long long x_8_1_14; unsigned long long x_8_1_15; unsigned long long x_8_1_16; bool x_8_1_17; bool x_8_1_18; bool x_8_1_19; } x8; bool x9; }*)arg1;

@end
