/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABDependentPropertiesUpdateContext : NSObject {
    bool  _hasPendingCropRect;
    bool  _hasPendingImageData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pendingCropRect;
    NSData * _pendingFullscreenImageData;
    NSData * _pendingImageData;
    NSData * _pendingThumbnailImageData;
}

@property (nonatomic) bool hasPendingCropRect;
@property (nonatomic) bool hasPendingImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pendingCropRect;
@property (nonatomic, copy) NSData *pendingFullscreenImageData;
@property (nonatomic, copy) NSData *pendingImageData;
@property (nonatomic, copy) NSData *pendingThumbnailImageData;

- (void)dealloc;
- (bool)flushPendingImageChangesToPerson:(void*)arg1 error:(id*)arg2;
- (bool)hasPendingCropRect;
- (bool)hasPendingImageData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pendingCropRect;
- (id)pendingFullscreenImageData;
- (id)pendingImageData;
- (id)pendingThumbnailImageData;
- (void)resetAllData;
- (void)setHasPendingCropRect:(bool)arg1;
- (void)setHasPendingImageData:(bool)arg1;
- (void)setPendingCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPendingFullscreenImageData:(id)arg1;
- (void)setPendingImageData:(id)arg1;
- (void)setPendingThumbnailImageData:(id)arg1;

@end
