/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCLocalArticleHeadline : FCHeadline {
    <FCChannelProviding> * _channel;
    NSDictionary * _dictionary;
    NSString * _path;
    FCHeadlineThumbnail * _thumbnail;
}

@property (nonatomic, readonly) <FCChannelProviding> *channel;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)blockedStorefrontIDs;
- (id)channel;
- (id)contentManifestWithContext:(id)arg1;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)dictionary;
- (id)endOfArticleTopicIDs;
- (bool)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isPremium;
- (bool)isSponsored;
- (id)lastModifiedDate;
- (id)localDraftPath;
- (id)path;
- (id)primaryAudience;
- (id)publishDate;
- (id)shortExcerpt;
- (id)sourceChannel;
- (id)sourceName;
- (id)subtitle;
- (id)surfacedByBinID;
- (id)thumbnail;
- (id)thumbnailAssetHandle;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (id)title;
- (id)topicIDs;
- (double)videoDuration;
- (id)videoURL;

@end
