/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServicePersistenceDelegate : NSObject <PVPersistenceDelegate> {
    PHAManager * _photoAnalysisManager;
    PHPhotoLibrary * _photoLibrary;
    unsigned int  activeFaceprintVersion;
}

@property unsigned int activeFaceprintVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_facesInFaceGroup:(id)arg1;
- (id)_fetchPHFacesForFaceIdentifiers:(id)arg1;
- (id)_fetchPHFacesWithClusterSequenceNumbers:(id)arg1;
- (id)_newFaceGroupsFetchOptions;
- (id)_newFacesFetchOptions;
- (id)_newPersonsFetchOptions;
- (id)_newVerifiedPersonsFetchOptions;
- (id)_phFaceFetchResultForFacesWithClusterSequenceNumbers:(id)arg1;
- (id)_pvFaceprintForPHFace:(id)arg1;
- (id)_rejectedFacesForPerson:(id)arg1;
- (id)_userNamedFaceForVerifiedPerson:(id)arg1 inFaceGroup:(id)arg2 unnamedFacesFetchResult:(id*)arg3 faceComparer:(id)arg4;
- (unsigned int)activeFaceprintVersion;
- (id)allAlgorithmicFaceGroups:(id*)arg1;
- (id)allAlgorithmicFaceGroupsAsClusterSequenceNumbers:(id*)arg1;
- (id)allPersons:(id*)arg1;
- (id)assetForIdentifier:(id)arg1 error:(id*)arg2;
- (void)autonameFaceClusters:(id)arg1 faceComparer:(id)arg2;
- (id)clusterSequenceNumbersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (unsigned long long)countOfAlgorithmicFaceGroups:(id*)arg1;
- (unsigned long long)countOfFaces:(id*)arg1;
- (bool)deleteEmptyGroupsOfType:(long long)arg1 error:(id*)arg2;
- (bool)deleteFaceGroupsOfType:(long long)arg1 error:(id*)arg2;
- (bool)deleteSingletonAndEmptyGroupsOfType:(long long)arg1 error:(id*)arg2;
- (id)faceprintsByFaceLocalIdentifiers:(id)arg1 version:(unsigned int)arg2 error:(id*)arg3;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)facesByFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)facesByFaceLocalIdentifiers:(id)arg1 withFaceprintVersion:(unsigned int)arg2 excludeClustered:(bool)arg3 error:(id*)arg4;
- (id)facesForFaceClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2 error:(id*)arg3;
- (id)facesForFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)facesForFaceLocalIdentifiers:(id)arg1 withFaceprintVersion:(unsigned int)arg2 excludeClustered:(bool)arg3 error:(id*)arg4;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)facesFromAsset:(id)arg1 error:(id*)arg2;
- (id)facesWithFaceprintVersion:(unsigned int)arg1 excludeClustered:(bool)arg2 maxCount:(unsigned long long)arg3 error:(id*)arg4;
- (id)facesWithFaceprintVersion:(unsigned int)arg1 minClusterSequenceNumber:(unsigned long long)arg2 maxClusterSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (id)fetchAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id*)arg2;
- (id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)newAssetFetchOptions;
- (void)performAutonamingWithFaceComparer:(id)arg1;
- (bool)persistChangesToAlgorithmicFaceGroups:(id)arg1 andFaces:(id)arg2 returnFaceGroupsWithoutKeyFace:(id*)arg3 error:(id*)arg4;
- (bool)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetClusterSequenceNumberOfAllFaces:(id*)arg1;
- (void)setActiveFaceprintVersion:(unsigned int)arg1;
- (bool)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumber:(unsigned long long)arg1 error:(id*)arg2;
- (id)unclusteredFaceLocalIdentifiersWithFaceprintVersion:(unsigned int)arg1 error:(id*)arg2;
- (id)verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg1 error:(id*)arg2;

@end
