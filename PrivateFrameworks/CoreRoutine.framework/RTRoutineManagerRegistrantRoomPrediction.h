/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerRegistrantRoomPrediction : RTRoutineManagerRegistrant {
    id /* block */  _predictedRoomsHandler;
    bool  _registered;
}

@property (nonatomic, copy) id /* block */ predictedRoomsHandler;
@property (nonatomic) bool registered;

- (void).cxx_destruct;
- (void)onPredictedRooms:(id)arg1 error:(id)arg2;
- (id /* block */)predictedRoomsHandler;
- (bool)registered;
- (void)setPredictedRoomsHandler:(id /* block */)arg1;
- (void)setRegistered:(bool)arg1;
- (id)startMonitoringForPredictedRoomsWithHandler:(id /* block */)arg1;
- (id)stopMonitoringForPredictedRooms;

@end
