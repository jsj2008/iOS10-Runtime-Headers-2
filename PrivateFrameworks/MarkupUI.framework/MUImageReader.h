/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (bool)hasPrivateImageMetadata:(id)arg1;

- (bool)_readAnnotationsFromDataProvider:(struct CGDataProvider { }*)arg1 toController:(id)arg2;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider { }*)arg1 providerSource:(id)arg2 baseWasValid:(bool*)arg3;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata { }*)arg2;
- (void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2;
- (bool)readAnnotationsFromData:(id)arg1 toController:(id)arg2;
- (bool)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2;
- (id)readBaseImageFromData:(id)arg1 baseWasValid:(bool*)arg2;
- (id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(bool*)arg2;

@end
