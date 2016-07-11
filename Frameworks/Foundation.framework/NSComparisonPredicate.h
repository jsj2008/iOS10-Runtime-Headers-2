/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicate : NSPredicate {
    NSExpression * _lhs;
    NSPredicateOperator * _predicateOperator;
    void * _reserved2;
    NSExpression * _rhs;
}

@property (readonly) unsigned long long comparisonPredicateModifier;
@property (readonly) SEL customSelector;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long predicateOperatorType;
@property (readonly, retain) NSExpression *rightExpression;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (unsigned long long)comparisonPredicateModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (SEL)customSelector;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPathExpressionForString:(id)arg1;
- (id)leftExpression;
- (unsigned long long)options;
- (id)predicateFormat;
- (id)predicateOperator;
- (unsigned long long)predicateOperatorType;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)rightExpression;
- (void)setPredicateOperator:(id)arg1;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (bool)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;
- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)_parseComparisonPredicateWithKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 filterClasses:(id)arg5;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })MPMLCorePredicateWithEntityClass:(struct EntityClass { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct unordered_map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *> > > { struct __hash_table<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)arg1;
- (id)normalizedPredicateWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_urlWithWatchedChildren;
- (id)br_watchedURL;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_checkTypeForValue:(id)arg1 inKeyPath:(id)arg2;
- (id)_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id*)arg2;

@end
