/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordGraphNode : NSObject {
    NSMutableSet * _edges;
    NSMutableSet * _indegrees;
    CKRecord * _record;
}

@property (nonatomic, copy) NSMutableSet *edges;
@property (nonatomic, readonly) unsigned long long indegree;
@property (nonatomic, readonly, copy) NSMutableSet *indegrees;
@property (nonatomic, retain) CKRecord *record;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)edges;
- (unsigned long long)hash;
- (unsigned long long)indegree;
- (id)indegrees;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)record;
- (void)setEdges:(id)arg1;
- (void)setRecord:(id)arg1;

@end
