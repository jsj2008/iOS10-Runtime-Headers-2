/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCompoundPredicate : NSPredicate {
    void * _reserved2;
    NSArray * _subpredicates;
    unsigned long long  _type;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_operatorForType:(unsigned long long)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2;
- (id)_predicateOperator;
- (id)_subpredicateDescription:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (unsigned long long)compoundPredicateType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)subpredicates;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })MPMLCorePredicateWithEntityClass:(struct EntityClass { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct unordered_map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *> > > { struct __hash_table<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)arg1;
- (id)normalizedPredicateWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_urlWithWatchedChildren;
- (id)br_watchedURL;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

@end
