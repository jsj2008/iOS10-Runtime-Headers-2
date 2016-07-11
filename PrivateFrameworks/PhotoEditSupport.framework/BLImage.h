/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImage : NSObject <NSCopying> {
    struct CGImage { } * _CGImage;
    CIImage * _CIImage;
    UIImage * _UIImage;
    int  _askedImageType;
    bool  _isPlaceholder;
    int  _obtainedImageType;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    int  _storageType;
}

@property (nonatomic) int askedImageType;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (nonatomic) int obtainedImageType;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) int storageType;

+ (id)abbreviatedDescriptionWithImageType:(int)arg1;
+ (id)descriptionWithImageType:(int)arg1;
+ (id)imageWithImage:(id)arg1;

- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)UIImage;
- (int)askedImageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)imageOrientation;
- (id)init;
- (id)initWithFileAtURL:(id)arg1;
- (bool)isPlaceholder;
- (unsigned long long)memoryUsage;
- (int)obtainedImageType;
- (double)scale;
- (void)setAskedImageType:(int)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setObtainedImageType:(int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (int)storageType;

@end
