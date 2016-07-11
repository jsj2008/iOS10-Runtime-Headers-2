/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBItemCollection : NSObject <NSSecureCoding, NSXPCListenerDelegate> {
    NSDate * _creationDate;
    NSUUID * _itemQueue_UUID;
    NSXPCListener * _itemQueue_dataConsumersListener;
    bool  _itemQueue_isDataProvider;
    NSArray * _itemQueue_items;
    NSDictionary * _itemQueue_metadata;
    NSString * _itemQueue_originatorBundleID;
    NSString * _itemQueue_originatorTeamID;
    NSDictionary * _itemQueue_privateMetadata;
    NSXPCConnection * _itemQueue_remoteDataProviderConnection;
    NSXPCListenerEndpoint * _itemQueue_remoteDataProviderEndpoint;
    long long  _itemQueue_remotePasteboardState;
    NSString * _persistenceName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) long long changeCount;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSXPCListenerEndpoint *dataConsumersEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataProvider;
@property (nonatomic, readonly) bool isGeneralPasteboard;
@property (nonatomic) bool isRemote;
@property (nonatomic, retain) NSUUID *itemQueue_UUID;
@property (nonatomic, retain) NSXPCListener *itemQueue_dataConsumersListener;
@property (nonatomic) bool itemQueue_isDataProvider;
@property (nonatomic, copy) NSArray *itemQueue_items;
@property (nonatomic, copy) NSDictionary *itemQueue_metadata;
@property (nonatomic, copy) NSString *itemQueue_originatorBundleID;
@property (nonatomic, copy) NSString *itemQueue_originatorTeamID;
@property (nonatomic, retain) NSDictionary *itemQueue_privateMetadata;
@property (nonatomic, retain) NSXPCConnection *itemQueue_remoteDataProviderConnection;
@property (nonatomic, retain) NSXPCListenerEndpoint *itemQueue_remoteDataProviderEndpoint;
@property (nonatomic) long long itemQueue_remotePasteboardState;
@property (nonatomic, readonly, copy) NSArray *items;
@property (getter=isLocalOnly, nonatomic) bool localOnly;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originatorBundleID;
@property (nonatomic, readonly, copy) NSString *originatorTeamID;
@property (nonatomic, readonly, copy) NSString *persistenceName;
@property (getter=isPersistent, nonatomic) bool persistent;
@property (nonatomic, retain) NSDictionary *privateMetadata;
@property (getter=isRemoteDataLoaded, nonatomic, readonly) bool remoteDataLoaded;
@property (getter=isRemoteMetadataLoaded, nonatomic, readonly) bool remoteMetadataLoaded;
@property (readonly) Class superclass;
@property (getter=isSystemPasteboard, nonatomic, readonly) bool systemPasteboard;

+ (id)allowedClassesForSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_remoteDataProviderConnection;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)availableRepresentationTypes;
- (bool)canInstantiateObjectOfClass:(Class)arg1;
- (long long)changeCount;
- (id)copyWithItems:(id)arg1;
- (id)creationDate;
- (id)dataConsumersEndpoint;
- (id)dataConsumersListener;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)establishConnectionToDataProviderCompletionBlock:(id /* block */)arg1;
- (id)expirationDate;
- (bool)hasItemWithRepresentationConformingToType:(id)arg1;
- (bool)hasItemWithRepresentationOfType:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isDataProvider;
- (bool)isGeneralPasteboard;
- (bool)isLocalOnly;
- (bool)isPersistent;
- (bool)isRemote;
- (bool)isRemoteDataLoaded;
- (bool)isRemoteMetadataLoaded;
- (bool)isSystemPasteboard;
- (id)itemQueue_UUID;
- (id)itemQueue_dataConsumersListener;
- (bool)itemQueue_isDataProvider;
- (id)itemQueue_items;
- (id)itemQueue_metadata;
- (id)itemQueue_originatorBundleID;
- (id)itemQueue_originatorTeamID;
- (id)itemQueue_privateMetadata;
- (id)itemQueue_remoteDataProviderConnection;
- (id)itemQueue_remoteDataProviderEndpoint;
- (long long)itemQueue_remotePasteboardState;
- (id)items;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)metadata;
- (id)name;
- (id)originatorBundleID;
- (id)originatorTeamID;
- (id)persistenceName;
- (id)persistenceName;
- (id)privateMetadata;
- (void)setChangeCount:(long long)arg1;
- (void)setDataProviderEndpoint:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsRemote:(bool)arg1;
- (void)setItemQueue_UUID:(id)arg1;
- (void)setItemQueue_dataConsumersListener:(id)arg1;
- (void)setItemQueue_isDataProvider:(bool)arg1;
- (void)setItemQueue_items:(id)arg1;
- (void)setItemQueue_metadata:(id)arg1;
- (void)setItemQueue_originatorBundleID:(id)arg1;
- (void)setItemQueue_originatorTeamID:(id)arg1;
- (void)setItemQueue_privateMetadata:(id)arg1;
- (void)setItemQueue_remoteDataProviderConnection:(id)arg1;
- (void)setItemQueue_remoteDataProviderEndpoint:(id)arg1;
- (void)setItemQueue_remotePasteboardState:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setLocalOnly:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatorBundleID:(id)arg1;
- (void)setOriginatorTeamID:(id)arg1;
- (void)setPersistent:(bool)arg1;
- (void)setPrivateMetadata:(id)arg1;
- (void)setRemoteDataLoaded;
- (void)setRemoteMetadataLoaded;
- (void)setUUID:(id)arg1;
- (void)setUsesServerConnectionToLoadData;
- (void)shutdown;

@end
