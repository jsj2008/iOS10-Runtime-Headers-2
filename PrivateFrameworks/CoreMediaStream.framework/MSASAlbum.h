/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAlbum : NSObject <NSCopying> {
    NSString * _GUID;
    NSString * _URLString;
    id  _context;
    NSString * _ctag;
    NSString * _foreignCtag;
    bool  _isFamilySharedAlbum;
    NSDictionary * _metadata;
    NSString * _ownerEmail;
    NSString * _ownerFirstName;
    NSString * _ownerFullName;
    NSString * _ownerLastName;
    NSString * _ownerPersonID;
    NSString * _publicURLString;
    int  _relationshipState;
    NSDate * _subscriptionDate;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSString *foreignCtag;
@property (nonatomic) bool isFamilySharedAlbum;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *ownerEmail;
@property (nonatomic, retain) NSString *ownerFirstName;
@property (nonatomic, retain) NSString *ownerFullName;
@property (nonatomic, retain) NSString *ownerLastName;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (nonatomic, retain) NSString *publicURLString;
@property (nonatomic) int relationshipState;
@property (nonatomic, retain) NSDate *subscriptionDate;
@property (nonatomic, readonly) bool useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)URLString;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctag;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)foreignCtag;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFamilySharedAlbum;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (id)ownerEmail;
- (id)ownerFirstName;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerPersonID;
- (id)publicURLString;
- (int)relationshipState;
- (void)setContext:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setForeignCtag:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setIsFamilySharedAlbum:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setOwnerEmail:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setPublicURLString:(id)arg1;
- (void)setRelationshipState:(int)arg1;
- (void)setSubscriptionDate:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)subscriptionDate;
- (bool)useForeignCtag;

@end
