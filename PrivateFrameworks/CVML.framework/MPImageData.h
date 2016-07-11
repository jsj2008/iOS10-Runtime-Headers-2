/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface MPImageData : NSObject {
    long long  _exifTimestamp;
    NSString * _externalImageId;
    bool  _freeImageInDealloc;
    struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } * _image;
    struct __CVBuffer { } * _imageCVPixelBuffer;
    NSString * _imageFilePath;
}

@property (readonly) long long exifTimestamp;
@property (readonly) NSString *externalImageId;
@property bool freeImageInDealloc;
@property (readonly) struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*image;
@property (readonly) struct __CVBuffer { }*imageCVPixelBuffer;
@property (retain) NSString *imageFilePath;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)exifTimestamp;
- (id)externalImageId;
- (bool)freeImageInDealloc;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)image;
- (struct __CVBuffer { }*)imageCVPixelBuffer;
- (id)imageFilePath;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer { }*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer { }*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4;
- (id)initWithVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4;
- (id)initWithVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4;
- (void)setFreeImageInDealloc:(bool)arg1;
- (void)setImageFilePath:(id)arg1;

@end
