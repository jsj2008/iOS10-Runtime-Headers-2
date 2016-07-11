/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibrarySearchRequest : MPModelRequest {
    long long  _maximumResultsPerScope;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _scopes;
    NSString * _searchString;
}

@property (nonatomic) long long maximumResultsPerScope;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic, copy) NSString *searchString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)libraryView;
- (long long)maximumResultsPerScope;
- (id)mediaLibrary;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)scopes;
- (id)searchString;
- (void)setMaximumResultsPerScope:(long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
