/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLFacePullSupport : NSObject {
    <PLSyncableAsset> * _currentAsset;
    NSMutableSet * _deletedFaces;
    NSMutableSet * _existingFaces;
    <PLSyncContext> * _syncContext;
}

+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inPhotoLibrary:(id)arg3;

- (void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)_applyRejectedPeopleFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)_deletePushedFacesNotIn:(id)arg1;
- (id)_detectedFaceFromFaceRef:(id)arg1 algorithmVersion:(long long)arg2;
- (id)_detectedFacesFromAssetChange:(id)arg1;
- (id)_findOrMakeFaceMatchingRef:(id)arg1;
- (void)_processPendingFaceChanges;
- (void)_setupExistingFacesWithAssetChange:(id)arg1;
- (bool)_shouldSkipAssetChange:(id)arg1;
- (void)applyFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)applyFacesChangesFromAssetChange:(id)arg1;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;

@end
